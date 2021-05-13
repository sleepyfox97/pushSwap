/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:09:21 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/13 14:06:58 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	j;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_calloc(1, sizeof(char)));
	j = ft_strlen(s) - start;
	if (len > j)
	{
		sb = (char *)malloc(sizeof(char) * (j + 1));
		if (sb == NULL)
			return (NULL);
		sb = ft_memcpy(sb, (s + start), j);
		sb[j] = '\0';
		return (sb);
	}
	sb = (char *)malloc(sizeof(char) * (len + 1));
	if (sb == NULL)
		return (NULL);
	sb = ft_memcpy(sb, (s + start), len);
	sb[len] = '\0';
	return (sb);
}
