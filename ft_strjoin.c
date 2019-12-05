/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 00:29:39 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/03 18:52:22 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	int		i;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	i = 0;
	p = malloc(sizeof(char *) * (lens1 + ft_strlen(s2)));
	if (p == 0)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		p[i + lens1] = s2[i];
		i++;
	}
	p[i + lens1] = '\0';
	return (p);
}
