/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtas <amurtas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:03:58 by amurtas           #+#    #+#             */
/*   Updated: 2025/10/15 16:09:23 by amurtas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (little[0] == '\0')
		return (((char *)big));
	while (big[i] && i < len)
	{
		k = i;
		while (big[k] == little[j] && k < len)
		{
			if (!(little[j + 1] != '\0' && k < len))
				return (&((char *)big)[0 + i]);
			j++;
			k++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
