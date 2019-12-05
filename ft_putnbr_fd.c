/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:15:35 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/10/24 16:12:59 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int b;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		b = n * -1;
	}
	else
		b = n;
	if (b >= 10)
		ft_putnbr_fd(b / 10, fd);
	ft_putchar_fd(b % 10 + '0', fd);
}
