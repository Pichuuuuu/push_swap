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

void	rra(int *a, int sizea)
{
	int	tmp;

	tmp = a[sizea - 1];
	ft_memmove(a + 1, a, (sizea - 1) * sizeof(int));
	a[0] = tmp;
	ft_putendl_fd("rra", 0);
}

void	rrb(int *b, int sizeb)
{
	int	tmp;

	tmp = b[sizeb - 1];
	ft_memmove(b + 1, b, (sizeb - 1) * sizeof(int));
	b[0] = tmp;
	ft_putendl_fd("rrb", 0);
}

void	rrr(int *a, int sizea, int *b, int sizeb)
{
	rra(a, sizea);
	rrb(b, sizeb);
}
