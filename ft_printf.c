/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:34:26 by gaeducas          #+#    #+#             */
/*   Updated: 2025/11/02 14:12:30 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	count;
	int		res;

	va_start(ap, format);
	count = 0;
	while (format[count])
	{
		if (format[count] == '%')
		{
			if (format[count + 1 == '%'])
				count += ft_putchar('%');
			else if (format[count + 1] == 'd')
			{
				res = va_arg(ap, int);
				ft_putnbr(res);
			}
			else if (format[count + 1] == 's')
				ft_putstr((char *)format);
		}
		else
			ft_putchar(format[count]);
		count++;
	}
	va_end(ap);
}
