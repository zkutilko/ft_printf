/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:49:33 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/08 15:26:20 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	needed;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	needed = nmemb * size;
	if (needed / nmemb != size)
		return (NULL);
	ptr = malloc(needed);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
