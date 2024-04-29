#include "utils.h"

void print_suggestions(std::vector<std::pair<int, std::string>> &suggestions, int n)
{
    std::cout << "\n################### TOP " << n <<  " SUGGESTIONS ###################"
         << "\n\n";
    for (auto s : suggestions)
    {
        std::cout << s.second <<  "\n";
        if (!n)
            break;
        n--;
    }
    std::cout << "\n";
}