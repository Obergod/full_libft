/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:31:26 by mafioron          #+#    #+#             */
/*   Updated: 2025/04/24 21:09:45 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
	part 1
*/
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strcat(char *dest, const char *src);
int					ft_atoi(const char *nptr);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *s);

void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
char				*ft_strrchr(const char *src, int c);
char				*ft_strchr(const char *s, int c);
int					ft_memcmp(const void *str1, const void *str2, size_t n);

/*
	part 2
*/

char				*ft_substr(char const *str, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int nb);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int nb, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
	bonuses
*/

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
void				ft_lstadd_front(t_list **lst, t_list *ne);
void				ft_lstadd_back(t_list **lst, t_list *ne);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
int					ft_lstsize(t_list *lst);

/*
	new_ones
*/
int					count_words(char const *s, char c);
int					ft_abs(int nb);
long				ft_atol(const char *nptr);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_free_split(char	**split);
int					ft_atoi_base(char *nbr, char *base_from);
char				*ft_strstr(const char *big, const char *little);
int					ft_is_even(int nb);
char				**ft_2dstrdup(char **ss);

#endif
