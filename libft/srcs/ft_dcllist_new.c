#include "../libft.h"

t_dcllist	*ft_dcllist_new(void *contents)
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

// void		ft_dcllist_addback(t_dcllist **lst, t_dcllist *new);
// void		ft_dcllist_addfront(t_dcllist **lst, t_dcllist *new);
// #include <stdio.h>
// int main()
// {
// 	char *s = "abcdefg";
// 	t_dcllist	*new;
// 	t_dcllist	*next;
// 	t_dcllist	*third;

// 	new = ft_dcllist_new((void *)s);
// 	printf("%s\n", (char *)new->contents);
// 	next = ft_dcllist_new((void *)s);
// 	ft_dcllist_addfront(&new , next);
// 	third = ft_dcllist_new((void *)s);
// 	ft_dcllist_addfront(&new , third);
// 	printf("new->prev = %p\n", new->prev);
// 	printf("new = %p\n", new);
// 	printf("new->next = %p\n", new->next);
// 	printf("\nnext->prev = %p\n", next->prev);
// 	printf("next = %p\n", next);
// 	printf("next->next = %p\n", next->next);
// 	printf("\nthird->prev = %p\n", third->prev);
// 	printf("third = %p\n", third);
// 	printf("third->next = %p\n", third->next);
// 	return (0);
// }
