#include <vector>
#include <array>
#include <iostream>

#include "commandHandler.h"
#include "utils.h"

namespace POP {
    using namespace utils;

    namespace commandHandler
    {
        validityType validate(const char *command) {
        switch (hash(command))
        {
            case hash("help"):
                return validityType::VALID;
                
            case hash("remove"):
            case hash("install"):
                return validityType::NOT_IMPL;

            default:
                return validityType::INVALID;
                break;
            }
        }

        bool handle(char *args[]) {
            char *command = args[1];
            std::vector<char *> options;

            for (int i = 2; args[i] != nullptr; ++i)
                options.push_back(args[i]);

            validityType valid = validate(command);

            if (valid == validityType::NOT_IMPL) {
                std::cout << "This command isn't implemented yet!" << std::endl;
            } else if (valid == validityType::INVALID) {
                std::cout << "That isn't a valid command!" << std::endl;
            } else if (valid == validityType::VALID) {
                // TODO: actually handle the command
                return true;
            }

            return false;
        }
    }
}
