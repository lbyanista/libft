/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:56:35 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/03 18:58:25 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = -1;
	if (!c)
		return ((char*)(s + ft_strlen(s)));
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j != -1)
		return (char *)(s + j);
	else
		return (0);
}
