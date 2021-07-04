/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 13:51:43 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/14 00:34:37 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	result;
	long		minus;

	minus = 1;
	result = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			minus = -1;
	}
	while ('0' <= *str && *str <= '9')
	{
		if (result > LONG_MAX / 10 && minus == 1)
			return (-1);
		else if (result > LONG_MAX / 10 && minus == -1)
			return (0);
		else if (result == LONG_MAX / 10 && *str > '7' && minus == 1)
			return (-1);
		else if (result == LONG_MAX / 10 && *str > '8' && minus == -1)
			return (0);
		result = ((*str++) - '0') + result * 10;
	}
	return ((int)(result * minus));
}
