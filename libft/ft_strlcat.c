/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_kontrola.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:36:32 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/07 21:00:42 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ans;

	i = 0;
	while (!(dst == NULL && size == 0) && dst[i] && i < size)
		i++;
	j = 0;
	while (!(src == NULL && size == 0) && src[j])
		j++;
	if (size > i)
		ans = i + j;
	else
		ans = size + j;
	j = 0;
	while (size != 0 && src[j] && (i < size - 1))
		dst[i++] = src[j++];
	if (size > i)
		dst[i] = '\0';
	return (ans);
}

// int	main(void)
// {
// 	char str[] = "there";
// 	char str2[] = "Hello, ";

// 	printf("%s a %s", str2, str);
// 	printf("\n%ld", ft_strlcat(str2, str, sizeof(str2)));
// 	printf("\n%s a %s", str2, str);
// }
