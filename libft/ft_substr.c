/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 09:30:27 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/08 15:52:28 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(size_t len, unsigned int start, char *ptr, char const *s)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		ptr[count] = s[start + count];
		count++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	count;
	char	*dest;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		dest = (char *)malloc(sizeof(char));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (start + len > s_len)
		len = s_len - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	count = ft_count(len, start, dest, s);
	dest[count] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char *c;

// 	c = ft_substr("0123456789", 9, 10);
// 	printf("%s", c);
// 	free(c);
// 	return (0);
// }