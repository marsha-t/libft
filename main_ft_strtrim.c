/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:24:20 by mateo             #+#    #+#             */
/*   Updated: 2023/12/21 08:24:20 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%s.\n", ft_strtrim(" \n \t abc123", " \n\t123"));
	printf("%s.\n", ft_strtrim("   abc123   ", " "));
	printf("%s.\n", ft_strtrim("   abc123   ", "e"));
	printf("%s.\n", ft_strtrim("aaa", "a"));
	printf("%s.\n", ft_strtrim("", "e"));
	printf("%s.\n", ft_strtrim("", ""));
	return (0);
}
