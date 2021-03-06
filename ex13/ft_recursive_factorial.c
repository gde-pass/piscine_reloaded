/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:19:08 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/07 13:57:19 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb <= -1 || nb >= 13))
	{
		return (0);
	}
	if ((nb == 1 || nb == 0))
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
