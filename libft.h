/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:20:55 by clacaill          #+#    #+#             */
/*   Updated: 2023/02/16 06:28:18 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>
# include <ctype.h>

/*partie 1*/
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
long int	ft_atoi(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
/*partie 2*/
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);


// printf
// # define PRINTF_VALID_FORMATS	"cspdiuxX\%"
# define HEXALOWER	"0123456789abcdef"
# define HEXAUPPER	"0123456789ABCDEF"

// Function

int		ft_printf(const char *format, ...);
int		choose_print(const char *format, va_list argp, int *len);
void	ft_char_prnt(va_list argp, int *len);
void	ft_str_prnt(va_list argp, int *len);
void	ft_hex_prnt(va_list argp, int *len);
void	ft_hexa_prnt(va_list argp, int *len, char c);
void	ft_puthex(unsigned long n, char *base, int *len);
void	ft_nbr_sign_prnt(va_list argp, int *len);
void	ft_nbr_prnt(long nb, int *len);
void	ft_usi_prtn(va_list argp, int *len);

#endif