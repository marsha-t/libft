/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:45:32 by mateo             #+#    #+#             */
/*   Updated: 2023/12/21 20:45:32 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*node0;
	t_list	*node1; 
	t_list	*node2;
	t_list	*begin;

	node0 = (t_list *)malloc(sizeof(t_list));
	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node0->content = (char *)malloc(sizeof(char) * 4);
	for (int i = 0; i < 3; i++)
	{
		((char *)node0->content)[i] = '1' + i;
	}
	((char *)node0->content)[3] = '\0';
	node1->content = (char *)malloc(sizeof(char) * 4);
	for (int i = 0; i < 3; i++)
	{
		((char *)node1->content)[i] = 'a' + i;
	}
	((char *)node1->content)[3] = '\0';
	node2->content = (char *)malloc(sizeof(char) * 4);
	for (int i = 0; i < 4; i++)
	{
		((char *)node2->content)[i] = 'd' + i;
	}
	((char *)node2->content)[3] = '\0';
	node0->next = node1;
	node1->next = node2;
	node2->next = 0;
	begin = node0;

	ft_lstdelone(node2, free);

	printf("%s\n", begin->content);
	printf("%s\n", begin->next->content);
	printf("%s\n", begin->next->next->content);
	return (0);
}
