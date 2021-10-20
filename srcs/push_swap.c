/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:45:04 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 21:07:53 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort(t_s *s)
{
	if (s->sa == 2)
		sa(s);
	else if (s->sa == 3)
		sort3(s);
	else if (s->sa <= 5)
		sort5(s);
	else
		sort_all(s);
}

static int	check_sort(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			t = 1;
		i++;
	}
	if (!t)
		return (1);
	return (0);
}

void	tab_ini(t_s *s)
{
	s->b = malloc(sizeof(int) * s->sa);
	if (!s->b)
		exit(1);
	s->c = malloc(sizeof(int) * s->sa);
	if (!s->c)
		exit(1);
	ft_memcpy(s->c, s->a, s->sa * sizeof(int));
	s->sc = s->sa;
	quick_sort(s->c, 0, s->sc - 1);
	if (s->sa < 200)
		s->size = 26;
	else
		s->size = 58;
}

int	main(int argc, char const **argv)
{
	t_s	s;

	ft_bzero(&s, sizeof(t_s));
	if (argc > 1)
	{
		if (check_number((char **)argv + 1))
		{
			ft_putendl_fd("Error", 2);
			return (1);
		}
		else
		{
			s.a = atabtoitab((char **)argv + 1, &s.sa);
			tab_ini(&s);
			if (!check_sort(s.a, s.sa))
			{
				sort(&s);
			}
			free(s.a);
			free(s.b);
			free(s.c);
		}
	}
	return (0);
}
