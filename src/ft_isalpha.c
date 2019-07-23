/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:34:56 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:07 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

int		ft_isalpha(int n)
{
	if (ft_islower(n) == 1 || ft_isupper(n) == 1)
		return (1);
	else
		return (0);
}
