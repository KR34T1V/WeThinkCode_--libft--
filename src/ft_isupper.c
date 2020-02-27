/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:30:16 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:30 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Checks if input character is uppercase
*/

int		ft_isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);
	else
		return (0);
}
