/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:24:05 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/19 20:37:31 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_s(va_list *args)
{
	char	*str;
	int	str_len;

	str = va_arg(*args, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	str_len = ft_strlen(str);
	return (str_len);

}
