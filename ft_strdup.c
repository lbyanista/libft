/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:14:02 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/03 21:13:27 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *strd)
{
	int		j;
	char	*c;

	j = 0;
	c = (char *)malloc(sizeof(*c) * ((ft_strlen(strd)) + 1));
	if (c == 0)
		return (0);
	while (strd[j])
	{
		c[j] = strd[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
