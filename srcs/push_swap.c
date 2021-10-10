/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:45:04 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/05 19:44:00 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_number(char **arg)
{
	int	i;
	int	j;

	i = 0;
	if (!arg[0])
		return (1);
	while (arg[i])
	{
		j = 0;
		while (arg[i][j])
			if (!ft_isdigit(arg[i][j++]))
				return (1);
		j = i + 1;
		while (arg[j])
			if (!ft_strncmp(arg[i], arg[j++], 10))
				return (1);
		i++;
	}
	return (0);
}

int	*atabtoitab(char **atab, int *size)
{
	int	i;
	int	*itab;

	i = 0;
	while (atab[*size])
		(*size)++;
	itab = malloc(sizeof(int) * (*size));
	if (!itab)
		exit(1);
	ft_bzero(itab, i + 1);
	while (atab[i])
	{
		itab [i] = atoi(atab[i]);
		i++;
	}
	return (itab);
}

int	check_tri(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			t = 1;
		i++;
	}
	if (!t)
		return (1);
	return (0);
}

int	main(int argc, char const **argv)
{
	int	*tab;
	int	size;

	size = 0;
	(void)argc;
	if (check_number((char **)argv + 1))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	else
	{
		tab = atabtoitab((char **)argv + 1, &size);
		if (!check_tri(tab, size))
			ft_putendl_fd("untri", 0);
		free(tab);
	}
	return (0);
}
