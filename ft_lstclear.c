/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:35:08 by salmazro          #+#    #+#             */
/*   Updated: 2021/10/13 12:35:22 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;

	elem = 0;
	if (!lst)
		return ;
	while (*lst)
	{
		elem = *lst;
		*lst = (*lst)->next;
		del((elem)->content);
		free(elem);
	}
}
