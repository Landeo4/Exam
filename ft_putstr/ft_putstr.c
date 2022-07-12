/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <tpotillion@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:15:40 by tpotillion        #+#    #+#             */
/*   Updated: 2022/07/12 10:29:06 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char * str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

void ft_putstr(char *str)
{
    write(1,str,ft_strlen(str));
}

