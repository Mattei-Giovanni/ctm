/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:32:33 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/04 12:32:35 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_memcmp(void *s1, void *s2, unsigned int n)
{
	while (n > 1 && *(char *)s1 == *(char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	return ((*(unsigned char *)s1 - *(unsigned char *)s2) * n);
}
