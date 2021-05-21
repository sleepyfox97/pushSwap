#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef	struct s_set
{
	int	num;
	int	index;
}	t_set;


t_dcllist	*ft_dcllist_takenoed(t_dcllist *lst);
void		ft_swap(t_dcllist *stack);
void		ft_pushAtoB(t_dcllist **a, t_dcllist **b);
t_set		*ft_make_set(int num, int index);
t_dcllist	*ft_make_stack(int argc, char *argv[]);
void		ft_put_dcllistcontents(t_dcllist *lst);



#endif