#include <iostream>
#include <fstream>
#include <string>

int replace( std::string buff, char **av )
{
	std::ofstream	newFile;
	int	size;
	int pos;
	
	size = buff.length();
	newFile.open((std::string)av[1] + ".replace");
	if (newFile.fail())
	{
		std::cout << "Failed to open a new file" << std::endl;
		return (1);
	}
	for (int i = 0; i < size; i++)
	{
		pos = buff.find(av[2], i);
		if (pos == i && pos != -1)
		{
			newFile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			newFile << buff[i];
	}
	return (0);
}

int main( int ac, char **av )
{
	std::ifstream file;
	std::string buff;
	char c;

	if (ac != 4)
	{
		std::cout << "Incorrect number of arguments:\n" 
				<< "[ ./sed <filename> <string to replace> <replacement string> ]" << std::endl;
		return (0);
	}
	file.open(av[1]);
	if (file.fail())
	{
		std::cout << "Error opening file." << std::endl;
		return (0);
	}
	while (!file.eof() && file >> std::noskipws >> c)
		buff += c;
	file.close();
	return (replace(buff, av));
}