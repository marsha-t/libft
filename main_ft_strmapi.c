/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:32:21 by mateo             #+#    #+#             */
/*   Updated: 2023/12/21 10:32:21 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	test_ft(unsigned int i, char c)
{
	(void)i; 
	c = c + 1;
	return (c);
}

int	main(void)
{
	printf("%s\n", ft_strmapi("abc", test_ft));
	if (strcmp(ft_strmapi("", test_ft), "") == 0)
		printf("null\n");
	return (0);
}
