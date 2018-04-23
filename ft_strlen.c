/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:47:18 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/13 19:01:01 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hot.h"

size_t		ft_strlen(const char *s)
{
	unsigned char	*string;
	size_t			len;

	string = (unsigned char *)s;
	len = 0;
	while (string && *string)
	{
		len++;
		string++;
	}
	return (len);
}
