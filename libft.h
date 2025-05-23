/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:08:35 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/03 20:40:19 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_atoi(const char *str);
int		ft_isalpha(int argument);
int		ft_isalnum(int b);
int		ft_isascii(int c);
int		ft_isdigit(int a);
int		ft_isprint(int c);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *src, const void *dest, size_t n);
size_t	ft_strlen(const char *c);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int ch);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
void	*ft_calloc(size_t num_elements, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);

#endif