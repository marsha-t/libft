/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 23:18:54 by mateo             #+#    #+#             */
/*   Updated: 2023/12/22 23:18:54 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*test_ft(void *str_ori)
{
	char	*str;
	int		i;

	str = ft_strdup((char *)str_ori);
	i = 0;
	while (str[i] != 0)
	{
		str[i] += 1;
		i++;
	}
	return ((void *)str);
}

int	main(void)
{
	t_list	*node0;
	t_list	*node1; 
	t_list	*node2;

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
	printf("Original list: %s, ", node0->content);
	printf("%s, ", node0->next->content);
	printf("%s\n", node0->next->next->content);
	t_list	*new_node0;
	new_node0 = ft_lstmap(node0, test_ft, free);
	printf("New list:      %s, ", new_node0->content);
	printf("%s, ", new_node0->next->content);
	printf("%s\n", new_node0->next->next->content);
	return (0);
}
