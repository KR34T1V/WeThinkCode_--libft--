/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:35:35 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:22 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*dst;

	dst = s1;
	dst += ft_strlen(s1);
	ft_strcpy(dst, s2);
	return (s1);
}
