/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:45:04 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/10 05:59:43 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	check_number(char **arg)
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

static int	*atabtoitab(char **atab, int *size)
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

static void sort3(int *a)
{
	if (a[2] > a[0] && a[0] > a[1])
		sa(a, 3);
	else if (a[0] > a[2] && a[2] > a[1])
		ra(a, 3);
	else if (a[1] > a[0] && a[0] > a[2])
		rra(a, 3);
	else if (a[0] > a[1] && a[1] > a[2])
	{
		sa(a, 3);
		rra(a, 3);
	}
	else if(a[0] < a[1] && a[1] > a[2])
	{
		sa(a, 3);
		ra(a, 3);
	}
	else
	{
		ft_putendl_fd("nop", 0);
	}
	
}

void prints(int *a, int sizea)
{
	int i;

	i = 0;
	while (i < sizea)
	{
		ft_putnbr(a[i]);
		ft_putendl_fd("", 0);
		i++;
	}

}

void	sort(int *a, int sizea, int *b, int sizeb)
{
	b = NULL;
	sizeb = 0;
	if (sizea == 3)
		sort3(a);
}

static int	check_tri(int *tab, int size)
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
	int	*a;
	int *b;
	int	sizea;

	sizea = 0;
	b = NULL;
	(void)argc;
	if (check_number((char **)argv + 1))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	else
	{
		a = atabtoitab((char **)argv + 1, &sizea);
		if (!check_tri(a, sizea))
		{
			b = malloc(sizeof(int) * sizea);
			if(!b)
				exit(1);
			sort(a, sizea, b, 0);
		}
		prints(a, sizea);
		if (check_tri(a, sizea))
			ft_putendl_fd("yes", 0);
		free(a);
		free(b);
	}
	return (0);
}
