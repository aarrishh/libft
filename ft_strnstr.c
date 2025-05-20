/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:22:24 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/02 19:44:44 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	j = 0;
	while (haystack[j] && j < n)
	{
		i = 0;
		while (haystack[j + i] == needle[i] && (j + i) < n)
		{
			if (!needle[i + 1])
				return ((char *)&haystack[j]);
			i++;
		}
		j++;
	}
	return (NULL);
}
// int main()
// {
//     char ari[30] = "aaabcabcd";
//     char ira[10] = "abcd";
//     printf("mery->%s\n", ft_strnstr(ari, ira, 9));
//     // printf("dzery->%s\n", strnstr("1", "a", ));
// }
