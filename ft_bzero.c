/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <fkocak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:10:10 by fkocak            #+#    #+#             */
/*   Updated: 2022/12/29 02:12:21 by fkocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int i;
// 	char str[] = "furkankocak";
// 	i = ft_strlen(str);
// 	ft_bzero(str, 4);
// 	write(1,&str,i);
// 	return 0;
// }