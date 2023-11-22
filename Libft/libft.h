/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:19:54 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/17 12:53:38 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
typedef struct  s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;
#ifndef LIBFT_H
#define LIBFT_H

char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_isdigit(unsigned int c);
size_t  ft_strlcpy(char *dst, char *src, size_t dst_size);
size_t  ft_strlen(const char *str);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strchr(const char *src, char c);
void    ft_bzero(void* s, size_t n);
char    *ft_strjoin(char const *s1, char const *s2);
int     ft_isascii (unsigned int c);
void    *ft_memcpy(void *dst, const void *src, size_t n);
int     ft_isprint(unsigned int c);
int     ft_toupper(unsigned int c);
char    *ft_strrchr(const char *src, char c);
int     ft_isalpha(unsigned int c);
void    *ft_memchr(void *src, char chr, size_t n);
char	**ft_split(char const *s, char c);
void    *ft_memset(void *s, int c, size_t size);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_strncmp(char *s1, char *s2, size_t n);
char    *ft_strtrim(char const *s1, char const *set);
void    *ft_memmove(void *dst, const void *src, size_t n);
char    *ft_strlcat(char *dst, char *src, size_t dst_size);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_strdup(const char *s);
int     ft_atoi(const char *nptr);
int     ft_isalnum(unsigned int c);
int     ft_tolower(unsigned int c);

#endif
