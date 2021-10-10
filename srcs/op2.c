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

void	ra(int **a, int sizea)
{
	int	tmp;
	int	i;

	i = sizea - 1;
	if (sizea < 1)
	{
		tmp = a[0];
		while (i >= 0)
		{
			*a[i] = *a[i + 1];
			i--;
		}
		a[sizea - 1] = tmp;
	}
}

void	rb(int **b, int sizeb)
{
	int	tmp;
	int	i;

	i = sizeb - 1;
	if (sizeb < 1)
	{
		tmp = b[0];
		while (i >= 0)
		{
			*b[i] = *b[i + 1];
			i++;
		}
		b[sizeb - 1] = tmp;
	}
}

void	rr(int **a, int sizea, int **b, int sizeb)
{
	ra(a, sizea);
	rb(b, sizeb);
}
