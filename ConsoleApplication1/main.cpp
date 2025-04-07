#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

struct Color {
    std::string hex;
    std::string rgb;
    std::string rgba;
};

std::string generateHexColor() {
    std::stringstream ss;
    ss << "#" << std::hex << std::setw(2) << std::setfill('0') << (rand() % 256)
        << std::setw(2) << std::setfill('0') << (rand() % 256)
        << std::setw(2) << std::setfill('0') << (rand() % 256);
    return ss.str();
}

std::string generateRgbColor() {
    std::stringstream ss;
    ss << "rgb(" << (rand() % 256) << ", " << (rand() % 256) << ", " << (rand() % 256) << ")";
    return ss.str();
}

std::string generateRgbaColor() {
    std::stringstream ss;
    ss << "rgba(" << (rand() % 256) << ", " << (rand() % 256) << ", " << (rand() % 256) << ", " << std::fixed << std::setprecision(2) << (static_cast<float>(rand()) / RAND_MAX) << ")";
    return ss.str();
}

std::vector<Color> generateColors(int count) {
    std::vector<Color> colors;
    for (int i = 0; i < count; ++i) {
        Color color;
        color.hex = generateHexColor();
        color.rgb = generateRgbColor();
        color.rgba = generateRgbaColor();
        colors.push_back(color);
    }
    return colors;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int colorCount = 200; // Change this value to generate a different number of colors
    std::vector<Color> colors = generateColors(colorCount);

    for (const auto& color : colors) {
        std::cout << "Hex: " << color.hex << ", RGB: " << color.rgb << ", RGBA: " << color.rgba << std::endl;
    }

    return 0;
}