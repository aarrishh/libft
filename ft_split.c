/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:03:33 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/26 22:04:56 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int i;
	int count_words;
	int	len;
	
	i = 0;
	len = ft_strlen(s);
	if (s[len - 1] == ' ')
		count_words = 0;
	else
		count_words = 1;
	while (i < len)
	{
		while (s[i] != ' ')
			i++;
		count_words++;
		i++;
	}
}
int main()
{
	char a[17] = "Arina ari aystex";
	printf("%d\n", ft_split(a));
}