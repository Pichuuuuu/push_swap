/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 08:24:14 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 08:25:25 by Tamather         ###   ########.fr       */
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
