/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ritupon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:32:22 by nlegrand          #+#    #+#             */
/*   Updated: 2023/07/21 00:32:31 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "Ritupon Baishya from Guwahati Assam India #";
	size_t	i = 0;

	while (1)
		std::cout << str << i++ << "\n";
	return (0);
}
