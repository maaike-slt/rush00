/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboughan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:32:58 by fboughan          #+#    #+#             */
/*   Updated: 2023/09/09 20:43:26 by fboughan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	every_if(int aa, int bb, int cc, int ll)
{
	if ((aa == '1' && bb == '1') || (aa == ll && bb == cc))
	{
		ft_putchar('/');
	}
	else if ((aa == '1' && bb == cc) || (aa == ll && bb == '1'))
	{
		ft_putchar('\\');
	}
	else if ((aa < ll && bb == '1') || (aa > '1' && bb == cc))
	{
		ft_putchar('|');
	}
	else if (aa > '1' && aa < ll && bb > '1' && bb < cc)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = '1';
	while (a <= x)
	{
		b = '1';
		while (b <= y)
		{
			every_if(a, b, y, x);
			b++;
		}
		a++;
		ft_putchar('\n');
	}
}
