/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_index3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:02:42 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/23 15:21:56 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_tab_index3_val4(int *tab)
{
	int	index[4];
	int	i;

	index[0] = 0;
	index[1] = 0;
	index[2] = 1;
	index[3] = 0;
	i = 0;
	while (i < 4)
	{
		tab[i] = tab[i] * index[i];
		i++;
	}
	return (tab);
}

int	*ft_tab_index3_val3(int *tab)
{
	int	index[4];
	int	i;

	index[0] = 1;
	index[1] = 1;
	index[2] = 1;
	index[3] = 1;
	i = 0;
	while (i < 4)
	{
		tab[i] = tab[i] * index[i];
		i++;
	}
	return (tab);
}

int	*ft_tab_index3_val2(int *tab)
{
	int	index[4];
	int	i;

	index[0] = 1;
	index[1] = 1;
	index[2] = 1;
	index[3] = 1;
	i = 0;
	while (i < 4)
	{
		tab[i] = tab[i] * index[i];
		i++;
	}
	return (tab);
}

int	*ft_tab_index3_val1(int *tab)
{
	int	index[4];
	int	i;

	index[0] = 1;
	index[1] = 1;
	index[2] = 1;
	index[3] = 0;
	i = 0;
	while (i < 4)
	{
		tab[i] = tab[i] * index[i];
		i++;
	}
	return (tab);
}
