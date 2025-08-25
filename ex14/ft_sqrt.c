/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 03:33:47 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/26 03:53:48 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int res;
    res = 2;
    while ((res*res) < nb)
        res++;
    if (res*res == nb)
        return (res);
    else
        return (0);
}

#include <stdio.h>
int main(void)
{
    int res = ft_sqrt(2147483647);
    printf("%d",res);
}