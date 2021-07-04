#include "pushSwap.h"

//main for checker gcc *.c -I../../include  -L../libft -lft
int		main(int argc, char *argv[])
{
	t_dcllist	stack_a;
	t_dcllist	stack_b;
	t_dcllist	argo;

	ft_initiate(&stack_a, &stack_b);
	ft_make_stack(argc, argv, &stack_a);
	ft_search_arugo(argc, &stack_a, &stack_b, &argo);
	ft_push_argo(argo);
	return (0);
}

ft_search_arugo(int argc, t_dcllist stack_a, t_dcllist stack_b, t_dcllist argo)
{
	if (argc == 2)
		
	else if (argc == 3)

	else if (argc == 4)
	
}