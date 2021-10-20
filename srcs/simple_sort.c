/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:14:22 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 17:24:58 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_s *s)
{
	if (s->a[2] > s->a[0] && s->a[0] > s->a[1])
		sa(s);
	else if (s->a[0] > s->a[2] && s->a[2] > s->a[1])
		ra(s);
	else if (s->a[1] > s->a[0] && s->a[0] > s->a[2])
		rra(s);
	else if (s->a[0] > s->a[1] && s->a[1] > s->a[2])
	{
		sa(s);
		rra(s);
	}
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2])
	{
		sa(s);
		ra(s);
	}
}

void	sort5(t_s *s)
{
	while (s->sa > 3)
	{
		ascend_elem(s->a, s->sa, min_pos(s->a, s->sa), A);
		pb(s);
	}
	sort3(s);
	while (s->sb > 0)
		pa(s);
}
