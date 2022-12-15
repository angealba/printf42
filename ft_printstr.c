/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:35:07 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/01 18:42:57 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *str, int *count_chars)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_printstr("(null)", count_chars);
		return ;
	}
	while (str[i])
	{
		ft_printchar(str[i], count_chars);
		i++;
	}
}
