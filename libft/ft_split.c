/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:49:08 by zkutilko          #+#    #+#             */
/*   Updated: 2024/06/08 15:37:38 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(char **mem, char const *s, char c)
{
	char		**mem_ptr;
	char const	*temp;

	temp = s;
	mem_ptr = mem;
	while (*temp)
	{
		while (*s == c)
			s++;
		temp = s;
		while (*temp != c && *temp)
		{
			temp++;
		}
		if (*temp == c || temp > s)
		{
			*mem_ptr = ft_substr(s, 0, temp - s);
			s = temp;
			mem_ptr++;
		}
	}
	*mem_ptr = NULL;
}

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		w_len;

	if (!s)
		return (NULL);
	w_len = ft_countwords(s, c);
	ptr = malloc((w_len + 1) * sizeof (char *));
	if (!ptr)
		return (NULL);
	ft_fill(ptr, s, c);
	return (ptr);
}

// int main() 
// {
// 	char	str[] = " Hello there";
// 	char c;
// 	char **test; 
//	c = ' ';
// 	test = ft_split(str, c);
// 	int i = 0;
// 	while (i < 2)
// 	{
// 		printf("%s", test[i]);
// 		i++;
// 	}
// }