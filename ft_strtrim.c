/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:17:00 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/25 13:29:54 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	check(char const *s1, char const *set, int i)
{
	int j;

	j = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
			return (0);
		j++;
	}
	return (-1);
}

int	cal_ind(const char* s1, const char* set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (check(s1, set, i) == 0)
			i++;
		else if (check(s1, set, i) == -1)
			break;
	}
	return (i);
}

int	cal_end(const char* s1, const char* set, int end, int i)
{
	// if (end > 0)
	// 	end--;
	// else
	// 	return (0);
	while (end >= i)
	{
		if (check(s1, set, end) == 0)
			end--;
		else if (check(s1, set, end) == -1)
			break;
	}
	return (end);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	char	*a;
	int	end;
	int malloc_i;

	if (!s1 || !set)
		return (NULL);
	i = cal_ind(s1, set);
	end = ft_strlen(s1) - 1;
	end = cal_end(s1, set, end, i);
	
	malloc_i = 0;
	// printf("hrees-%d\n", end - i + 2);
	a = (char *)malloc((end - i + 2) * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (i < end + 1)
		a[malloc_i++] = s1[i++];
	a[malloc_i] = '\0';
	return (a);
}

// int main()
// {
// 	// char a[12] = "vayArinavay";
// 	// char set[4] = "vay";
// 	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
// 	// printf("%d\n", strtrim(a, set));

// }