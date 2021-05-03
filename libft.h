#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
//#include <unistd.h>
int		ft_atoi(char *str);
int		ft_memcmp(const void *buff1, const void *buff2, size_t n);
int		ft_isdigit(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isalnum(int x);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char *str, int fd);
void	ft_putendl(char *str);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_putnbr(int nbr);
void	ft_putstr_fd(char *str, int fd);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *src, int c);
void	ft_strclr(char *s);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
void	ft_strdel(char **as);
char	*ft_strdup(char *src);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
char	*ft_strrchr(const char *src, int c);
char	**ft_split(char* str);
char	*ft_strstr (char * str1, const char * str2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*calloc(size_t nmemb, size_t size);
#	endif