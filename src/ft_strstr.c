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

/*
	Tries to find string "needle" in string "haystack", if found a pointer
	to the address of the occurence is returned, else NULL is returned.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	lneedle;
	char			*hay;

	lneedle = ft_strlen(needle) - 1;
	hay = (char *)haystack;
	a = 0;
	if (!*needle)
		return (hay);
	while (hay[a])
	{
		i = 0;
		if (hay[a] == needle[0])
			while (hay[a + i] == needle[i])
			{
				if (i == lneedle)
					return (&hay[a]);
				i++;
			}
		a++;
	}
	return (NULL);
}
