/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <fkocak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:14:50 by fkocak            #+#    #+#             */
/*   Updated: 2022/12/29 02:14:52 by fkocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
	{
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	return (dst);
}

/* #include <stdio.h>

int main()
{
	char str[] = "1234";

	printf("%s",(char *)ft_memmove(str+2,str,5));
} */
