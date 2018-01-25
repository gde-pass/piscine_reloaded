/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:17:30 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/13 12:47:08 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c);

void			print_argv(char **argv)
{
	char		*ptr;

	while (*argv != NULL)
	{
		ptr = *argv++;
		while (*ptr)
			ft_putchar(*ptr++);
		ft_putchar('\n');
	}
}

int				ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return ((int)*s1 - *s2);
		s1++;
		s2++;
	}
	return ((int)*s1 - *s2);
}

void			sort_argv(int count, char **argv)
{
	int			i;
	int			j;
	char		*tmp;

	i = 0;
	j = 0;
	while (i < count)
	{
		while (j < count)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int				main(int argc, char **argv)
{
	sort_argv(argc - 1, ++argv);
	print_argv(argv);
}
