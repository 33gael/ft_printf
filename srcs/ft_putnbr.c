/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:44:32 by gaeducas          #+#    #+#             */
/*   Updated: 2025/11/02 15:09:19 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + '0');
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10);
		ft_putnbr_fd(nb % 10);
	}
	return (nb);
}
