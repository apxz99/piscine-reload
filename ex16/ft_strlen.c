/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 04:00:41 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/26 04:23:27 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

#include <stdio.h>
int main(void)
{
    char a[] = "Hello";
    int res = ft_strlen(a);
    printf("%d",res);
}