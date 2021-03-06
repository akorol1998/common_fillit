/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:04:11 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 15:23:42 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		counter;

	counter = 0;
	if (s)
	{
		while (s[counter] != '\0')
		{
			s[counter] = '\0';
			counter++;
		}
	}
}
