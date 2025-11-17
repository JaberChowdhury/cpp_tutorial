#include "../../random/random.hpp"
#include <string>
using namespace std;

namespace hexcolor {

string hexadecimal() {
    string result             = "#";
    string hexadecimal_number = "0123456789abcdef";

    for (int i = 0; i < 6; i++) {
        int random_index = random_func::random(0, 15);
        result.push_back(hexadecimal_number[random_index]);
    }

    return result;
}

} // namespace hexcolor
