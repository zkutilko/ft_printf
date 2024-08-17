/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:56:36 by zkutilko          #+#    #+#             */
/*   Updated: 2024/07/17 17:52:03 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void puthex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		puthex(num / 16, format);
		puthex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(num - 10 + 'a', 1);
			if (format == 'X')
				ft_putchar_fd(num -10 + 'A', 1);
		}
	}
}

static int	hexlen(unsigned int n)
{
	int i;

	i = 0;
	while(n != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

int ft_printhex(unsigned int n, const char format)
{
	if (n == 0)
		return (write (1, "0", 1));
	else
		puthex(n, format);
	return (hexlen(n));
}

int	ft_check_x(va_list *args)
{
	int	count;

	count = ft_printhex(va_arg(*args, unsigned int), 'x');
	return (count);
}

int	ft_check_X(va_list *args)
{
	int	count;

	count = ft_printhex(va_arg(*args, unsigned int), 'X');
	return (count);
}

// int main()
// {


// 	int n;

// 	n = 14;
// 	ft_check_x(31);
// 	printf("%x", n);
// 	return (0);
// }
