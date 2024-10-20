/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 03:52:05 by sklaps            #+#    #+#             */
/*   Updated: 2024/10/20 04:07:26 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_weapon
{
	char	*name;
	float	*dmg;
}	t_weapon;

typedef struct s_item
{
	char	*name;
	char	*type;
}

typedef struct s_char
{
	char		*name;
	float		health;
	s_item		*inventory;
	s_weapon	active_weapon;
}

#endif
