/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:16:27 by mateo             #+#    #+#             */
/*   Updated: 2023/12/26 14:09:18 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	node0;
	t_list	node1; 
	t_list	node2;
	t_list	*begin1;
	t_list	*begin2;

	node0.content = "123";
	node0.next = 0;
	begin1 = 0;
	ft_lstadd_back(&begin1, &node0);
	printf("%s\n", begin1->content);
	node1.content = "abc";
	node2.content = "def";
	node1.next = &node2;
	node2.next = 0;
	begin2 = &node1;
	ft_lstadd_back(&begin2, &node0);
	printf("%s\n", begin2->content);
	printf("%s\n", begin2->next->content);
	printf("%s\n", begin2->next->next->content);
	return (0);
}
