/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:22:28 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:32 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/private_libft_includes.h"
#include "../inc/libft.h"

/*
	Returns the lowercase of char "n" if it exists.
*/

int		ft_tolower(int n)
{
	if (ft_isupper(n))
		n += 32;
	return (n);
}
