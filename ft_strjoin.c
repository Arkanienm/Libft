/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtas <amurtas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:38:56 by amurtas           #+#    #+#             */
/*   Updated: 2025/10/24 11:19:38 by amurtas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*cs;

	a = ft_strlen(s1) + ft_strlen(s2);
	cs = ft_calloc(sizeof(char), a + 1);
	i = 0;
	a = 0;
	if (!cs)
		return (NULL);
	while (((char *)s1)[i] != '\0')
	{
		cs[a] = ((char *)s1)[i];
		i++;
		a++;
	}
	i = 0;
	while (((char *)s2)[i] != '\0')
	{
		cs[a++] = ((char *)s2)[i];
		i++;
	}
	return (cs);
}
