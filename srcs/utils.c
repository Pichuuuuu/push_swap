/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:19:47 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 18:09:18 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_pos(int *t, int n)
{
	int	i;
	int	pos;
	int	posnum;

	i = 0;
	posnum = t[0];
	pos = 0;
	while (i < n)
	{
		if (posnum > t[i])
		{
			posnum = t[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	max_pos(int *t, int n)
{
	int	i;
	int	pos;
	int	posnum;

	i = 0;
	posnum = t[0];
	pos = 0;
	while (i < n)
	{
		if (posnum < t[i])
		{
			posnum = t[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	seg_pos(t_s *s, int seg, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < s->sa)
	{
		j = seg * s->size;
		while (j < (seg * s->size + size))
		{
			if (s->c[j] == s->a[i])
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	quick_sort(int *tab, int first, int last)
{
	int		i;
	int		j;

	if (first < last)
	{
		i = first;
		j = last;
		while (i < j)
		{
			while (tab[i] <= tab[first] && i < last)
				i++;
			while (tab[j] > tab[first])
				j--;
			if (i < j)
				ft_swap(&tab[i], &tab[j]);
		}
		ft_swap(&tab[first], &tab[j]);
		quick_sort(tab, first, j - 1);
		quick_sort(tab, j + 1, last);
	}
}
