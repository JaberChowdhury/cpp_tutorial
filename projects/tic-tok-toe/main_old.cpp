#include <iostream>
#include <vector>
using namespace std;

bool check_horizontal(vector<vector<int>> game_board) {
    int size = game_board.size();
    cout << "size = " << size << endl;
    bool horizontally_matched = true;
    for (int i = 0; i < size; i++) {
        if (game_board[i][0] != -1 && game_board[i][size - 1] != -1) {
            for (int j = 1; j < size; j++) {
                if (game_board[i][j - 1] != game_board[i][j]) {
                    horizontally_matched = false;
                    break;
                }
            }
        }
        if (!horizontally_matched) {
            break;
        }
    }
    cout << "horizontally_matched" << endl;
    return horizontally_matched;
}

bool check_verticle(vector<vector<int>> game_board) {
    int  size               = game_board.size();
    bool vertically_matched = true;
    for (int j = 0; j < size; j++) {
        if (game_board[0][j] != -1 && game_board[size - 1][j]) {
            for (int i = 1; i < size; i++) {
                if (game_board[i - 1][j] != game_board[i][j]) {
                    vertically_matched = false;
                    break;
                }
            }
        }
        if (!vertically_matched) {
            break;
        }
    }
    cout << "vertically_matched" << endl;
    return vertically_matched;
}
bool check_cross(vector<vector<int>> game_board) {
    int  size          = game_board.size();
    bool cross_matched = true;
    if (game_board[0][0] != -1 && game_board[size - 1][size - 1] != -1) {
        for (int i = 1; i < size; i++) {
            for (int j = 1; j < size; j++) {
                if (i == j) {
                    if (game_board[i - 1][j - 1] != game_board[i][j]) {
                        cross_matched = false;
                        break;
                    }
                }
            }
            if (!cross_matched) {
                break;
            }
        }
    }
    cout << "cross_matched" << endl;
    return cross_matched;
}

bool isWin(vector<vector<int>> game_board) {

    // need optimization
    // no need to check other possibiity if we have matched  already
    // check horizontally
    bool horizontally_matched = check_horizontal(game_board);
    // check vertically
    bool vertically_matched = check_verticle(game_board);
    // check cross
    bool cross_matched = check_cross(game_board);

    return horizontally_matched || vertically_matched || cross_matched;
}

int main() {
    size_t size = 4;
    // 4 * 4 matrix
    vector<vector<int>> game_board(size, vector<int>(size));
    game_board = {
        // {1, 1, 1, 1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
    };

    cout << check_horizontal(game_board) << endl;

    return 0;
}
