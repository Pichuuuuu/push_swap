/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 08:21:41 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 08:23:16 by Tamather         ###   ########.fr       */
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
