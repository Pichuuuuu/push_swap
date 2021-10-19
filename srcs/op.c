/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:33:38 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/09 14:53:05 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sw(int *a, int sizea)
{
	int	tmp;

	if (sizea > 2)
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
}

void	sa(t_s *s)
{
	sw(s->a, s->sa);
	ft_putendl_fd("sa", 1);
}

void	sb(t_s *s)
{
	sw(s->b, s->sb);
	ft_putendl_fd("sb", 1);
}

void	ss(t_s *s)
{
	sw(s->a, s->sa);
	sw(s->b, s->sb);
	ft_putendl_fd("ss", 1);
}

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