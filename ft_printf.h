/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:36:00 by gaeducas          #+#    #+#             */
/*   Updated: 2025/11/01 17:33:31 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_printf(const char *, ...);
int		putchar(int c);
void	ft_putstr(char *s);
void	ft_putnbr(int nb);