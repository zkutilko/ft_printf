/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:41:50 by zkutilko          #+#    #+#             */
/*   Updated: 2024/08/18 10:32:52 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_d(va_list *args)
{
	char	*num;
	int		len;

	num = ft_itoa(va_arg(*args, int));
	ft_putstr_fd(num, 1);
	len = ft_strlen(num);
	free(num);
	return (len);
}
