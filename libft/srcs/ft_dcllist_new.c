#include "../libft.h"

t_dcllist	*ft_dcllstnew(void	*contents)
{
	t_dcllist	*new;

	new = (t_dcllist *)malloc(sizeof(t_dcllist));
	if (new == NULL)
		return (NULL);
	new->contents = contents;
	new->next = new;
	new->prev = new;
	return (new);
}

// int main()
// {
// 	char *s = "abcdefg";
// 	t_dcllist	*new;

// 	new = ft_dcllstnew((void *)s);
// 	printf("%s\n", (char *)new->contents);
// 	return (0);
// }