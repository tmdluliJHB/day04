/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:31:46 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/21 13:45:48 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_factorial(int nb)
{
	if(nb < 0 || nb > 12)
		return 0;
	else
		if(nb == 0 || nb == 1)
			return 1;
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
