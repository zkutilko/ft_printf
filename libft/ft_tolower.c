/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:46:34 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/07 18:01:12 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
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
//         printf("%c", ft_tolower(chr));
//         i++;
//     }

//     return 0;
// }
