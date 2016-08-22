/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:36:11 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/12 14:59:32 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# define BUFFSIZE 1
# define BUFF_SIZE 1024

int		ft_atoi(char *st);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_iswhitespace(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strequ(const char *s1, const char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_index(char *s);
size_t	ft_dstrlen(char **e);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strstr(char *s, char *sub_s);
char	*ft_strdup(const char *s);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, char const *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchar(const char *s, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	**ft_strsplit(char *s, int c);
char	*ft_strnew(size_t i);
char	*ft_readline(int fd);
void	ft_putchar(int c);
void	*ft_memset(void *p, int val, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_putnbr(int n);
void	ft_putchar(int c);
void	ft_putstr(char *s);
void	ft_putchar_fd(int c, int f);
void	ft_putstr_fd(const char *s, int f);
void	*ft_realloc(void *p, size_t i, size_t j);
void	*ft_memalloc(size_t i);
void	ft_memdel(void **a);
void	ft_strdel(char **a);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
#endif
