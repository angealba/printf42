/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:35:17 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/01 18:41:27 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int nb, int *count_chars)
{
	if (nb == -2147483648)
	{
		ft_printstr("-2147483648", count_chars);
		return ;
	}
	if (nb < 0)
	{
		ft_printchar('-', count_chars);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_printnbr(nb / 10, count_chars);
		ft_printnbr(nb % 10, count_chars);
	}
	else
		ft_printchar(nb + 48, count_chars);
}
