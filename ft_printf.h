/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:09:21 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/23 19:47:06 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_check_param(va_list *args, char c, int count);
int	ft_case_c(va_list *args);
int	ft_check_s(va_list *args);
int	ft_check_d(va_list *args);

#endif
