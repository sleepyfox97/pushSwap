#include <unistd.h>
#include <stdio.h>
#include "../libft/libft.h"

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
	nbox = ft_memmove(nbox, (box[0] + i), (j - i));//j>i is garantee
	nbox[j - i] = '\0'; 
	free(box[0]);
	box[0] = nbox;
	return (box[0]);
}

static char	*make_line(char **box)
{
	size_t	i;
	size_t	j;
	char	*line;

	i = 0;
	while (box[0][i] != '\0' && box[0][i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (line == NULL)
		return (safe_free(box));
	line = ft_memmove(line, box[0], i);
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
		re = ft_memmove(re, s1, i);
	ft_memmove((re + i), s2, j);
	re[i + j + 1] = '\0';
	safe_free(&s1);
	return (re);
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
	if (!box || ft_strchr(box, '\n'))
	{
		while (1)
		{
			buf = read(fd, pre, 100);
			pre[buf] = '\0';
			box = free_strjoin(box, pre);
			if (ft_strchr(box, '\n'))
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

int main(int argc, char *argv[])
{
	// char *box = malloc(11);
	// size_t	i;

	// i = 0;
	// while (i < 5)
	// 	box[i++] = '1';
	// box[i++] = '\n';
	// while(i < 10)
	// 	box[i++] = '2';
	// printf("box = %s\n", box);
	// char *line = make_line(&box);
	// printf("box = %s\n", box);
	// printf("line = %s\n", line);

	// if (argc != 3)
	// 	return (0);
	// char *re;

	// re = free_strjoin(argv[1], argv[2]);
	// printf("%s\n", re);
	char *line;
	while(0 <= get_next_line(0, &line))
	{
		printf("%s", line);
	}
	return (0);
}