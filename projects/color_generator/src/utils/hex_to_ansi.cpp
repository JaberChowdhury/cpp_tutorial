/// Convert #RRGGBB to ANSI escape code for 24-bit color
#include <iostream>
#include <string>
namespace utils {

std::string hex_to_ansi(const std::string& hex) {
    if (hex.size() != 7 || hex[0] != '#')
        return "";

    int r = std::stoi(hex.substr(1, 2), nullptr, 16);
    int g = std::stoi(hex.substr(3, 2), nullptr, 16);
    int b = std::stoi(hex.substr(5, 2), nullptr, 16);
    std::cout << r << " " << g << " " << b << std::endl;
    return "\033[38;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m";
}

} // namespace utils
