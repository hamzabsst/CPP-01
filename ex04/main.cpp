/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:41:47 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/22 14:35:57 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string content;
	std::string line;
	bool		first_line = true;

	if (filename.empty() || s1.empty())
	{
		std::cerr << "Error: filename and s1 must be non-empty" << std::endl;
		return 1;
	}

	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: cannot open input file '" << filename << "'\n";
		return 1;
	}
	while (std::getline(infile, line))
	{
		if (!first_line)
			content += '\n';
		content += line;
		first_line = false;
	}
	infile.close();
	if (content.empty())
	{
		std::cout << "Warning: input file is empty" << std::endl;
	}

	std::string modified = replaceAll(content, s1, s2);
	std::string output = filename + ".replace";

	std::ofstream outfile(output.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: cannot create output file '" << output << "'" << std::endl;
		return 1;
	}

	outfile << modified;
	if (outfile.fail())
	{
		std::cerr << "Error: failed to write to output file" << std::endl;
		outfile.close();
		return 1;
	}

	outfile.close();
	std::cout << "File processed successfully. Output written to: " << output << std::endl;
	return 0;

}
