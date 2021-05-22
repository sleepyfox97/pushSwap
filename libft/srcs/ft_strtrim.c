/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 23:24:48 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/13 21:09:41 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	j = ft_strlen(s1);
	while (check(s1[i], set))
		i++;
	while (check(s1[j - 1], set) && j > 0)
		j--;
	if (i > j)
	{
		str = ft_calloc(1, sizeof(char));
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, (s1 + i), sizeof(char) * (j - i));
	str[j - i] = '\0';
	return (str);
}
