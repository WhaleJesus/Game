/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 04:18:46 by sklaps            #+#    #+#             */
/*   Updated: 2024/10/20 05:00:57 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/game.h"

void	init_char_name(t_game *game, t_char *c)
{
	char	*name;

t_char	*init_char(t_game *game, int type)
{
	t_char	c;

	c = malloc(sizeof(t_char));
	if (!c)
		exit_program(game, 1);
	c->health = 100;
	c->id = 
	init_char_name(game, &c);
}
