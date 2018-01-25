/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:28:41 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/13 12:48:41 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*table;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	table = (int*)malloc(sizeof(*table) * (max - min));
	while (min < max)
	{
		table[i] = min;
		i++;
		min++;
	}
	return (table);
}
