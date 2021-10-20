/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:16:10 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 21:07:51 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_int(char *t)
{
	if (ft_strlen(t) == 10 && ft_strncmp(t, "2147483647", 10) > 0)
		return (1);
	else if (ft_strlen(t) == 11 && t[0] == '-'
		&& ft_strncmp(t, "-2147483648", 11) > 0)
		return (1);
	else if (ft_strlen(t) > 10 && t[0] != '-')
		return (1);
	return (0);
}

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
		if (check_int(arg[i]))
			return (1);
		while (arg[i][j])
		{
			if (!(arg[i][j] == '-' && j == 0) && !ft_isdigit(arg[i][j]))
				return (1);
			j++;
		}
		j = i;
		while (arg[++j])
			if (!ft_strncmp(arg[j], arg[i], ft_strlen(arg[i]))
				&& ft_strlen(arg[i]) == ft_strlen(arg[j]))
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

void	prints(int *a, int sizea)
{
	int	i;

	i = 0;
	while (i < sizea)
	{
		ft_putnbr(a[i]);
		ft_putendl_fd("", 1);
		i++;
	}
}
