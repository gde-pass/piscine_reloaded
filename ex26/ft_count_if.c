/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:13:14 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/13 13:28:38 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int vr;

	vr = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			vr++;
		i++;
	}
	return (vr);
}
