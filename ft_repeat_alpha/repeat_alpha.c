/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <tpotillion@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:21:18 by tpotillion        #+#    #+#             */
/*   Updated: 2022/07/11 10:58:17 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
    int i = 0;
    char lettre = 'a';
    if(argc != 2)
    {
        write(1,"\n",1);
        return 0;
    }
    while(argv[1][i])
    {
        if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            lettre = 'a';
            while(lettre <= argv[1][i])
            {
                write(1,&argv[1][i],1);
                lettre++;
            }
        }
        else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            lettre = 'A';
            while(lettre <= argv[1][i])
            {
                write(1,&argv[1][i],1);
                lettre++;
            }
        }
        i++;
    }
    write(1,"\n",1);
}