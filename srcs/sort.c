/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:55:51 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 18:43:28 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	dep_element(t_s *s, int min, int max)
{
	int	i;

	i = 0;
	if (s->a[0] > max || s->a[0] < min)
		ascend_elem(s->b, s->sb, find_element(s->b, max), B);
	else
	{
		if ((s->a[0] > s->b[s->sb - 1] || s->a[0] < s->b[i]))
		{
			while ((s->a[0] > s->b[i] || s->a[0] < s->b[i + 1]))
			{
				i++;
			}
			ascend_elem(s->b, s->sb, i + 1, B);
		}
	}
}

static void	pos_element_in_the_stack(t_s *s)
{
	int	min;
	int	max;
	int	i;

	i = 0;
	if (s->sb > 1)
	{
		max = s->b[0];
		min = s->b[0];
		while (i < s->sb)
		{
			if (s->b[i] < min)
				min = s->b[i];
			if (s->b[i] > max)
				max = s->b[i];
			i++;
		}
		dep_element(s, min, max);
	}
	pb(s);
}

static void	clean_stack(t_s *s, int seg)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	j = (seg - 1) * s->size;
	max = s->c[j];
	if (seg > 0)
		ascend_elem(s->a, s->sa, min_pos(s->a, s->sa), A);
	while (s->sb > i)
		pa(s);
}

void	sort_all(t_s *s)
{
	int	seg;
	int	i;
	int	j;
	int	size;

	i = 0;
	seg = ((s->sa / s->size) + (s->sa % s->size > 0));
	while (i < seg)
	{
		if (s->sa % s->size && i == seg - 1)
			size = s->sa % s->size;
		else
			size = s->size;
		j = 0;
		while (j < size)
		{
			ascend_elem(s->a, s->sa, seg_pos(s, i, size), A);
			pos_element_in_the_stack(s);
			j++;
		}
		ascend_elem(s->b, s->sb, max_pos(s->b, s->sb), B);
		clean_stack(s, i);
		i++;
	}
	ascend_elem(s->a, s->sa, min_pos(s->a, s->sa), A);
}
