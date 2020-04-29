/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:02:38 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:21:56 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	clears "n" amount of bytes from "void ptr" by setting consecutive bytes to 0 (null).
*/
void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}
