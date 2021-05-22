#include "pushSwap.h"

void	ft_exec_rule(t_dcllist *a, t_dcllist *b)
{
	char	*line;
	int		i;

	i = 1;
	while (i != _ERROR)
	{
		i = get_next_line(0, &line);
		ft_choose_rule(a, b, line);
		if (i == -1)
			exit (0);
	}
ft_put_dcllistcontents(a);
ft_put_dcllistcontents(b);
}

void	ft_choose_rule(t_dcllist *a, t_dcllist *b, char *line)
{
	if (!ft_strncmp(line, "sa", 3))
		ft_swap(a);
	else if (!ft_strncmp(line, "sb", 3))
		ft_swap(b);
	else if (!ft_strncmp(line, "ss", 3))
		ft_swap_ab(a, b);
	else if (!ft_strncmp(line, "pa", 3))
		ft_pushAtoB(b, a);
	else if (!ft_strncmp(line, "pb", 3))
		ft_pushAtoB(a, b);
	else
		write(2, "Error\n", 6);
	// else if (!ft_strncmp(line, "ra", 3))
	// 	ft_swap();
	// else if (!ft_strncmp(line, "rb", 3))
	// 	ft_swap();
	// else if (!ft_strncmp(line, "rr", 3))
	// 	ft_swap();
	// else if (!ft_strncmp(line, "rra", 4))
	// 	ft_swap();
	// else if (!ft_strncmp(line, "rrb", 4))
	// 	ft_swap();
	// else if (!ft_strncmp(line, "rrr", 4))
	// 	ft_swap();
	// ft_put_dcllistcontents(a);
	// ft_put_dcllistcontents(b);
	return ;
}