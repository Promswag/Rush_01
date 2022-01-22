/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_magic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:16:56 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/22 19:04:52 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	***ft_magic(int size)
{
	int		i;
	int		j;
	int		k;
	int		***tab;

	tab = malloc(sizeof(int ***) * size);
	i = 0;
	while (i < size)
	{
		tab[i] = malloc(sizeof(int **) * size);
		j = 0;
		while (j < size)
		{
			tab[i][j] = malloc(sizeof(int *) * (size - 1));
			k = 0;
			while (k < size - 2)
			{
				tab[i][j][k] = k + 1;
				k++;
			}
			j++;
		}
		i++;
	}
	return (tab);
}
