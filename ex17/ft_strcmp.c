/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 04:28:45 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/26 04:44:58 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s1[i] && s2[i])
    {
        if(s1[i] - s2[i] != 0) 
            return(s1[i] - s2[i]);
        else
            i++;
    }
    return (0);
}

#include <stdio.h>

int main(void)
{
    char a[] = "bfb";
    char b[] = "gfg";
    printf("%d",ft_strcmp(a, b));
}