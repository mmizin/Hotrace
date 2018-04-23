/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hot.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 22:52:47 by obamzuro          #+#    #+#             */
/*   Updated: 2018/03/25 22:54:46 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HOT_H
# define _HOT_H
# define BUFF_SIZE 1

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct		s_node
{
	char			*key;
	char			isend;
	struct s_node	*right;
	struct s_node	*down;
}					t_node;

typedef struct		s_list
{
	char			*content;
	int				num;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				ft_bzero(void *s, size_t n);
void				add(t_node **head, char *key, char *value, char isend);
void				find(t_node *head, char *okey);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_memdel(void **ap);
char				*ft_strdup(const char *s1);
void				ft_strclr(char *s);
void				my_ft_setyourchar(char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					get_next_line(const int fd, char **line);
void				*ft_memcpy(void *dest, const void *src, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char const *s1, char const *s2);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strncat(char *s1, const char *s2, size_t n);
void				dop_find(unsigned int *i, unsigned int *j);
void				dop(t_node ***head, char **key, char **value, char *isend);
void				q(char **a, t_node ***head);
char				*t_strjoin(char const *s1, const char *s2);

#endif
