/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:17:23 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/07 19:06:59 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	symb;
	int	res;

	i = 0;
	symb = 1;
	res = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		symb = symb * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * symb);
}
// int main() {
//     // Testovací řetězce
//     const char *test_cases[] = {
//         "123",
//         "-123",
//         "0",
//         "4567",
//         "   890",
//         "+42",
//         "   -56",
//         "12abc34",
//         "abc123",
//         NULL
//     };

//     // Testování funkcí
//     for (int i = 0; test_cases[i] != NULL; i++) {
//         int result_standard = atoi(test_cases[i]);
//         int result_custom = ft_atoi(test_cases[i]);

//         printf("Testovací řetězec: '%s'\n", test_cases[i]);
//         printf("Standard atoi: %d\n", result_standard);
//         printf("Moje atoi: %d\n", result_custom);
//         printf("\n");
//     }

//     return 0;
// }
