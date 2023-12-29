/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:53:43 by mateo             #+#    #+#             */
/*   Updated: 2023/12/22 15:23:08 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*new_str;
	new_str = ft_lstnew("abc");
	printf("%s\n", new_str->content);
	if (new_str->next == 0)
		printf("null\n");
		
	t_list	*new_int;
	int	i = 42;
	new_int = ft_lstnew(&i);
	printf("%d\n", *(int *)new_int->content);
	if (new_int->next == 0)
		printf("null\n");
	
	t_list	*new_char;
	char c = 'a';
	new_char = ft_lstnew(&c);
	printf("%c\n", *(char *)new_char->content);
	if (new_char->next == 0)
		printf("null\n");
	return (0);
}
