#include "pushSwap.h"

//main for checker gcc *.c -I../../include  -L../libft -lft
int		main(int argc, char *argv[])
{
	t_dcllist	stack_a;
	t_dcllist	stack_b;

	ft_initiate(&stack_a, &stack_b);
	ft_check_input(argc, argv);
	ft_make_stack(argc, argv, &stack_a);
	ft_exec_rule(&stack_a, &stack_b);
	ft_check_stack(&stack_a, &stack_b);
	return (0);
}
