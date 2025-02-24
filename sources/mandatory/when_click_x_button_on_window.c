/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   when_click_x_button_on_window.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:53:55 by tayou             #+#    #+#             */
/*   Updated: 2023/05/03 13:54:04 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	when_click_x_button_on_window(t_data *game)
{
	void	*win;

	win = game->window.ptr;
	mlx_hook(win, EVENT_ON_DESTROY, 0, &finish_game_after_free, game);
}
