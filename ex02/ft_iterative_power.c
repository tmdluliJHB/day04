/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:21:48 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/23 15:08:05 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power)
{
	int multiple;
    multiple = nb;

	if (power == 0 || nb == 1)
		return (1);
	else
		if (power == 1)
			return (nb);

	while (power > 1)
	{
		multiple *= nb;
		power--;
	}

	return (multiple);
}



