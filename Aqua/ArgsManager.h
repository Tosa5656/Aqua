#pragma once

#include <iostream>
#include <vector>

class ArgsManager
{
public:
	ArgsManager(int argc, char* argv[])
	{
		int i = 1;
		while(i < argc)
		{
			Args.push_back(argv[i]);
			i++;
		}
		ArgsCount = argc - 1;
	}

	std::string GetArg(int Arg)
	{
		if (Arg <= ArgsCount)
			return Args[Arg - 1];
		else
			return "null";
	}

	int GetArgsCount()
	{
		return ArgsCount;
	}
private:
	std::vector<std::string> Args;
	int ArgsCount;
};