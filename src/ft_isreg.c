/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isreg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:57:44 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:24 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Checks if input path leads to a regular file.
	Returns boolean results.
*/

int		ft_isreg(const char *path)
{
	struct stat	st;

	stat(path, &st);
	return (S_ISREG(st.st_mode));
}
