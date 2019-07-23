/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:14:01 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:25 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

char	*ft_strstr(const char *h, const char *ndle)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	lneedle;
	char			*hay;

	lneedle = ft_strlen(ndle) - 1;
	hay = (char *)h;
	a = 0;
	if (!*ndle)
		return (hay);
	while (hay[a])
	{
		i = 0;
		if (hay[a] == ndle[0])
			while (hay[a + i] == ndle[i])
			{
				if (i == lneedle)
					return (&hay[a]);
				i++;
			}
		a++;
	}
	return (NULL);
}
