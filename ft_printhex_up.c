/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:28:08 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/01 18:43:44 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex_up(unsigned long nb, int *count_chars)
{
	if (nb >= 16)
	{
		ft_printhex_up(nb / 16, count_chars);
		ft_printhex_up(nb % 16, count_chars);
	}
	else if (nb <= 9)
		ft_printchar(nb + 48, count_chars);
	else
		ft_printchar(nb + 55, count_chars);
}
