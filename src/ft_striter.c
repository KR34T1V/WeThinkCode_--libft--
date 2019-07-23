/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:41:52 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:47 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

void	ft_striter(char *str, void (*f)(char *))
{
	if (str != NULL && f != NULL)
	{
		while (*str)
			f(str++);
	}
}
