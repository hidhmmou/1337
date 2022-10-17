/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:38:57 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/11 17:43:22 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
		{
			nbr++;
		}
		i++;
	}
	return (nbr);
}