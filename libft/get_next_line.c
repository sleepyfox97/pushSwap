#include "libft.h"

static char *null_strjoin(char *s1, char *s2)
{
	size_t i;
	size_t j;
	char *re;

	i = ft_null_strlen(s1) + ft_null_strlen(s2) + 1;
	re = (char *)malloc(sizeof(char) * i);
	if (re == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		i = -1;
		while(s1[++i] != '\0')
			re[i] = s1[i];
	}
	j = 0;
	while(s2[j] != '\0')
		re[i++] = s2[j++];
	re[i] = '\0';
	free(s1);
	return (re);
}

static char	*slide_box(char **box, size_t i)
{
	size_t	j;
	char 	*nbox;

	j = ft_null_strlen(box[0]);
	nbox = (char *)malloc(sizeof(char) * (j - i));
	if (nbox == NULL)
		return(ft_safe_free((void**)box));
	i++;
	ft_strlcpy(nbox, (box[0] + i), (j - i + 1));
	free(*box);
	*box = nbox;
	return (*box);
}

static char *make_line(char **box)
{
	size_t i;
	char	*line;

	i = 0;
	while(box[0][i] != '\n' && box[0][i] != '\0')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (line == NULL)
		return (ft_safe_free((void**)box));
	ft_strlcpy(line, box[0], (i + 1));
	if (box[0][i] == '\0')
	{
		ft_safe_free((void**)box);
		return (line);
	}
	if (!slide_box(box, i))
		return(ft_safe_free((void**)(&line)));
	return (line);
}

static int ft_find_newline(char *s)
{
	size_t i;

	i = 0;
	if (s == NULL)
		return (0);
	while(s[i] != '\0')
	{
		if (s[i] == '\n')
			return (0);
		i++;
	}
	return (0);
}

int get_next_line(int fd, char **line)
{
	char *pre;
	static char *box = NULL;
	int buf;

	pre = (char *)malloc(sizeof(char) * 100);
	if (pre == NULL|| fd < 0)
		return (-1);
	if (!ft_find_newline(box))
	{
		while(1)
		{
			buf = read(fd , pre, 99);
			pre[buf] = '\0';
			box = null_strjoin(box, pre);
			if (ft_find_newline(box) || buf == 0)
				break ;
		}
	}
	free(pre);
	*line = make_line(&box);
	if (line == NULL)
		return (-1);
	if (box == NULL)
		return (0);
	return (1);
}
