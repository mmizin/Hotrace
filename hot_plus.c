/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hot_plus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 22:42:08 by obamzuro          #+#    #+#             */
/*   Updated: 2018/03/25 22:49:12 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hot.h"

void		dop_find(unsigned int *i, unsigned int *j)
{
	(*i)++;
	(*j)++;
}

void		dop(t_node ***head, char **key, char **value, char *isend)
{
	**head = (t_node *)malloc(sizeof(t_node));
	if (*isend)
		(**head)->key = t_strjoin(*key, *value);
	else
		(**head)->key = ft_strdup(*key);
	(**head)->isend = *isend;
	(**head)->right = NULL;
	(**head)->down = NULL;
}

void		q(char **a, t_node ***head)
{
	**a = 0;
	(**head)->isend = 0;
}
