#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

#define _ERROR 0
#define _SA 11
#define _SB 12
#define _SS 13
#define _PA 14
#define _PB 15
#define _RA 16
#define _RB 17
#define _RR	18
#define _RRA 19
#define _RRB 20
#define _RRR 21 

typedef	struct s_set
{
	int	num;
	int	index;
}	t_set;

//make stack A
void		ft_initiate(t_dcllist *a, t_dcllist *b);
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
void		ft_dcllist_takenoed(t_dcllist *lst);
void		ft_swap(t_dcllist *stack);
void		ft_swap_ab(t_dcllist *a, t_dcllist *b);
void		ft_pushAtoB(t_dcllist *a, t_dcllist *b);
void		ft_rotate(t_dcllist *stack);
void		ft_both_rotate(t_dcllist *a, t_dcllist *b);
void		ft_both_rrotate(t_dcllist *a, t_dcllist *b);
void		ft_rrotate(t_dcllist *stack);

//check stack
void		ft_check_stack(t_dcllist *a, t_dcllist *b);


//free aguments and put error message
void		ft_dcllist_clear(t_dcllist **lst);
void		*ft_error1(void	*ptr);
void		ft_error2(t_dcllist *a, t_dcllist *b);
void		ft_clear_stack(t_dcllist *a, t_dcllist *b);

//put stack elements
void		ft_put_dcllistcontents(t_dcllist *lst);
void		ft_put_stack_el(t_dcllist *lsta, t_dcllist *lstb);



//for push_swap program
//
//check the argumet is already sorted.
void		ft_check_stack_a(&stack_a);


#endif