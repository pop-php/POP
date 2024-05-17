#include <iostream>
#include "commandHandler.h"

int main(int argc, char* argv[]){
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " [command] <options>" << "\n" << "Use the command `help` to get a list of all commands" << std::endl;
        return -1;
    }

    bool handled = POP::commandHandler::handle(argv);
    if (!handled){
        std::cout << "Failed to handle command!" << std::endl;
        return 1;
    }

    return 0;
}
