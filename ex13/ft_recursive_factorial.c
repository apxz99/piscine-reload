/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 03:19:54 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/26 03:32:10 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    // printf("%d \n",nb);
    if (nb == 1)
        return(1);
    else if(nb > 1)
    {
        nb = nb*(ft_recursive_factorial(nb-1));
        return(nb);
    }
    else
        return(0);
}

// #include <stdio.h>

// int main(void)
// {
//     int nb = ft_recursive_factorial(-1);
//     printf("%d",nb);
// }