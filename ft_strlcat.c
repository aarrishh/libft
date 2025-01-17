/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:45:43 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/16 20:09:18 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t my_strlcat(char *dest, const char *src, size_t size) {
	size_t i;
	size_t dest;

	i = 0;
	dest = 0;
    while (dest[dest_len] != '\0' && dest_len < size) {
        dest_len++;
    }
    if (dest_len == size) {
        return dest_len + my_strlen(src);
    }
    while (src[i] != '\0' && dest_len + i < size - 1) {
        dest[dest_len + i] = src[i];
        i++;
    }
    if (dest_len + i < size) {
        dest[dest_len + i] = '\0';
    }
    while (src[i] != '\0') {
        i++;
    }
    return dest_len + i;
}
size_t my_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
