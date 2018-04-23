/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 23:22:14 by obamzuro          #+#    #+#             */
/*   Updated: 2018/03/25 23:29:58 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hot.h"

void	func_one(t_node **head, char *(*line)[3], int *count)
{
	if (*count == 3)
		find(*head, (*line)[0]);
	if (*count == 2)
	{
		(*line)[1] = ft_strjoin((*line)[1], (*line)[0]);
		(*count)--;
	}
	else if (*count < 2)
	{
		(*line)[2] = ft_strjoin((*line)[2], (*line)[0]);
		(*count) = 2;
	}
	if (*count == 2)
	{
		add(&(*head), (*line)[1], (*line)[2], 1);
		ft_strclr((*line)[2]);
		ft_strclr((*line)[1]);
	}
	free((*line)[0]);
}

int		main(void)
{
	t_node	*head;
	char	*line[3];
	int		count;

	count = 2;
	head = NULL;
	line[1] = ft_strnew(1);
	line[2] = ft_strnew(1);
	while (get_next_line(0, &(line[0])) > 0)
	{
		if (!*(line[0]))
		{
			if (count != 3)
			{
				count = 3;
				continue;
			}
			else
				break ;
		}
		func_one(&head, &line, &count);
	}
	return (0);
}
