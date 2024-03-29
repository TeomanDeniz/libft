/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:35:36 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:35:39 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../libft.h" /*
#    int ft_isalpha(int);
#    int ft_isdigit(int);
#*/
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_isalnum(register int character)
{
	return (ft_isdigit(character) || ft_isalpha(character));
}
