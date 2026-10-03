#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string	oldFileName;
	std::string	newFileName;
	std::string	inFile;
	std::string	s1;
	std::string	s2;
	std::size_t	found;
	std::size_t	pos;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	oldFileName = argv[1];
	newFileName = argv[1];
	newFileName.append(".replace");
	s1 = argv[2];
	if (s1.empty())
	{
		std::cerr << "s1 is empty" << std::endl;
		return (1);
	}
	s2 = argv[3];

	std::ifstream	oldFile(oldFileName.c_str());

	if (!oldFile.is_open())
	{
		std::cerr << "The file does not exist" << std::endl;
		return (1);
	}
	oldFile.peek();
	if (oldFile.bad())
	{
		std::cerr << "Cannot read he file" << std::endl;
		return (1);
	}

	std::ofstream	newFile(newFileName.c_str());

	if (!newFile.is_open())
	{
		std::cerr << "Cannot create the file" << std::endl;
		return (1);
	}
	while (std::getline(oldFile, inFile, '\n'))
	{
		found = 0;
		pos = 0;
		while (found != std::string::npos)
		{
			found = inFile.find(s1, pos);
			if (found != std::string::npos)
			{
				inFile.erase(found, s1.size());
				inFile.insert(found, s2);
				pos = found + s2.size();
			}
		}
		newFile << inFile << std::endl;
	}
}
