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

void	ra(int *a, int sizea)
{
	int	tmp;
	tmp = a[0];
	ft_memmove(a, a + 1, (sizea - 1) * sizeof(int));
	a[sizea - 1] = tmp;
	ft_putendl_fd("ra", 0);
}

void	rb(int *b, int sizeb)
{
	int	tmp;
	tmp = b[0];
	ft_memmove(b, b + 1, (sizeb - 1) * sizeof(int));
	b[sizeb - 1] = tmp;
	ft_putendl_fd("rb", 0);
}

void	rr(int *a, int sizea, int *b, int sizeb)
{
	ra(a, sizea);
	rb(b, sizeb);
}
