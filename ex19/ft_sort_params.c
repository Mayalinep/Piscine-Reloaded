/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:30:41 by maya              #+#    #+#             */
/*   Updated: 2024/05/18 22:29:00 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Fonction pour afficher un caractère
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

// Fonction pour afficher une chaîne de caractères
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

// Fonction pour comparer deux chaînes de caractères
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i] && s2[i] != '\0')
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

// Fonction pour trier les arguments en utilisant le tri à bulles
void ft_sort_params(int argc, char **argv)
{
    int i = 1;
    int j;
    char *temp;

    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        ft_sort_params(argc, argv);

        int i = 1;
        while (i < argc)
        {
            ft_putstr(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    return 0;
}
