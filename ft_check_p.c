/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:20:43 by ajordan-          #+#    #+#             */
/*   Updated: 2024/08/18 10:33:04 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_create_pointer_address(unsigned long int n, int index)
{
	if (n == 0 && index == 0)
	{
		index += write(1, "(nil)", 5);
		return (index);
	}
	else if (index == 0)
		index += write(1, "0x", 2);
	if (n >= 16)
		index = ft_create_pointer_address(n / 16, index);
	index += write(1, &"0123456789abcdef"[n % 16], 1);
	return (index);
}

int	ft_check_p(va_list *args)
{
	int	count;

	count = ft_create_pointer_address(va_arg(*args, unsigned long int), 0);
	return (count);
}

// int main()
// {
// 	char a = 'a';

// printf("%p\n", &a);

// }