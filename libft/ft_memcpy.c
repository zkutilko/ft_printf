/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:57:03 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/07 17:27:06 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	d = dest;
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (d);
}

// int	main(void)
// {
// 	char str[] = "hello there";
// 	char dest[20];
// 	int	n;

// 	n = 3;

// 	ft_memcpy(dest, str, n);
// 	printf("%s", dest);
// 	return (0);
// }
