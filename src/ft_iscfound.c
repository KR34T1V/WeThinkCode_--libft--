/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscfound.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:30:08 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:13 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

int		ft_iscfound(char const *str, char const c)
{
	while (*str != '\0')
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}
