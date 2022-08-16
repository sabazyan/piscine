/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:59:55 by sabazyan          #+#    #+#             */
/*   Updated: 2022/02/14 17:42:35 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}