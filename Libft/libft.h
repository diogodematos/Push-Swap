/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:51:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/04 11:59:06 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>
# include <signal.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_stack
{
	int				size;
	int				top;  // [0, top]
	int				*stack;
}					t_stack;

int		ft_isalpha(int a);
int		ft_isdigit(int a);
int		ft_isalnum(int a);
int		ft_isascii(int a);
int		ft_isprint(int a);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int b, size_t n);
void	ft_bzero(void *dest, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int b);
char	*ft_strrchr(const char *str, int b);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(void *str, int a, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char	*src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char	*get_next_line(int fd);
int		ft_printf(char const *tyle, ...);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printnmb(int n);
int		ft_printunmb(unsigned int n);
int		ft_printhex(unsigned long n, char c);
int		ft_printpnt(void *str);
void	sa(t_stack stack);
void	sb(t_stack stack);
void	ss(t_stack stacka, t_stack stackb);
void	pa(t_stack *stacka, t_stack *stackb);
void	pb(t_stack *stacka, t_stack *stackb);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stacka, t_stack *stackb);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stacka, t_stack *stackb);
void    ft_free(t_stack *stack_a, t_stack *stack_b);

#endif
