/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 09:00:51 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/08 09:26:59 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	unsigned int	div;

	div = 1;
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = n * -1;
	}
	while ((n / div) >= 10)
	{
		div = div * 10;
	}
	while (div >= 1)
	{
		i = 48 + (n / div);
		ft_putchar_fd(i, fd);
		n = n % div;
		div = div / 10;
	}
}

// int	main(void)
// {
// 	int a;
// 	int fd;

// 	a = -2;
// 	fd = 1;

// 	ft_putnbr_fd(a, fd);
// 	return (0);

// }