/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:01:57 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 21:07:50 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ascend_elem(int *t, int n, int pos, int m)
{
	while (pos != 0)
	{
		if (pos >= (n / 2))
		{
			rro(t, n);
			if (m == A)
				ft_putendl_fd("rra", 1);
			else
				ft_putendl_fd("rrb", 1);
			pos++;
		}
		else
		{
			ro(t, n);
			if (m == A)
				ft_putendl_fd("ra", 1);
			else
				ft_putendl_fd("rb", 1);
			pos--;
		}
		if (pos == n)
			pos = 0;
	}
}

int	find_element(int *t, int elem)
{
	int	i;

	i = 0;
	while (elem != t[i])
		i++;
	return (i);
}
