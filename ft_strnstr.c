/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:22:24 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/19 19:07:41 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	if (n == 0)
		return (NULL);
	while (haystack[i + j] && needle[i] && (i + j) < n)
	{
		if (needle[i] == haystack[i + j])
		{
			i++;
		}
		else
		{
			i = 0;
			j++;
		}
	}
	if ((i + j) == n)
		return (NULL);
	if (haystack[i + j])
        return ((char*)haystack + j);
    return (NULL);
}

// int main()
// {
//     char ari[30] = "aaabcabcd";
//     char ira[10] = "cd";
//     printf("mery->%s\n", ft_strnstr(ari, ira, 8));
//     printf("dzery->%s\n", strnstr(ari, ira, 8));
// }