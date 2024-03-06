/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:31:40 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:31:55 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../libft.h" /*
#typedef t_list;
#*/
/* **************************** [^] INCLUDES [^] **************************** */

t_list
	*ft_lstlast(t_list *list)
{
	if (!list)
		return (0);
	while (list->next != NULL)
		list = list->next;
	return (list);
}