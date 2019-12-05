/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 00:31:30 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/03 18:59:57 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	found(const char *set, int c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*p;

	start = -1;
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	while (s[++start])
		if (!found(set, s[start]))
			break ;
	while (start < end - 1)
		if (!found(set, s[end - 1]))
			break ;
		else
			end--;
	if (!(p = malloc(end - start + 1)))
		return (NULL);
	i = -1;
	while (++i < (end - start))
		p[i] = s[start + i];
	p[i] = '\0';
	return (p);
}
