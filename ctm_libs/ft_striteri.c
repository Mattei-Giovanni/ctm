/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:18:48 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/14 15:18:49 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
