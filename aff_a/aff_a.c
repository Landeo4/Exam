/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <tpotillion@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:54:26 by tpotillion        #+#    #+#             */
/*   Updated: 2022/07/12 10:09:48 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* git add * pour sélectionné 
git commit -m "message" mettre n file d'attente 
git ls-files vérifier la file d'attente
git push pour poster */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    if(argc != 2)
    {
        write(1,"a",1);
        write(1,"\n",1);
        return 0;
    }
    while(argv[1][i])
    {
        if(argv[1][i] == 'a')
        {
            write(1,"a",1);
            write(1,"\n",1);
            return 0;
        }
        i++;
    }
    write(1,"\n",1);
    return 0;
}