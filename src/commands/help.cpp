#include "help.hpp"
#include "../utils.hpp"

#include <vector>
#include <iostream>

namespace POP
{
    namespace commands
    {
        bool help(std::vector<char*> opts, char *command) {
            switch (POP::utils::hash(command))
            {
            case POP::utils::hash("help"):
                std::cout << "Usage: pop help <command>" << std::endl;
                std::cout << "Description: The help command" << std::endl;
                std::cout
                    << "Options:\n"
                    << "(none)\n"
                    << std::endl;
                std::cout
                    << "Properties:\n"
                    << "command" << "\t\t" << "The command to get help for" << "\t" << "[optional]"
                    << std::endl;
                break;

            case POP::utils::hash("install"):
                std::cout << "Usage: pop install [package] <options>" << std::endl;
                std::cout << "Description: Install a package" << std::endl;
                std::cout
                    << "Options:\n"
                    << "(none)"
                    << std::endl;
                std::cout
                << "\n"
                << "Properties:\n"
                << "package" << "\t\t" << "The package to install" << "\t" << "[required]\n"
                << "options" << "\t\t" << "Options as seen above" << "\t" << "[optional]"
                << std::endl;
                break;

            case POP::utils::hash("remove"):
                std::cout << "Usage: pop remove [package] <options>" << std::endl;
                std::cout << "Description: Remove/Uninstall a package" << std::endl;
                std::cout
                    << "Options:\n"
                    << "(none)\n"
                    << std::endl;
                std::cout
                    << "\n"
                    << "Properties:\n"
                    << "package" << "\t\t" << "The package to remove" << "\t" << "[required]\n"
                    << "options" << "\t\t" << "Options as seen above" << "\t" << "[optional]"
                    << std::endl;
                break;

            default:
                std::cout << "Usage: pop [command] <options>" << std::endl;
                std::cout
                    << "Commands:\n"
                    << "help" << "\t\t" << "Display this help menu" << "\n"
                    << "install" << "\t\t" << "Install a package" << "\n"
                    << "remove" << "\t\t" << "Remove / Uninstall a package\n"
                    << std::endl;
                std::cout << "Use pop help <command> to get help for a specific command";
                break;
            }

            return true;
        };
    }
}
