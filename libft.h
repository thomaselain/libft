/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:54:53 by telain            #+#    #+#             */
/*   Updated: 2015/12/14 15:22:46 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUF_SIZE 1000
# include <unistd.h>
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
void			ft_putstr(char *str);
void			ft_putchar(char c);
char			*ft_strdup(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strcpy(char *dst, const char *str);
char			*ft_strncpy(char *dst, const char *str, size_t n);
char			*ft_strcat(char *str, const char *str2);
char			*ft_strncat(char *str, const char *str2, size_t n);
char			*ft_strchr(const char *str, int c);
char			*ft_strstr(const char *str, const char *str2);
char			*ft_strnstr(const char *str, const char *str2, size_t n);
int				ft_strcmp(const char *str, const char *str2);
int				ft_strncmp(const char *str, const char *str2, size_t n);
char			*ft_strrchr(const char *str, int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
int				ft_atoi(const char *str);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int				ft_atoi(const char *str);
int				ft_factorial(unsigned int n);
int				ft_sqrt(unsigned int n);
int				ft_power(int n, unsigned int power);
int				*ft_sortint(int *tab);
void			ft_swap(void *data1, void *data2);
int				get_next_line(int const fd, char **line);

#endif
