/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_puzzle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:09:03 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/23 20:14:18 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	*ft_check_index(int *tab, int val1, int val2, int index);
int	*ft_solve_row(int ***tab, int i, int j, int size);
int	*ft_solve_col(int ***tab, int i, int j, int size);
int	*ft_unique(int *tab, int size, int *count);

int	***ft_solve_index(int ***tab, int i, int j, int size)
{
	int	tmp1;
	int	tmp2;

	tmp1 = i;
	tmp2 = j;
	i = 1;
	j = 1;
	while (i < (size - 1) && j != 5)
	{
		tab[i][j] = ft_check_index(tab[i][j], tab[0][j][0], tab[5][j][0], i);
		tab[i][j] = ft_check_index(tab[i][j], tab[i][0][0], tab[i][5][0], j);
		i++;
		if (i == 5)
		{
			i = 1;
			j++;
		}
	}
	return (tab);
}

int	***ft_solve_puzzle(int ***tab, int size)
{
	int	i;
	int	j;
	int	turn;

	turn = 0;
	while (turn < 1)
	{
		i = 1;
		while (i < size - 1)
		{
			j = 1;
			while (j < size - 1)
			{
				ft_solve_index(tab, i, j, size);
				// tab[i][j] = ft_solve_row(tab, i, j, size);
				// tab[i][j] = ft_solve_col(tab, i, j, size);
				j++;
			}
			i++;
		}
		turn++;
	}
	return (tab);
}

int	*ft_solve_row(int ***tab, int pos_x, int pos_y, int size)
{
	// printf("%d,%d,%d,%d\n", tab[pos_x][pos_y][0], tab[pos_x][pos_y][1], tab[pos_x][pos_y][2], tab[pos_x][pos_y][3]);
	int	count[4];
	int	i;
	int	j;
	int	tmp_x;
	int	tmp_y;

	tmp_x = pos_x;
	tmp_y = pos_y;
	i = 1;
	while (i < size - 1)
	{	
		count[0] = 0;
		count[1] = 0;
		count[2] = 0;
		count[3] = 0;
		j = 0;
		while (j < 4)
		{
			printf("\n%d - %d - %d - %d\n\n", i, pos_y, j, tab[i][pos_y][j]);
			if (tab[i][pos_y][j] != 0)
			{
				// tab[i][j] = ft_check_index(tab[i][j], tab[0][j][0], tab[5][j][0], i);

				printf("Hello");
				// printf(" %d,%d,%d,%d\n", tab[i][pos_y][0]);
				count[j]++;
			}
			j++;
		}
		printf("**************************\n");
		tab[tmp_x][tmp_y] = ft_unique(tab[tmp_x][tmp_y], 4, count);
		i++;
	}
	return (tab[tmp_x][tmp_y]);
}

int	*ft_solve_col(int ***tab, int pos_x, int pos_y, int size)
{
	int	count[4];
	int	i;
	int	j;
	int	tmp_x;
	int	tmp_y;

	tmp_x = pos_x;
	tmp_y = pos_y;
	i = 1;
	while (i < size - 1)
	{	
		count[0] = 0;
		count[1] = 0;
		count[2] = 0;
		count[3] = 0;
		j = 0;
		while (j < 4)
		{
			if (tab[pos_x][i][j] != 0)
			{
				count[j]++;
			}
			j++;
		}
		tab[tmp_x][tmp_y] = ft_unique(tab[tmp_x][tmp_y], 4, count);
		i++;
	}
	return (tab[tmp_x][tmp_y]);
}

int	*ft_unique(int *tab, int size, int *count)
{
	int	i;
	int	tmp;
	int	is_unique;

	i = 0;
	is_unique = 0;
	while (i < size && !is_unique)
	{
		if (tab[i] != 0 && count[i] == 1)
		{
			is_unique = 1;
			tmp = i;
		}
		i++;
	}
	i = 0;
	if (is_unique)
	{
		while (i < 4)
		{
			if (i != tmp)
				tab[i] = 0;
			i++;
		}
	}
	return (tab);
}
