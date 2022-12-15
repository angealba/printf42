/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:47:19 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/01 18:43:37 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(unsigned long nb, int *count_chars)
{
	if (nb >= 16)
	{
		ft_printhex(nb / 16, count_chars);
		ft_printhex(nb % 16, count_chars);
	}
	else if (nb <= 9)
		ft_printchar(nb + 48, count_chars);
	else
		ft_printchar(nb + 87, count_chars);
}
