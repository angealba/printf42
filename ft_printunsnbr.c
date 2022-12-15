/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:35:32 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/01 18:41:51 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printunsnbr(unsigned int nb, int *count_chars)
{
	if (nb > 9)
	{
		ft_printunsnbr(nb / 10, count_chars);
		ft_printunsnbr(nb % 10, count_chars);
	}
	else
		ft_printchar(nb + 48, count_chars);
}
