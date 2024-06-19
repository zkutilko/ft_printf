/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:24:21 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/07 21:27:27 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			index;

	index = 0;
	p = s;
	while (n--)
	{
		p[index] = (unsigned char)c;
		index++;
	}
	return (p);
}

/*int	main()
{
	char str[100] = "libauyhcu jfvudh hfbouae";

	ft_memset(str, '.', 8 * sizeof(char));
	printf("After memset(): %s\n", str);
	return 0;
}*/
