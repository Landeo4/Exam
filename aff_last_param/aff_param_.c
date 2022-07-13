/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_param_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <tpotillion@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:41:56 by tpotillion        #+#    #+#             */
/*   Updated: 2022/07/13 10:41:57 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    if(argc < 1)
    {
        write(1,"\n",1);
        return 0;
    }
    while(argv[argc - 1][i])
    {
        write(1,&argv[argc - 1][i],1);
        i++;
    }
}