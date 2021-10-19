/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:15:52 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/09 15:59:31 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ro(int *t, int n)
{
	int	tmp;
	tmp = t[0];
	ft_memmove(t, t + 1, (n - 1) * sizeof(int));
	t[n - 1] = tmp;
}


void	rotate(t_s *s, int mode)
{
	if (mode == 0)
	{
		ro(s->a, s->sa);
		ft_putendl_fd("ra", A);
	}
	else if (mode == B)
	{
		ro(s->b, s->sb);
		ft_putendl_fd("rb", B);
	}
	else if (mode == AB)
	{
		ro(s->a, s->sa);
		ro(s->b, s->sb);
		ft_putendl_fd("rr", AB);
	}
}

void	rro(int *t, int n)
{
	int	tmp;

	tmp = t[n - 1];
	ft_memmove(t + 1, t, (n- 1) * sizeof(int));
	t[0] = tmp;
}


void	rrotate(t_s *s, int mode)
{
	if (mode == 0)
	{
		rro(s->a, s->sa);
		ft_putendl_fd("rra", A);
	}
	else if (mode == B)
	{
		rro(s->b, s->sb);
		ft_putendl_fd("rrb", B);
	}
	else if (mode == AB)
	{
		rro(s->a, s->sa);
		rro(s->b, s->sb);
		ft_putendl_fd("rrr", AB);
	}
}
