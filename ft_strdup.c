/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:27:37 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/21 22:58:36 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *buffer;
    int     i;
    
    i = 0;
    while (s[i])
        i++;
    buffer = (char *)malloc(i * sizeof(char));
    i = 0;
    while (s[i])
    {
        buffer[i] = s[i];
        i++;
    }
    buffer[i] = '\0';
    return (buffer);
}

// int main()
// {
//     char a[5] = "AAAA";
//     printf("%s\n", ft_strdup(a));
// }