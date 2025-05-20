/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:17:00 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/02 19:44:36 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*a;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = (unsigned int)ft_strlen(s);
	a = (char *)malloc((len + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (i < len)
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

// char addOne(unsigned int i, char c) {return (i + c);}

// int main()
// {
// 	char a[1] = "";
// 	printf("%s\n", ft_strmapi("", addOne));
// }