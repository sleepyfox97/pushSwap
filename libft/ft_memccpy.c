/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:16:29 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/10 21:10:24 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	unsigned const char	*s2;
	size_t				i;

	s1 = (unsigned char *)dst;
	s2 = (unsigned const char *)src;
	i = 0;
	while (i < n && *s2)
	{
		s1[i] = s2[i];
		if (s1[i] == (unsigned char)c)
		{
			i++;
			return ((void *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
