#include "hexadecimal/hexadecimal.hpp"
#include <vector>

namespace color {

std::vector<std::string> gencolor(unsigned int max) { // <-- match header

    std::vector<std::string> colors;

    for (unsigned int i = 0; i < max; i++) { // <-- use unsigned int
        colors.push_back(hexcolor::hexadecimal());
    }

    return colors;
}

} // namespace color
