/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:26:24 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/08 14:37:15 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void my_func(unsigned int i, char *c) {
// 	i = 0;
//     *c = ft_toupper(*c);
// }
// int main(void)
// {
// 	char str[] = "Hello there";
// 	ft_striteri(str, my_func);
// 	printf("%s", str);
// }