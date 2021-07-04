#include "pushSwap.h"

void	*ft_error1(void	*ptr)
{
	write(2, "Error\n", 6);
	ft_safe_free(&ptr);
	return (NULL);
}

void	ft_error2(t_dcllist *a, t_dcllist *b)
{
	write(2, "Error\n", 6);
	ft_clear_stack(a, b);
	exit (0);
}

void	ft_clear_stack(t_dcllist *a, t_dcllist *b)
{
	if (a != NULL)
		ft_dcllist_clear(&a);
	if (b != NULL)
		ft_dcllist_clear(&b);
	return ;
}

