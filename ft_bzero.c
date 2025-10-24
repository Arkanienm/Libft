/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtas <amurtas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:26:48 by amurtas           #+#    #+#             */
/*   Updated: 2025/10/14 11:22:21 by amurtas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s_cpy;

	s_cpy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_cpy[i] = '\0';
		i++;
	}
	return (s);
}
