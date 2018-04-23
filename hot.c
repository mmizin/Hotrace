/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 22:00:05 by obamzuro          #+#    #+#             */
/*   Updated: 2018/03/25 23:22:02 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hot.h"

char		*t_strjoin(char const *s1, char const *s2)
{
	char		*next;
	char		*temp;
	size_t		sumconcat;

	if (!s1 || !s2)
		return (NULL);
	sumconcat = ft_strlen(s1) + ft_strlen(s2);
	next = (char *)malloc(sizeof(char) * (sumconcat + 2));
	if (!next)
		return (NULL);
	temp = next;
	while (*s1)
		*next++ = *s1++;
	*next++ = '\0';
	while (*s2)
		*next++ = *s2++;
	*next = '\0';
	return (temp);
}

char		*ft_substr(char *s1, char **s2)
{
	while ((*s1 && **s2) && *s1 == **s2)
	{
		s1++;
		(*s2)++;
	}
	return (s1);
}

char		*more(char *s)
{
	char *a;

	a = s;
	while (*a)
		a++;
	return (a + 1);
}

void		find(t_node *head, char *okey)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (head)
	{
		j = 0;
		while ((okey[i] && head->key[j]) && okey[i] == head->key[j])
			dop_find(&i, &j);
		if (!head->key[j] && !okey[i] && head->isend)
		{
			write(1, head->key + j + 1, ft_strlen(head->key + j + 1));
			write(1, "\n", 1);
			return ;
		}
		else if (!j)
			head = head->down;
		else if (!head->key[j])
			head = head->right;
		else
			break ;
	}
	write(1, okey, ft_strlen(okey));
	write(1, ": Not found.\n", 13);
}

void		add(t_node **head, char *key, char *value, char isend)
{
	char	*a;
	t_node	*r;

	if (!*head)
	{
		dop(&head, &key, &value, &isend);
		return ;
	}
	a = ft_substr((*head)->key, &key);
	if (*a && a != (*head)->key)
	{
		r = (*head)->right;
		(*head)->right = NULL;
		if ((*head)->isend)
			add(&((*head)->right), a, more(a), 1);
		else
			add(&((*head)->right), a, NULL, 0);
		add(&((*head)->right->down), key, value, 1);
		(*head)->right->right = r;
		q(&a, &head);
	}
	else if (a == (*head)->key)
		add(&(*head)->down, key, value, 1);
	else if (!*a)
		add(&(*head)->right, key, value, 1);
}
