/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 03:55:02 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/26 03:58:22 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *c)
{
    int i;
    i = 0;
    while(c[i] != '\0')
    {
        ft_putchar(c[i]);
        i++;
    }
}

int main(void)
{
    char a[] = "Hello";
    ft_putstr(a);
}