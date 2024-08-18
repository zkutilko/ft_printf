/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:09:21 by zkutilko          #+#    #+#             */
/*   Updated: 2024/08/18 10:31:26 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_check_param(va_list *args, char c, int count);
int		ft_check_c(va_list *args);
int		ft_check_s(va_list *args);
int		ft_check_d(va_list *args);
char	*ft_unsigned_itoa(unsigned int n);
int		ft_check_u(va_list *args);
char	*ft_unsigned_itoah(unsigned int n);
int		ft_check_x(va_list *args);
int		ft_check_xup(va_list *args);
int		ft_check_per(void);
int		ft_printhex(unsigned int n, const char format);
int		ft_check_p(va_list *args);

#endif
