#pragma once
#include <iostream>
#include <fstream>
#include <sstream>

std::string ReadShaderSource(std::string filepath)
{
	std::fstream file;
	file.open(filepath, std::ios::in);
	if (!file.good())
	{
		std::cout << "Error" << " " << filepath << "\n";
	}
	else
	{
		std::cout << filepath << " " << "loaded successfull" << "\n";
	}
	std::stringstream row;
	row << file.rdbuf();
	return row.str();
}