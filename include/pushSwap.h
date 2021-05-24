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

//initiate_stack
void		ft_initiate(t_dcllist *a, t_dcllist *b);
//make stack A
void		ft_make_stack(int argc, char *argv[], t_dcllist *sentinel);
t_set		*ft_set_contents(int num, int index);
void		ft_make_stack_error(t_dcllist *sentinel, t_set *set, int *num);
//check argv
int			*ft_check_input(int argc, char **argv);
int			ft_check_argv(char *str);
int			ft_check_dupulicate(int *num, int size);

//exec each rule
void		ft_exec_rule(t_dcllist *a, t_dcllist *b);
void		ft_choose_rule(t_dcllist *a, t_dcllist *b, char *line);
//each rule
void		ft_swap(t_dcllist *stack);
void		ft_swap_ab(t_dcllist *a, t_dcllist *b);
void		ft_pushAtoB(t_dcllist *a, t_dcllist *b);//from destとかに書き換えた方が分かりやすい．
void		ft_rotate(t_dcllist *stack);
void		ft_both_rotate(t_dcllist *a, t_dcllist *b);
void		ft_rrotate(t_dcllist *stack);
void		ft_both_rotate(t_dcllist *a, t_dcllist *b);

//utility func for rule.take lst and conect lst->next and lst->prev;
void		ft_dcllist_takenoed(t_dcllist *lst);
//check stack
void		ft_check_stack(t_dcllist *a, t_dcllist *b);

//free aguments and put error message
void		*ft_error(void	*ptr);

//put stack
void		ft_put_dcllistcontents(t_dcllist *lst);

#endif