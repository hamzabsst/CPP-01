/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:34:33 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/22 14:38:38 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string replaceAll(const std::string &content, const std::string &s1, const std::string &s2)
{
	if(s1.empty())
		return content;

	std::string res;
	size_t		pos = 0;
	size_t		found = 0;

	while ((found = content.find(s1,pos)) != std::string::npos)
	{
		res.append(content, pos, found - pos);
		res.append(s2);
		pos = found + s1.length();
	}
	res.append(content, pos);
	return res;
}
