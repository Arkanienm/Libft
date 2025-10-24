/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtas <amurtas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:08:44 by amurtas           #+#    #+#             */
/*   Updated: 2025/10/24 11:44:50 by amurtas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sbstr;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		sbstr = ft_strdup("");
		return (sbstr);
	}
	sbstr = malloc(sizeof(char) * len + 1);
	if (!sbstr)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		sbstr[i] = s[start];
		i++;
		start++;
	}
	sbstr[i] = '\0';
	return (sbstr);
}
