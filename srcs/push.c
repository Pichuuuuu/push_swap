/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 08:21:15 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 21:07:54 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pu(int *t, int *n, int *td, int *nd)
{
	if (*n > 0)
	{
		ft_memmove(td + 1, td, (*nd) * sizeof(int));
		td[0] = t[0];
		ft_memmove(t, t + 1, (*n - 1) * sizeof(int));
		*nd = *nd + 1;
		*n = *n - 1;
	}
}

void	pa(t_s *s)
{
	pu(s->b, &s->sb, s->a, &s->sa);
	ft_putendl_fd("pa", 1);
}

void	pb(t_s *s)
{
	pu(s->a, &s->sa, s->b, &s->sb);
	ft_putendl_fd("pb", 1);
}
