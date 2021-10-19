/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:16:00 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/09 16:04:21 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

# define A 1
# define B 2
# define AB 3

typedef struct s_s
{
    int *a;
    int *b;
    int sa;
    int sb;
}t_s;

void	sa(int *a, int sizea);
void	sb(int *b, int sizeb);
void	ss(int *a, int sizea, int *b, int sizeb);
void	pa(int *a, int *sizea, int *b, int *sizeb);
void	pb(int *a, int *sizea, int *b, int *sizeb);
void	ra(int *a, int sizea);
void	rb(int *b, int sizeb);
void	rr(int *a, int sizea, int *b, int sizeb);
void	rra(int *a, int sizea);
void	rrb(int *b, int sizeb);
void	rrr(int *a, int sizea, int *b, int sizeb);

#endif