/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:25:42 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:43 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"
/*
	Creates a duplicate of string "s1" and returns allocated 
	pointer to a duplicate string.
*/
char	*ft_strdup(const char *s1)
{
	char *strd;

	strd = ft_strnew(ft_strlen(s1));
	if (strd == NULL)
		return (NULL);
	ft_strcpy(strd, s1);
	return (strd);
}
