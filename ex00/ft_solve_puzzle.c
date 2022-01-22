/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_puzzle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:09:03 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/22 18:32:16 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	ft_solve_index(char ***tab, int i, int j, int size)
{

}

void	ft_solve_puzzle(char ***tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1)
		{
			ft_solve_index(tab, i, j, size);
			j++;
		}
		i++;
	}
	(void) size;
	printf("%s", tab[0][1]);
}
