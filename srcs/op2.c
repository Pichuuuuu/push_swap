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

void	ra(t_s *s)
{
	ro(s->a, s->sa);
	ft_putendl_fd("ra", 1);
}

void	rb(t_s *s)
{
	ro(s->b, s->sb);
	ft_putendl_fd("rb", 1);
}

void	rr(t_s *s)
{
	ro(s->a, s->sa);
	ro(s->b, s->sb);
	ft_putendl_fd("rr", 1);
}

void	rro(int *t, int n)
{
	int	tmp;

	tmp = t[n - 1];
	ft_memmove(t + 1, t, (n - 1) * sizeof(int));
	t[0] = tmp;
}

void	rra(t_s *s)
{
	rro(s->a, s->sa);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_s *s)
{
	rro(s->b, s->sb);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_s *s)
{
	rro(s->a, s->sa);
	rro(s->b, s->sb);
	ft_putendl_fd("rrr", 1);
}