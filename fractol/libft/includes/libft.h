/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnussbau <fnussbau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:02:53 by fnussbau          #+#    #+#             */
/*   Updated: 2019/02/12 18:29:10 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
long				ft_ltoi(const char *str);
void				ft_bzero(void *s, int n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lst_at(t_list *begin_list, size_t nb);
void				ft_lstdelnode(void *d, size_t n);
t_list				*ft_list_at(t_list *begin_list, size_t nb);
void				ft_lstadd_end(t_list **alst, t_list *new);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strstr(const char *str, const char *needle);
char				*ft_strnstr(const char *str,
					const char *needle, size_t len);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strncat(char *dst, const char *src, size_t nb);
size_t				ft_strlcat(char *dst, const char *src, size_t nb);
char				*ft_strdup(const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
char				**ft_strsplit(char const *s, char c);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_print_words_table(char **tab);
int					ft_sqrt(int nb);
int					ft_power(int nb, int power);
char				*ft_strrev(char *str);
char				**ft_tabdup(char **tab);
void				ft_tabcpy(char **src, char ***dest);
void				ft_deltab(char ***tab);
void				ft_swap(int *a, int *b);
int					ft_iabs(int x);
float				ft_fabs(float x);
double				ft_lfabs(double x);
int					ft_imax(int x, int y);
float				ft_fmax(float x, float y);
int					ft_imin(int x, int y);
float				ft_fmin(float x, float y);
char				*ft_memcpyeol(void *dst, const void *src, size_t n);
char				*ft_insert(char **dest, char *target, char *src);
char				*ft_strupcase(char *str);
char				*ft_strlowcase(char *str);
char				*ft_lltoa(long long n);
long				ft_atol(const char *nptr);
int					ft_power(int nb, int power);
char				*ft_convert_base(char *nbr, char *base_from, char *base_to);
char				*ft_memcset(int nb, char c);
double				ft_fpower(double nb, int power);
char				*ft_strxdup(const char *s1, int c);
void				ft_pswap(char **s1, char **s2);
long long			ft_llpower(long long nb, int power);
int					ft_numlen(int n);
#endif
