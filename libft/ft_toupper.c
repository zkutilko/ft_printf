/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:22:55 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/07 17:43:39 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

// int main(void)
// {
//  int i = 0;

//     // word to convert to uppercase
//     char word[] = "Hello There";
//     char chr;

//     // Loop
//     while (word[i]) {
//         chr = word[i];
//         printf("%c", ft_toupper(chr));
//         i++;
//     }

//     return 0;
// }
