#pragma once

namespace POP
{
    namespace utils {
        // Generate an integer hash of a string to be able to use it in a switch statement
        // This is the djb2 algorithm
        // It is a constexpr to not have to compute all constant hashes on runtime
        constexpr unsigned int hash(const char *string, int offset = 0) {
            unsigned int hash = 5381;
            int c = 0;

            while ((c = *string++))
                hash = ((hash << 5) + hash) + c;

            return hash;
        }
    }
}
