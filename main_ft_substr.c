/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:48:57 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 23:48:57 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;

	ptr = 0;
	ptr = ft_substr(ptr, 0, 20);
	if (ptr == 0)
		printf("null\n");
	for (int i = 0; i < 4; i++)
	{
		ptr = ft_substr("abc", i, 20);
		if (*ptr == '\0')
			printf("empty");
		else
			printf("%s\n", ptr);
	}
	return (0);
}
