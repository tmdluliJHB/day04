/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:11:56 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/23 15:12:19 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0 || inde > 46)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index <= 2)
		return (1);
	else
		return (ft_fibonacci(index  - 1) + ft_fibonacci(index - 2));
}
