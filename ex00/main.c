/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:51:00 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/22 19:56:53 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		***ft_magic(int size);
// void	ft_solve_puzzle(int ***tab, int size);
void	ft_print_puzzle(int ***tab, int size);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int	***tab;

	if (argc != 17)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tab = ft_magic(6);
	i = 1;
	j = 1;
	k = 0;
	while (argv[i])
	{
		if (i - 1 >= (argc / 2))
		{
			if (k == 5)
			{
				k = 1;
				j = 5;
			}
			tab[k][j][0] = (int)*argv[i] - 48;
			k++;
		}
		else
		{
			if (j == 5)
			{
				k = 5;
				j = 1;
			}
			tab[k][j][0] = (int)*argv[i] - 48;
			j++;
			if (j == 5 && k == 5)
			{
				k = 1;
				j = 0;
			}
		}
		i++;
	}

	tab[2][2][0] = 0;
	tab[2][2][1] = 0;
	tab[2][2][2] = 4;
	tab[2][2][3] = 0;
	// ft_solve_puzzle(tab, 6);
	ft_print_puzzle(tab, 6);
	return (0);
}
