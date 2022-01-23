/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ressources.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:35:43 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/23 12:26:40 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tab_index1_val1(int *tab);
void	ft_tab_index1_val2(int *tab);
void	ft_tab_index1_val3(int *tab);
void	ft_tab_index1_val4(int *tab);
void	ft_tab_index2_val1(int *tab);
void	ft_tab_index2_val2(int *tab);
void	ft_tab_index2_val3(int *tab);
void	ft_tab_index2_val4(int *tab);
void	ft_tab_index3_val1(int *tab);
void	ft_tab_index3_val2(int *tab);
void	ft_tab_index3_val3(int *tab);
void	ft_tab_index3_val4(int *tab);
void	ft_tab_index4_val1(int *tab);
void	ft_tab_index4_val2(int *tab);
void	ft_tab_index4_val3(int *tab);
void	ft_tab_index4_val4(int *tab);

int	*ft_check_index1_val(int *tab, int val1, int val2)
{
	if (val1 == 1)
		ft_tab_index1_val1(tab);
	else if (val1 == 2)
		ft_tab_index1_val2(tab);
	else if (val1 == 3)
		ft_tab_index1_val3(tab);
	else
		ft_tab_index1_val4(tab);
	if (val2 == 1)
		ft_tab_index4_val1(tab);
	else if (val2 == 2)
		ft_tab_index4_val2(tab);
	else if (val2 == 3)
		ft_tab_index4_val3(tab);
	else
		ft_tab_index4_val4(tab);
	return (tab);
}

int	*ft_check_index2_val(int *tab, int val1, int val2)
{
	if (val1 == 1)
		ft_tab_index2_val1(tab);
	else if (val1 == 2)
		ft_tab_index2_val2(tab);
	else if (val1 == 3)
		ft_tab_index2_val3(tab);
	else
		ft_tab_index2_val4(tab);
	if (val2 == 1)
		ft_tab_index3_val1(tab);
	else if (val2 == 2)
		ft_tab_index3_val2(tab);
	else if (val2 == 3)
		ft_tab_index3_val3(tab);
	else
		ft_tab_index3_val4(tab);
	return (tab);
}

int	*ft_check_index3_val(int *tab, int val1, int val2)
{
	if (val1 == 1)
		ft_tab_index3_val1(tab);
	else if (val1 == 2)
		ft_tab_index3_val2(tab);
	else if (val1 == 3)
		ft_tab_index3_val3(tab);
	else
		ft_tab_index3_val4(tab);
	if (val2 == 1)
		ft_tab_index2_val1(tab);
	else if (val2 == 2)
		ft_tab_index2_val2(tab);
	else if (val2 == 3)
		ft_tab_index2_val3(tab);
	else
		ft_tab_index2_val4(tab);
	return (tab);
}

int	*ft_check_index4_val(int *tab, int val1, int val2)
{
	if (val1 == 1)
		ft_tab_index4_val1(tab);
	else if (val1 == 2)
		ft_tab_index4_val2(tab);
	else if (val1 == 3)
		ft_tab_index4_val3(tab);
	else
		ft_tab_index4_val4(tab);
	if (val2 == 1)
		ft_tab_index1_val1(tab);
	else if (val2 == 2)
		ft_tab_index1_val2(tab);
	else if (val2 == 3)
		ft_tab_index1_val3(tab);
	else
		ft_tab_index1_val4(tab);
	return (tab);
}

int	*ft_check_index(int *tab, int val1, int val2, int index)
{
	if (index == 1)
		tab = ft_check_index1_val(tab, val1, val2);
	else if (index == 2)
		tab = ft_check_index2_val(tab, val1, val2);
	else if (index == 3)
		tab = ft_check_index3_val(tab, val1, val2);
	else
		tab = ft_check_index4_val(tab, val1, val2);
	return (tab);
}
