#include "pushSwap.h"

//独立させといて，番兵のfront backに繋いでいく．
void	ft_dcllist_takenoed(t_dcllist *lst)
{
	lst->prev->next = lst->next;//切り取る奴の前のnextを切り取るやつのprevのnextに繋ぐ
	lst->next->prev = lst->prev;//切り取る奴の次のprevを切り取る奴のprevに繋ぐ
	lst->prev = lst;
	lst->next = lst;
	return ;
}
