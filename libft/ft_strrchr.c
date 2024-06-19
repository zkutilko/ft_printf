/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_kontrola.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 21:16:15 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/07 21:19:43 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	char		*last;
	int			i;

	if (!s)
		return (NULL);
	p = s;
	last = NULL;
	i = 0;
	while (p[i])
	{
		if (p[i] == (char)c)
			last = (char *)&p[i];
		i++;
	}
	if ((char)c == p[i])
		last = (char *)&p[i];
	return (last);
}
