/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:36:23 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/13 12:42:02 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if ((nb <= -1 || nb >= 13))
		return (0);
	while (i <= nb)
	{
		result = (i * result);
		i++;
	}
	return (result);
}
