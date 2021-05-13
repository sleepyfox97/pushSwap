/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khiroshi <khiroshi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 23:36:48 by khiroshi          #+#    #+#             */
/*   Updated: 2020/11/12 00:12:39 by khiroshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char			tmp;
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((unsigned char)c <= 0x7f)
		write(fd, &c, 1);
	else
	{
		tmp = (uc >> 6) ^ 0xC0;
		write(fd, &tmp, 1);
		tmp = (uc & 0x3F) ^ 0x80;
		write(fd, &tmp, 1);
	}
}
