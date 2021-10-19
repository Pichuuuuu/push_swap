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
	ft_putendl_fd("sa", 0);
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
		ft_putendl_fd("sa", 0);
	}
	else if (mode == AB)
	{
		sw(t, n);
		sw(t, n);
		ft_putendl_fd("ss", 0);
	}
}

void	ss(int *a, int sizea, int *b, int sizeb)
{
	sa(a, sizea);
	sb(b, sizeb);
}

void	pa(int *a, int *sizea, int *b, int *sizeb)
{
	int	i;

	i = *sizea - 1;
	if (*sizeb > 1)
	{
		while (i > 0)
		{
			a[i - 1] = a[i];
			i--;
		}
		a[0] = b[0];
		i = 0;
		while (i < *sizeb)
		{
			b[i] = b[i + 1];
			i++;
		}
		*sizeb = *sizeb - 1;
		*sizea = *sizea + 1;
	}
	ft_putendl_fd("pa", 0);
}

void	pb(int *a, int *sizea, int *b, int *sizeb)
{
	int	i;

	i = *sizeb - 1;
	if (*sizea > 1)
	{
		while (i > 0)
		{
			b[i] = b[i - 1];
			i--;
		}
		b[0] = a[0];
		i = 0;
		while (i < *sizeb)
		{
			a[i] = a[i + 1];
			i++;
		}
		*sizeb = *sizeb + 1;
		*sizea = *sizea - 1;
	}
	ft_putendl_fd("pb", 0);
}
