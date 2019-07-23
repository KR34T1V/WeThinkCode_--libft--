/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 08:28:41 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:17 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

int		ft_putwstr(wchar_t *ws)
{
	int		rtn;
	int		i;

	rtn = 0;
	i = 0;
	while (ws[i] != '\0')
	{
		rtn += ft_putwchar(ws[i++]);
	}
	return (rtn);
}
