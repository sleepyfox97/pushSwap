#include "pushSwap.h"

//なぜ，(t_set *)(a->contents)->numじゃうまく行かないのか？
void	ft_check_stack(t_dcllist *a, t_dcllist *b)
{
	t_set	*tmp1;
	t_set	*tmp2;

	if (b->next != b)
	{
		//clear a and b
		write(1, "KO\n", 3);
		exit (0);
	}
	a = a->next;
	while (a->next->contents != NULL)
	{
		tmp1 = (t_set *)a->contents;
		tmp2 = (t_set *)a->next->contents;
		if (tmp1->num > tmp2->num)
			{
				write(1, "KO\n", 3);
				//clear
				exit (0);
			}
		a = a->next;
	}
	write(1, "OK\n", 3);
	return ;
	//clear
}

//gcc ft_check_input.c ft_error.c ft_make_stack.c ft_check_stack.c  ft_set_contents.c -I../include  -L../libft -lft
//上記でコンパイルして，確認可能，
// int	main(int argc, char *argv[])
// {
// 	t_dcllist	stack_a;
// 	t_dcllist	stack_b;

// 	stack_a.contents = NULL;
// 	stack_a.next = &stack_a;
// 	stack_a.prev = &stack_a;
// 	stack_b.contents = NULL;
// 	stack_b.next = &stack_b;
// 	stack_b.prev = &stack_b;
// 	ft_make_stack(argc, argv, &stack_a);
// 	//ft_exec_rule(stack_a, stack_b);
// 	ft_check_stack(&stack_a, &stack_b);
// 	return (0);
// }
