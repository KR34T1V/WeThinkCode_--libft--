/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:11:27 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:27 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

void	ft_strclr(char *str)
{
	int x;
	int i;

	if (str)
	{
		i = 0;
		x = ft_strlen(str);
		while (i != x)
		{
			str[i] = '\0';
			i++;
		}
	}
}
