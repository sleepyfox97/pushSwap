#include "pushSwap.h"

//コマンドライン引数を用いて番兵ノードを持った
//現状番兵もmallocしているが，しない方がいいかもしれない．(freeするときのこととかを考えると)
//argc argv, stack_aを受け取って，いい感じにstackを作る関数．途中で失敗したら，エラー文出してfreeした後にexitして終了
//番兵ノード＝sentinel node

void	ft_make_stack(int argc, char *argv[], t_dcllist *sentinel)
{
	t_dcllist	*new;
	t_set		*tmp;
	int			*num;
	int			i;

	num = ft_check_input(argc, argv);//この中でエラー文まで処理してる
	if (num == NULL)
		exit (0);
	i = 0;
	while (i + 1 < argc)//error処理を全体的に上手にやりたい．
	{
		tmp = ft_set_contents(num[i], i);
		if (tmp == NULL)
			ft_make_stack_error(sentinel, tmp, num);
		new = ft_dcllist_new(tmp);
		if (new == NULL)
			ft_make_stack_error(sentinel, tmp, num);
		ft_dcllist_addfront(&sentinel, new);
		i++;
	}
	free (num);
	return ;
}

void	ft_make_stack_error(t_dcllist *sentinel, t_set *set, int *num)
{
	ft_error(num);
	ft_safe_free((void **)&set);
	//ft_dclclear(sentinel);
	exit (0);
}

//gcc ft_check_input.c ft_error.c ft_make_stack.c ft_set_contents.c -I../include  -L../libft -lft
//でコンパイルすれば，以下のテストが実行可能．
// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	t_dcllist	stack_a;
// 	t_dcllist	stack_b;
// 	t_set		*tmp;

// 	stack_a.contents = NULL;
// 	stack_a.next = &stack_a;
// 	stack_a.prev = &stack_a;
// 	stack_b.contents = NULL;
// 	ft_make_stack(argc, argv, &stack_a);
// 	tmp = (t_set *)stack_a.next->contents;
// 	printf("%d\n", tmp->num);
// 	tmp = (t_set *)stack_a.next->next->contents;
// 	printf("%d\n", tmp->num);
// }