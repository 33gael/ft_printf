/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:34:26 by gaeducas          #+#    #+#             */
/*   Updated: 2025/11/03 13:22:43 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_percent(va_list ap, const char *format)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!format)
		return (ft_putstr("null"));
	else if (format[i + 1] == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format[i + 1] == '%')
		count += ft_putchar('%');
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (format[i + 1] == 'u')
		count += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (format[i + 1] == 'X' || format[i + 1] == 'x')
		count += ft_putnbr_hex(va_arg(ap, int));
	else if (format[i + 1] == 'c')
		count += ft_putchar(va_arg(ap, int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	i;
	int		count;

	count = 0;
	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		ft_percent(ap, format);
		i++;
	}
	va_end(ap);
	return (count);
}
