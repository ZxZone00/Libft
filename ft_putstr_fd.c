/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <fkocak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:16:55 by fkocak            #+#    #+#             */
/*   Updated: 2022/12/29 02:16:58 by fkocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/* #include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd= open("text4.txt",O_RDWR | O_CREAT, 777);
	ft_putstr_fd("seken ceylan",fd);
	printf("%d",fd);
} */