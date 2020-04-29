/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:31:15 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:46 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Performs the function (*f) on each "t_list *lst" element.
	Returns a manipulated list on success or NULL.
*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstnew;

	if (lst)
	{
		lstnew = f(lst);
		lstnew->next = ft_lstmap(lst->next, f);
		return (lstnew);
	}
	return (NULL);
}
