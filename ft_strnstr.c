/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 01:59:20 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/05 23:47:30 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstck, const char *ndl, size_t n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (*ndl == '\0' || ndl == NULL)
		return (char *)hstck;
	if (n == 0)
		return (NULL);
	while (hstck[i] && i < n)
	{
		j = 0;
		while (ndl[j] == hstck[j + i] && i + j < n)
		{
			if (ndl[j + 1] == '\0')
				return ((char *)hstck + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
