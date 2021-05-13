/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:49:33 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/10 02:39:50 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*tmp;

	tmp = (unsigned const char *)s;
	while (n-- > 0)
	{
		if (*tmp == (unsigned const char)c)
			return ((void *)tmp);
		tmp++;
	}
	return (NULL);
}
