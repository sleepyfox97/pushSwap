/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 01:06:13 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/10 11:32:12 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*b1;
	unsigned const char	*b2;
	size_t				i;

	b1 = (unsigned const char *)s1;
	b2 = (unsigned const char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && b1[i] == b2[i])
		i++;
	return (b1[i] - b2[i]);
}
