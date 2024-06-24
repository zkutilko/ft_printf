/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:56:36 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/24 16:12:15 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static void	ft_fillh(long int n, char *nb, int index)
{
	long int	x;

	if (n < 0)
	{
		x = -n;
		nb[0] = '-';
	}
	else
		x = n;
	if (x >= 10)
	{
		ft_fillh(x / 16, nb, index - 1);
		ft_fillh(x % 16, nb, index);
	}
	if (x < 16)
	{
		x += 48;
		nb[index] = x;
	}
}

char	*ft_unsigned_itoah(unsigned int n)
{
	char		*ans;
	long int	x;
	int			i;

	x = n;
	i = 0;
	while (x != 0)
	{
		x /= 16;
		i++;
	}
	if (n < 0)
	{
		i++;
		x *= -n;
	}
	if (n == 0)
		i = 1;
	ans = malloc((i + 1) * sizeof(char));
	if (!ans)
		return (NULL);
	ans[i] = '\0';
	ft_fillh(n, ans, i - 1);
	return (ans);
}

int	ft_check_x(va_list *args)
{
	char *num;
	int len;

	num = ft_unsigned_itoah(va_arg(*args, int));
	ft_putstr_fd(num, 1);
	len = ft_strlen(num);
	free(num);
	return (len);
}