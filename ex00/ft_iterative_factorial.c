/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:56:12 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/21 13:49:22 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */Wq
int ft_iterative_factorial(int nb)
{
	int	fact = 1;
	
	if(nb < 0 || nb > 12)
		return 0;
	else
		if(nb == 0 || nb == 1)
			return 1;

	while(nb >= 1)
	{
		fact *= nb;
		nb--;
	}
	
	return fact;
}

