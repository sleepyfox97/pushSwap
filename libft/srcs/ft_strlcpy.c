/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 04:19:08 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/05 19:56:21 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (src == NULL || dst == NULL)
		return (0);
	i = ft_strlen(src);
	if (dst == NULL || dstsize == 0)
		return (i);
	if (i == 0)
	{
		dst[0] = '\0';
		return (0);
	}
	while (j < dstsize - 1 && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
