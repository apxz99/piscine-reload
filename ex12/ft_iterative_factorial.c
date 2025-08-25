/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:08:48 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/25 19:18:01 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int res;
    res = 1;
    while(nb > 1)
    {
        res = res*nb;
        nb--;
    }
    return res;
}

#include <stdio.h>
int main(void)
{
    int nb = ft_iterative_factorial(0);
    printf("%d",nb);
}