/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaderi <mnaderi@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:35:22 by mnaderi           #+#    #+#             */
/*   Updated: 2022/02/04 02:33:29 by mnaderi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	t_ph	ph;

	if (!parse_args(argc, argv, &ph))
		return (printf("Error: Invalid arguments\n"));
	
}
