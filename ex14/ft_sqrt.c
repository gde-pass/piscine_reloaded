/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:27:12 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/07 13:35:26 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	square;

	square = 1;
	while (square * square < nb)
	{
		square++;
	}
	if (square * square == nb)
	{
		return (square);
	}
	else
	{
		return (0);
	}
}
