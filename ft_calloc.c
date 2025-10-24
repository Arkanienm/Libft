/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtas <amurtas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:23:13 by amurtas           #+#    #+#             */
/*   Updated: 2025/10/16 11:21:29 by amurtas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*var;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	var = malloc(size * nmemb);
	if (!var)
		return (NULL);
	return (ft_bzero(var, size * nmemb));
}
