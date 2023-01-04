/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <fkocak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:12:43 by fkocak            #+#    #+#             */
/*   Updated: 2022/12/29 02:12:46 by fkocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha(1));
	return (0);
}*/