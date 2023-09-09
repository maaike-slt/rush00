/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:34:30 by msloot            #+#    #+#             */
/*   Updated: 2023/09/10 00:01:18 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	every_if(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1)
		|| (a == 1 && b == x)
		|| (a == y && b == 1)
		|| (a == y && b == x))
		ft_putchar('o');
	else if (a == 1 || a == y)
		ft_putchar('-');
	else if (b == 1 || b == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	while (a <= y)
	{
		b = 1;
		while (b <= x)
		{
			every_if(a, b, x, y);
			b++;
		}
		a++;
		ft_putchar('\n');
	}
}
