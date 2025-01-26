/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:23:37 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/24 22:06:04 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	s_len;
	size_t	malloc_len;
	
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start > s_len)
		malloc_len = 0;
	else if (start + len > s_len)
		malloc_len = s_len - start;
	else
		malloc_len = len;
	a = (char *)malloc((malloc_len + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < malloc_len)
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int main()
// {
// 	char a[15] = "qaxaqagitutyun";
// 	printf("%s\n", ft_substr(a, 1, 0));
// 	// printf("%s\n", substr(a, 3, 5));
// }