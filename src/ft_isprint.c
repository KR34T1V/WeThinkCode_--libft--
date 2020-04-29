/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:00:52 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:23 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Checks if input character is a printable character.
	Returns boolean results.
*/

int		ft_isprint(int n)
{
	if (n >= 32 && n <= 126)
		return (1);
	else
		return (0);
}
