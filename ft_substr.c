/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 00:16:10 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/01 19:59:24 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (s)
	{
		p = (char *)malloc(sizeof(char) * len + 1);
		if (!p || start >= ft_strlen(s))
			return (ft_strdup("\0"));
		if (s)
		{
			while (s[i] && len > 0)
			{
				p[j] = s[i];
				j++;
				i++;
				len--;
			}
			p[j] = '\0';
			return ((char *)p);
		}
	}
	return (NULL);
}
