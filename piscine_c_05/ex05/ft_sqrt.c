/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 08:42:48 by sdunckel          #+#    #+#             */
/*   Updated: 2019/06/16 13:31:27 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if ((i * i) == nb)
		return ((int)i);
	else
		return (0);
}
