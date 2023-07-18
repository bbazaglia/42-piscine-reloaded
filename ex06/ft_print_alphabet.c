/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:48:08 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/14 12:08:16 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;
	int		i;

	letter = 'a';
	i = 0;
	while (i < 26)
	{
		ft_putchar(letter);
		letter++;
		i++;
	}
}
