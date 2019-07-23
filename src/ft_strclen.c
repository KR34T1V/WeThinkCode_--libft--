/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:23:54 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:26 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

size_t	ft_strclen(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (*str++ != c)
		i++;
	return (i);
}
