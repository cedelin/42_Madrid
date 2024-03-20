#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
int	    ft_isalnum(int x);
int     ft_isalpha(int c);
int     ft_isascii(int x);
int	    ft_isdigit(int x);
int	    ft_isprint(int x);
void	*ft_memchr(const void *s, int c, size_t n);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void * src, size_t n);
void	ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
char    *ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char    *ft_strnstr(const char *str, const char *to_find, size_t len);
char    *ft_strrchr(const char *s, int c);
int	    ft_tolower(int	i);
int	    ft_toupper(int	i);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);
void    *ft_calloc(size_t count, size_t size);
#endif