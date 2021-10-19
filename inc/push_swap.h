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

void	rrotate(t_s *s, int mode);
void	rotate(t_s *s, int mode);
void	swap(t_s *s, int mode);
void	push(t_s *s, int mode);
void	pu(int *t, int *n, int *td, int *nd);
void	sw(int *a, int sizea);
void	ro(int *t, int n);
void	rro(int *t, int n);

#endif