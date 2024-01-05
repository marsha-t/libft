/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:43:37 by mateo             #+#    #+#             */
/*   Updated: 2023/12/28 18:23:25 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	main(void)
{
	for (int i = 0; i < 3; i++)
	{
		ft_putnbr_fd(42, 1);
		write(1, "\n", 1);
		ft_putnbr_fd(-42, 1);
		write(1, "\n", 1);
		ft_putnbr_fd(INT_MIN, 1);
		write(1, "\n", 1);
		ft_putnbr_fd(INT_MAX, 1);
		write(1, "\n", 1);
	}
	return (0);
}
