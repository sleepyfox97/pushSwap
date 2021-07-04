#include "pushSwap.h"

#include <stdio.h>

void	ft_exec_rule(t_dcllist *a, t_dcllist *b)
{
	char	*line;
	int		i;

	i = 1;
	while (i != _ERROR)
	{
		i = get_next_line(0, &line);
		if (i == -1)
			exit (0);
		ft_choose_rule(a, b, line);
ft_put_stack_el(a, b);
	}
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
	else if (!ft_strncmp(line, "ra", 3))
		ft_rotate(a);
	else if (!ft_strncmp(line, "rb", 3))
		ft_rotate(b);
	else if (!ft_strncmp(line, "rr", 3))
		ft_both_rotate(a, b);
	else if (!ft_strncmp(line, "rra", 4))
		ft_rrotate(a);
	else if (!ft_strncmp(line, "rrb", 4))
		ft_rrotate(b);
	else if (!ft_strncmp(line, "rrr", 4))
		ft_both_rrotate(a, b);
	else
		ft_error2(a, b);
	return ;
}
