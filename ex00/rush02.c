/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:45:51 by msloot            #+#    #+#             */
/*   Updated: 2023/09/09 17:47:15 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	every_if(int aa, int bb, int cc, int ll)
{
	if ((aa == '1' && bb == '1') || (aa == '1' && bb == cc))
	{
		ft_putchar('A');
	}
	else if ((aa == cc && bb == '1') || (aa == ll && bb == cc))
	{
		ft_putchar('C');
	}
	else if (aa > '1' && aa < ll && bb > '1' && bb < cc)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	l;
	int	c;
	int	a;
	int	b;

	a = '1';
	l = x;
	c = y;
	while (a <= x)
	{
		b = '1';
		while (b <= y)
		{
			every_if(a, b, c, l);
			b++;
		}
		a++;
		write(1, "\n", 1);
	}
}
