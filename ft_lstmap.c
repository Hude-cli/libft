/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:18:41 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/20 13:58:02 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*lstnew;

	if (lst == NULL || f == NULL)
		return (NULL);
	start = NULL;
	while (lst)
	{
		lstnew = ft_lstnew(f(lst->content));
		if (lstnew == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, lstnew);
		lst = lst->next;
	}
	return (start);
}
