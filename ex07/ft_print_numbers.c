/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:56:26 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/17 16:44:00 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	digit;
	int		i;

	digit = '0';
	i = 0;
	while (i <= 9)
	{
		ft_putchar(digit);
		digit++;
		i++;
	}
}
