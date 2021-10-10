/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:55:50 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/09 15:57:10 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int **a, int sizea)
{
	int	i;
	int	tmp;

	i = sizea - 1;
	if (sizea > 1)
	{
		tmp = a[sizea - 1];
		while (i > 0)
		{
			*a[i] = *a[i - 1];
			i--;
		}
	}
}

void	rrb(int **b, int sizeb)
{
	int	i;
	int	tmp;

	i = sizeb - 1;
	if (sizeb > 1)
	{
		tmp = b[sizeb - 1];
		while (i > 0)
		{
			*b[i] = *b[i - 1];
			i--;
		}
	}
}

void	rrr(int **a, int sizea, int **b, int sizeb)
{
	rra(a, sizea);
	rrb(b, sizeb);
}
