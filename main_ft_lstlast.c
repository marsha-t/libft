/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:14:33 by mateo             #+#    #+#             */
/*   Updated: 2023/12/22 15:22:49 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	node1; 
	t_list	node2;
	t_list	*begin;

	node1.content = "abc";
	node2.content = "def";
	node1.next = &node2;
	node2.next = 0;
	begin = &node1;
	printf("%s\n", ft_lstlast(begin)->content);
	return (0);
}
