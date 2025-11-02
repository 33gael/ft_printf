/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:37:24 by gaeducas          #+#    #+#             */
/*   Updated: 2025/11/02 12:44:58 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include "../ft_printf.h"
# include <stdarg.h>
# include <unistd.h>

int		putchar(int c);
void	ft_putstr(char *s);
void	ft_putnbr(int nb);

#endif