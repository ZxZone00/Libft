/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <fkocak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:20:13 by fkocak            #+#    #+#             */
/*   Updated: 2022/12/29 02:20:16 by fkocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));
    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));
    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
} */