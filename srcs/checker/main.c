#include "pushSwap.h"

//main for checker gcc *.c -I../../include  -L../libft -lft
int		main(int argc, char *argv[])
{
	t_dcllist	stack_a;
	t_dcllist	stack_b;

	ft_initiate(&stack_a, &stack_b);
	ft_make_stack(argc, argv, &stack_a);
	ft_exec_rule(&stack_a, &stack_b);
	ft_check_stack(&stack_a, &stack_b);
	ft_clear_stack(&stack_a, &stack_b);
	return (0);
}

// void	ft_initiate(t_dcllist *a, t_dcllist *b)
// {
// 	a->contents = NULL;
// 	a->next = a;
// 	a->prev = a;
// 	b->contents = NULL;
// 	b->next = b;
// 	b->prev = b;
// 	return ;
// }

//checker用のmain.cとpush swap用のmain.cをそれぞれ用意したい．
//srcsディレクトリをpushswap用，checker用，共通の三つのディレクトリに分けて，scrcをlibftと合わせてライブラリにして，それを残り二つと組み合わせるみたいなコンパイルの仕方にする？

//番兵をもちいたlstclear関数の作成を行う




// int main(int argc, char *argv[])
// {
	// check argc and argv
	// make_stack

	// while roop
	// 	get standard input
	// 	by the input valinable do some order to the stack
	// check stack A and B
	// return good or not.
// }






//main for check make stack
// int		main(int argc, char *argv[])
// {
// 	t_dcllist	*stacka;
// 	t_dcllist	*stackb;


// 	stacka = ft_make_stack(argc, argv);
// 	stackb = ft_make_stack(argc, argv);
// 	while (1)
// 	{
// 		ft_put_dcllistcontents(stacka);
// 		stacka = stacka->next;
// 		if (stacka->contents == NULL)
// 			break ;
// 	}
// 	ft_pushAtoB(&stacka, &stackb);
// 	printf("\x1b[33mstackA\x1b[39m\n");
// 	while (1)
// 	{
// 		ft_put_dcllistcontents(stacka);
// 		stacka = stacka->next;
// 		if (stacka->contents == NULL)
// 			break ;
// 	}
// 	printf("\x1b[33mstackB\x1b[39m\n");
// 	while (1)
// 	{
// 		ft_put_dcllistcontents(stackb);
// 		stackb = stackb->next;
// 		if (stacka->contents == NULL)
// 			break ;
// 	}
// 	return (0);
	//check done 5/14
	// t_dcllist	*node0;
	// t_dcllist	*node1;
	// t_dcllist	*node2;
	// t_set		*tmp;

	// node0 = ft_dcllist_new(NULL);
	// tmp = ft_make_set(1, 1);
	// node1 = ft_dcllist_new(tmp);
	// tmp = ft_make_set(2, 2);
	// node2 = ft_dcllist_new(tmp);
	// ft_dcllist_addback(&node0, node1);
	// ft_dcllist_addfront(&node0, node2);
	// ft_put_dcllistcontents(node0);
	// ft_put_dcllistcontents(node1);
	// ft_put_dcllistcontents(node2);
// }
