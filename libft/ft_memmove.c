/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:23:09 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/10 21:43:53 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s1;
	unsigned const char	*s2;
	size_t				i;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned const char *)src;
	if (len == 0 || s1 == s2)
		return (dst);
	if (s1 > s2)
	{
		while (len-- > 0)
			s1[len] = s2[len];
	}
	else
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dst);
}
