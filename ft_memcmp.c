/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <fkocak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:14:09 by fkocak            #+#    #+#             */
/*   Updated: 2022/12/29 02:14:29 by fkocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_uc;
	const unsigned char	*s2_uc;
	size_t				i;

	i = 0;
	s1_uc = (const unsigned char *)s1;
	s2_uc = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1_uc[i] != s2_uc[i])
			return (s1_uc[i] - s2_uc[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main()
{
	char *s1 = "furkany";
	char *s2 = "furkan";

	printf("%d",ft_memcmp(s1,s2,9));
} */