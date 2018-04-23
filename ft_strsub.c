/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:16:29 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/24 20:08:43 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hot.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	end;
	unsigned int	i;

	i = 0;
	end = start + len;
	str = (char *)malloc(sizeof(char) * len + 1);
	while (start < end)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[start] = '\0';
	return (str);
}
