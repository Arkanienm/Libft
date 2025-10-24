/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtas <amurtas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:08:44 by amurtas           #+#    #+#             */
/*   Updated: 2025/10/24 10:34:45 by amurtas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	a;
	char	*sbstr;
	char	*scpy;

	i = 0;
	a = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		sbstr = ft_strdup("");
		return (sbstr);
	}
	scpy = (char *)s;
	sbstr = malloc(sizeof(char) * len);
	if (!sbstr)
		return (NULL);
	i = start;
	while (start < len)
	{
		sbstr[a] = scpy[i];
		i++;
		a++;
		start++;
	}
	return (sbstr);
}
