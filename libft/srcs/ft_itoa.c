/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:11:26 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/06 16:16:07 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static unsigned int	nb_len(int n)
{
	unsigned int	i;

	i = 0;
	while (n <= -10 || 10 <= n)
	{
		n = n / 10;
		i++;
	}
	if (n >= 0)
		i++;
	else
		i = i + 2;
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	char			*nb;

	i = nb_len(n);
	nb = (char *)malloc(sizeof(char) * (i + 1));
	if (nb == NULL)
		return (NULL);
	nb[i--] = '\0';
	if (n == 0)
	{
		nb[0] = '0';
		return (nb);
	}
	if (n < 0)
	{
		nb[0] = '-';
		nb[i--] = n % (-10) * (-1) + '0';
		n = n / 10 * (-1);
	}
	while (n > 0)
	{
		nb[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (nb);
}
