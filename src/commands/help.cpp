#include "help.hpp"

#include <vector>
#include <iostream>

namespace POP
{
    namespace commands
    {
        bool help(std::vector<char*> opts, char *command) {
            std::cout << "Usage: pop [command] <options>" << std::endl;
            std::cout
                << "Commands:\n"
                << "help" << "\t\t" << "Display this help menu" << "\n"
                << "install" << "\t\t" << "Install a package" << "\n"
                << "remove" << "\t\t" << "Remove / Uninstall a package"
                << std::endl;

            return true;
        };
    }
}
