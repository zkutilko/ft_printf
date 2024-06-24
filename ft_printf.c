/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:46:16 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/24 17:15:28 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_param(va_list *args, char c, int count)
{
	if (c == 'c')
		count += ft_check_c(args);
	else if (c == 's')
		count = count + ft_check_s(args);
	else if (c == 'd' || c == 'i')
		count = count + ft_check_d(args);
	else if (c == 'u')
		count += ft_check_u(args);
	else if (c == '%')
		count += ft_check_per();
	// else if (c == 'p')
	// 	count += ft_check_p(args);
	// else if (c == 'x')
	// 	count += ft_check_x(args);
	return (count);
}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*ptr;
	int		count;
	int		i;

	ptr = (char *)format;
	i = 0;
	count = 0;
	va_start(args, format);
	while (ptr[i])
	{
		if (ptr[i] == '%')
		{
			count = ft_check_param(&args, ptr[i + 1], count);
			i += 2;
		}
		else
		{
			ft_putchar_fd(ptr[i], 1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
