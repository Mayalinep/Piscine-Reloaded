/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 23:01:17 by maya              #+#    #+#             */
/*   Updated: 2024/05/18 23:50:13 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int     i;
    int     length;
    char    *dest;
    
    i = 0;
    while(src[i] != '\0')
        i++;
    length = i;
    dest = (char *) malloc((length + 1) * sizeof(char));
    if(dest == NULL)
    return (NULL);
    
    i = 0;
    while(src[i] !='\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}