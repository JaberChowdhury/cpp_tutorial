#include "include/spdlog/spdlog.h"
#include "src/color/gencolor.hpp"
#include "src/utils/hex_to_ansi.hpp"

int main() {
    std::vector<std::string> colors = color::gencolor(100);

    for (const auto& d : colors) {
        spdlog::info("{}{}{}", utils::hex_to_ansi(d), d, "\033[0m");
    }

    return 0;
}
