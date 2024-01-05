/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:18:56 by mateo             #+#    #+#             */
/*   Updated: 2023/12/28 23:41:45 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_ft(unsigned int i, char *str)
{
	printf("%s\n", str);
}

int	main(void)
{
	ft_striteri("abc", test_ft);
	ft_striteri("", test_ft);
	return (0);
}
