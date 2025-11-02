/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:34:26 by gaeducas          #+#    #+#             */
/*   Updated: 2025/11/02 23:59:25 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	i;
	int		count;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		/*		if (format[i] == '%')
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
					*/
		count++;
	}
	va_end(ap);
}

int	ft_percent(va_list ap, const char *format)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (format[i + 1] == 's')
	{
		count += ft_putstr(va_arg(ap, char *));
		if (!format)
			return (ft_putstr("null"));
	}
	else if (format[i + 1] == '%')
		count += ft_putchar('%');
	else if (format[i + 1] == 'd' || format[i + 1] == 'u')
		count += ft_putnbr(va_arg(ap, int));
	else if (format[i + 1] == 'c')
		count += ft_putchar(va_arg(ap, int));
}
