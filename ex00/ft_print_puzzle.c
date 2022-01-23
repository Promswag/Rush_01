/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_puzzle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:41:14 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/23 15:40:22 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_puzzle(int ***tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1)
		{
			k = 0;
			while (tab[i][j][k] == 0 && k < 4)
				k++;
			ft_putchar(tab[i][j][k] + 48);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
