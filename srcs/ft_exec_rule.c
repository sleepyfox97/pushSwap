#include "pushSwap.h"

void	ft_exec_rule(t_dcllist *a, t_dcllist *b)
{
	char	*line;
	int		i;

	while (1)
	{
		i = get_next_line(0, &line);
		if (i < 0)
			exit (0);
		ft_choose_rule(a, b, line);
	}
}

void	ft_choose_rule(t_dcllist *a, t_dcllist *b, char *line)
{
	if (!ft_strncmp(line, "sa", 3))
		ft_swap();
	else
		write(2, "Error\n");
	// else if (!ft_strncmp(line, "sb", 3))
	// 	ft_swap();
	// else if (!ft_strncmp(line, "ss", 3))
	// 	ft_swap();
	// else if (!ft_strncmp(line, "pa", 3))
	// 	ft_swap();
	// else if (!ft_strncmp(line, "pb", 3))
	// 	ft_swap();
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
}