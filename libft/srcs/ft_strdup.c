/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 23:50:49 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/06 00:54:06 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = sizeof(char) * (ft_strlen(s1) + 1);
	s2 =  (char *)malloc(i);
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, i);
	return (s2);
}
