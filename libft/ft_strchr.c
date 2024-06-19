/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_kontrola.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:02:57 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/07 20:35:17 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p;
	int			i;

	if (s == NULL)
		return (NULL);
	i = 0;
	p = s;
	while (p[i])
	{
		if (p[i] == (char) c)
			return ((char *)&p[i]);
		i++;
	}
	if ((char) c == p[i])
		return ((char *)&p[i]);
	return (NULL);
}
