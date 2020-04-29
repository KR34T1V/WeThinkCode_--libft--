/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 07:20:51 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:48 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Allocates a new linked list item with enough size to hold "content" based
	on "content_size" given.
	Returns new allocated list on success, or NULL.
*/

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*lstnew;

	if (!(lstnew = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
	}
	else
	{
		if (!(lstnew->content = ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(lstnew->content, content, content_size);
		lstnew->content_size = content_size;
	}
	lstnew->next = NULL;
	return (lstnew);
}
