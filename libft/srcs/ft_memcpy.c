/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:56:43 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/10 21:10:03 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	unsigned const char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned const char *)src;
	if (dst || src)
	{
		while (n-- > 0)
			*s1++ = *s2++;
		return (dst);
	}
	return (NULL);
}
