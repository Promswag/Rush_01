/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_index2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:03:16 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/23 15:22:02 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_tab_index2_val4(int *tab)
{
	int	index[4];
	int	i;

	index[0] = 0;
	index[1] = 1;
	index[2] = 0;
	index[3] = 0;
	i = 0;
	while (i < 4)
	{
		tab[i] = tab[i] * index[i];
		i++;
	}
	return (tab);
}

int	*ft_tab_index2_val3(int *tab)
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

int	*ft_tab_index2_val2(int *tab)
{
	int	index[4];
	int	i;

	index[0] = 1;
	index[1] = 1;
	index[2] = 0;
	index[3] = 1;
	i = 0;
	while (i < 4)
	{
		tab[i] = tab[i] * index[i];
		i++;
	}
	return (tab);
}

int	*ft_tab_index2_val1(int *tab)
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
