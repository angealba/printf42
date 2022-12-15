/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:12:25 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/01 18:40:34 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_formats(va_list args, const char *str, int *count_chars, int *i);
size_t	ft_strlen(const char *s);
void	ft_printchar(char c, int *count_chars);
void	ft_printstr(char *str, int *count_chars);
void	ft_printnbr(int nb, int *count_chars);
void	ft_printunsnbr(unsigned int nb, int *count_chars);
void	ft_printhex(unsigned long nb, int *count_chars);
void	ft_printhex_up(unsigned long nb, int *count_chars);
void	ft_printptr(void *p, int *count_chars);

#endif
