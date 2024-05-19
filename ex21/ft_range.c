/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 23:52:18 by maya              #+#    #+#             */
/*   Updated: 2024/05/19 00:28:03 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    if(min >= max)
    return (NULL);
    range = malloc(sizeof(int) * (max - min));
    if(!range)
    return (NULL);
    int i;

    i = 0;
    while(i < max - min)
    {
        range[i] = min + i;
        i++;
    }
    return (range);
}