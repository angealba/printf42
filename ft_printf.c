/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:12:04 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/01 18:46:05 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_formats(va_list args, const char *str, int *count_chars, int *i)
{
	if (str[*i] == 'c')
		ft_printchar(va_arg(args, int), count_chars);
	else if (str[*i] == 's')
		ft_printstr(va_arg(args, char *), count_chars);
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_printnbr(va_arg(args, int), count_chars);
	else if (str[*i] == 'u')
		ft_printunsnbr(va_arg(args, unsigned int), count_chars);
	else if (str[*i] == 'x')
		ft_printhex(va_arg(args, unsigned int), count_chars);
	else if (str[*i] == 'X')
		ft_printhex_up(va_arg(args, unsigned int), count_chars);
	else if (str[*i] == 'p')
		ft_printptr(va_arg(args, void *), count_chars);
	else if (str[*i] == '%')
		ft_printchar('%', count_chars);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	int		count_chars;
	va_list	args;

	va_start(args, str);
	len = ft_strlen(str);
	i = 0;
	count_chars = 0;
	while (str[i] && i < len)
	{
		if (str[i] != '%')
		{
			ft_printchar(str[i], &count_chars);
		}
		else
		{
			i++;
			ft_formats(args, str, &count_chars, &i);
		}
		i++;
	}
	va_end(args);
	return (count_chars);
}

/*int	main(void)
{
	char			c;
	char			*str;
	int				nb;
	unsigned int	u;
	int				p1;
	int				p2;

	c = 'a';
	str = "hola";
	nb = -986568512;
	u = 975136;
	
	//p1 = ft_printf("Char ft: %c\n", c);
	//p2 = printf("Char pf: %c\n", c);
	//p1 = ft_printf("String ft: %s\n", str);
	//p2 = printf("String pf: %s\n", str);
	//p1 = ft_printf("int ft: %d\n", nb);
	//p2 = printf("int pf: %d\n", nb);
	//p1 = ft_printf("unsigned ft: %u\n", u);
	//p2 = printf("unsigned pf: %u\n", u);
	//p1 = ft_printf("nb en hex ft: %x\n", nb);
	//p2 = printf("nb en hex pf: %x\n", nb);
	//p1 = ft_printf("nb en HEX ft: %X\n", nb);
	//p2 = printf("nb en HEX pf: %X\n", nb);
	//p1 = ft_printf("Pointer ft: %p\n", str);
	//p2 = printf("Pointer pf: %p\n", str);
	p1 = ft_printf("Percent ft: %% %i%%\n", nb);
	p2 = printf("Percent pf: %% %i%%\n", nb);
	printf("ft return = %d\n", p1);
	printf("pf return = %d\n", p2);
}*/
