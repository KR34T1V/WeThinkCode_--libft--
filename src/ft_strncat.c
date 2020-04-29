/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 10:26:30 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Concatinates string "s2" onto string "s1" for "n" amounts of bytes.
	Returns concatinated final string.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *temp;

	temp = s1;
	temp += ft_strlen(s1);
	while (n-- && *s2 != '\0')
	{
		*temp++ = *s2++;
	}
	*temp = '\0';
	return (s1);
}
