/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:22:41 by mateo             #+#    #+#             */
/*   Updated: 2023/12/21 00:22:41 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	char	*nullstr = 0;

	ptr = ft_strjoin(nullstr, "abc");
	if (ptr == 0)
		printf("null\n");
	ptr = ft_strjoin("abc", nullstr);
	if (ptr == 0)
		printf("null\n");
	ptr = ft_strjoin("abc", "def");
	printf("%s\n", ptr);
	return (0);
}
