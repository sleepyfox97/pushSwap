#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

#define _ERROR 0

typedef	struct s_set
{
	int	num;
	int	index;
}	t_set;


t_dcllist	*ft_dcllist_takenoed(t_dcllist *lst);
void		ft_swap(t_dcllist *stack);
void		ft_pushAtoB(t_dcllist **a, t_dcllist **b);
t_set		*ft_set_contents(int num, int index);
void		ft_put_dcllistcontents(t_dcllist *lst);
void		*ft_error(void	*ptr);


//make stack A
void		ft_make_stack(int argc, char *argv[], t_dcllist *sentinel);
void		ft_make_stack_error(t_dcllist *sentinel, t_set *set, int *num);
//check argv
int			*ft_check_input(int argc, char **argv);
int			ft_check_argv(char *str);
int			ft_check_dupulicate(int *num, int size);

//check stack
void		ft_check_stack(t_dcllist *a, t_dcllist *b);

#endif