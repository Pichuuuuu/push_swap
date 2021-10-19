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

void	swap(t_s *s, int mode)
{
	if (mode == 0)
	{
		sw(s->a, s->sa);
		ft_putendl_fd("sa", A);
	}
	else if (mode == B)
	{
		sw(s->b, s->sb);
		ft_putendl_fd("sb", B);
	}
	else if (mode == AB)
	{
		sw(s->a, s->sa);
		sw(s->b, s->sb);
		ft_putendl_fd("ss", AB);
	}
}

void	pu(int *t, int *n, int *td, int *nd)
{
	if (*n > 1)
	{
		ft_memmove(td + 1, td, *n - 1);
		td[0] = t[0];
		ft_memmove(td, td - 1, *n - 1);
		*nd = *nd + 1;
		*n = *n - 1;
	}
}

void	push(t_s *s, int mode)
{
	if (mode == 0)
	{
		pu(s->b, &(s->sb), s->a, &(s->sb));
		ft_putendl_fd("pa", A);
	}
	else if (mode == B)
	{
		pu(s->a, &(s->sa), s->b, &(s->sb));
		ft_putendl_fd("pb", B);
	}
}