#include <unistd.h>
#include <stdlib.h>
//#include "../libft/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s1;
	unsigned const char	*s2;
	size_t				i;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned const char *)src;
	if (len == 0 || s1 == s2)
		return (dst);
	if (s1 > s2)
	{
		while (len-- > 0)
			s1[len] = s2[len];
	}
	else
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dst);
}

static size_t	null_strlen(char *s)
{
	size_t	i;

	if (s == NULL)
		i = 0;
	else
		i = ft_strlen((const char *)s);
	return (i);
}

static char	*safe_free(char **s)
{
	free(*s);
	*s = NULL;
	return (NULL);
}

static char	*slide_box(char **box, size_t i)
{
	size_t	j;
	char	*nbox;

	j = null_strlen(box[0]);
	nbox = (char *)malloc(sizeof(char) * (j - i));
	if (nbox == NULL)
		return (safe_free(box));
	i++;//ここでi++してるので，注意
	nbox = (char *)ft_memmove(nbox, (box[0] + i), (j - i));//j>i is garantee
	nbox[j - i] = '\0'; 
	safe_free(box);
	box[0] = nbox;
	return (box[0]);
}

static char	*make_line(char **box)
{
	size_t	i;
	char	*line;

	i = 0;
	while (box[0][i] != '\0' && box[0][i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (line == NULL)
		return (safe_free(box));
	line = (char *)ft_memmove(line, box[0], i);
	line[i] = '\0';
	if (box[0][i] == '\0')
	{
		safe_free(box);
		return (line);
	}
	box[0] = slide_box(box, i);
	if (box[0] == NULL)
		return (safe_free(&line));
	return (line);
}

static char	*free_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*re;

	i = null_strlen(s1);
	j = null_strlen(s2);
	re = (char *)malloc(sizeof(char) * (i + j + 1));
	if (re == NULL)
		return (NULL);
	if (s1 != NULL)
		re = (char *)ft_memmove(re, s1, i);
	ft_memmove((re + i), s2, j);
	re[i + j + 1] = '\0';
	safe_free(&s1);
	return (re);
}

static int	ft_find_newline(char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

//不正なfdは渡されないものとする．としたかったが，readの失敗は見た方が良さげ
int	get_next_line(int fd, char **line)
{
	char		*pre;
	static char	*box = NULL;
	ssize_t		buf;

	pre = (char *)malloc(sizeof(char) * 100);
	if (pre == NULL || fd < 0)
		return (-1);
	if (!ft_find_newline(box))
	{
		while (1)
		{
			buf = read(fd, pre, 99);
			pre[buf] = '\0';
			box = free_strjoin(box, pre);
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
