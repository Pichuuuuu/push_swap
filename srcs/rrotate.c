/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 08:25:55 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 08:26:44 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
