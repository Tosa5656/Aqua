#include <iostream>
#include "ArgsManager.h"

int main(int argc, char* argv[])
{
    ArgsManager argsManager(argc, argv);
    std::cout << argsManager.GetArg(1) << std::endl;
}