/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:54:50 by marvin            #+#    #+#             */
/*   Updated: 2026/06/23 10:54:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_get_env(char *name, char **envp)
{
    int len;
    int i;

    len = ft_strlen(name);
    i = 0;
    while (envp[i])
    {
        if (ft_strncmp(envp[i], name, len) == 0 && envp[i][len] == '=')
            return (envp[i] + len + 1);
        i++;
    }
    name = ft_strjoin("$", name);
    return (name);
}