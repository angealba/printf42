/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:59:48 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/01 18:43:51 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(void *p, int *count_chars)
{
	ft_printstr("0x", count_chars);
	ft_printhex((unsigned long long)p, count_chars);
}
