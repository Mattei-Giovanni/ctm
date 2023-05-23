/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:42:42 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/15 11:42:43 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}