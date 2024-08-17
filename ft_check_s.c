/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:24:05 by zkutilko          #+#    #+#             */
/*   Updated: 2024/07/17 15:58:49 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_s(va_list *args)
{
	char	*str;

	str = va_arg(*args, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
