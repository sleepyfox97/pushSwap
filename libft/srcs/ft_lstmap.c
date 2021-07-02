/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:34:07 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/10 23:12:57 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new;

	if (f == NULL)
		return (NULL);
	start = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new)
		{
			ft_lstadd_back(&start, new);
			lst = lst->next;
		}
		else
			ft_lstclear(&start, del);
	}
	return (start);
}
