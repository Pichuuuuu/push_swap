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

void	sa(t_s *s);
void	sb(t_s *s);
void	ss(t_s *s);
void	pa(t_s *s);
void	pb(t_s *s);
void	ra(t_s *s);
void	rb(t_s *s);
void	rr(t_s *s);
void	rra(t_s *s);
void	rrb(t_s *s);
void	rrr(t_s *s);
void	pu(int *t, int *n, int *td, int *nd);
void	sw(int *a, int sizea);
void	ro(int *t, int n);
void	rro(int *t, int n);

#endif