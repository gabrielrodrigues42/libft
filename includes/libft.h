/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 01:33:39 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/31 14:59:08 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** Includes
*/

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

/*
** GNL Defines
*/

# define OPEN_MAX 1024
# define BUFFER_SIZE 128
# define LINE_READ 1
# define END_OF_FILE 0
# define ERROR -1

/*
** Linked List Struct
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
** Printf Struct
*/

typedef struct s_types
{
	size_t	pointer;
	char	*string;
	int		character;
	int		number;
	int		unumber;
	int		hexadecimal;
}	t_types;

/*
** Is Functions
*/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/*
** To Functions
*/

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
char	*ft_htoa(unsigned int n, int converter);
char	*ft_ptoa(size_t pointer);

/*
** Put Functions
*/

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*
** Memory Functions
*/

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** String Functions
*/

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_strclear(char **str);

/*
** Linked List
*/

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/*
** GNL
*/

int		get_next_line(int fd, char **line);

/*
** Printf
*/

int		ft_printf(const char *format, ...);
int		ft_char(va_list args);
int		ft_string(va_list args);
int		ft_number(va_list args);
int		ft_unumber(va_list args);
int		ft_hex(va_list args, int converter);
int		ft_pointer(va_list args);

#endif