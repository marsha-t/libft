/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:30:10 by mateo             #+#    #+#             */
/*   Updated: 2023/12/22 15:26:01 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	const char	*s[] = {"abc", "", " asddfoaih"};

	for (int i = 0; i < 3; i++)
	{
		printf("ft_strlen \\ strlen: %zu \\ %zu\n", ft_strlen(s[i]), strlen(s[i]));
		assert (ft_strlen(s[i]) == strlen(s[i]));
	}
	return (0);
}
