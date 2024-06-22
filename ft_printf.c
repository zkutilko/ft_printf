/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:46:16 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/19 20:38:40 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list *args, char c, int count)
{
	if (c == 'c')
		count = count + ft_check_c(args);
	else if ('s')
		count = count + ft_check_s(args);
	return (count);
}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*ptr;
	int	i;
	int	count;

	ptr = (char *)format;
	i = 0;
	count = 0;
	va_start(args, format);
	while (ptr[i])
	{
		if (ptr[i] == '%')
		{
			count = ft_check(&args, ptr[i + 1], count);
			i = i + 2;
		}
		else
		{
			ft_putchar_fd(ptr[i], 1);
			i++;
			count++;
		}
	}
	va_end (args);
	return (count);
}

