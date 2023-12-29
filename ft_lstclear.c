/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:29:59 by mateo             #+#    #+#             */
/*   Updated: 2023/12/29 11:53:08 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;
	t_list	*next;

	if ((!lst) || !(*lst))
		return ;
	start = *lst;
	while (start)
	{
		next = start->next;
		ft_lstdelone(start, del);
		start = next;
	}
	*lst = 0;
}
