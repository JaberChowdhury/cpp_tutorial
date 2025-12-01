#include <cctype>
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

// -------------------- TOKENIZER --------------------

enum TokenType { NUMBER, PLUS, MINUS, MUL, DIV, LPAREN, RPAREN, END };

struct Token {
    TokenType type;
    double    value;
};

class Lexer {
  private:
    string text;
    int    pos;
    char   current_char;

  public:
    Lexer(string s)
        : text(s)
        , pos(0) {
        current_char = text[pos];
    }

    void advance() {
        pos++;
        current_char = (pos < text.size()) ? text[pos] : '\0';
    }

    void skip_whitespace() {
        while (isspace(current_char))
            advance();
    }

    double number() {
        string result = "";
        while (isdigit(current_char)) {
            result += current_char;
            advance();
        }
        if (current_char == '.') {
            result += '.';
            advance();
            while (isdigit(current_char)) {
                result += current_char;
                advance();
            }
        }
        return stod(result);
    }

    Token get_next_token() {
        while (current_char != '\0') {
            if (isspace(current_char)) {
                skip_whitespace();
                continue;
            }

            if (isdigit(current_char))
                return Token{NUMBER, number()};

            if (current_char == '+') {
                advance();
                return Token{PLUS, 0};
            }
            if (current_char == '-') {
                advance();
                return Token{MINUS, 0};
            }
            if (current_char == '*') {
                advance();
                return Token{MUL, 0};
            }
            if (current_char == '/') {
                advance();
                return Token{DIV, 0};
            }
            if (current_char == '(') {
                advance();
                return Token{LPAREN, 0};
            }
            if (current_char == ')') {
                advance();
                return Token{RPAREN, 0};
            }

            throw runtime_error("Invalid character!");
        }
        return Token{END, 0};
    }
};

// -------------------- PARSER / COMPILER --------------------

class Parser {
  private:
    Lexer lexer;
    Token current_token;

  public:
    Parser(Lexer l)
        : lexer(l) {
        current_token = lexer.get_next_token();
    }

    void eat(TokenType type) {
        if (current_token.type == type)
            current_token = lexer.get_next_token();
        else
            throw runtime_error("Syntax error!");
    }

    // factor : NUMBER | LPAREN expr RPAREN
    double factor() {
        Token t = current_token;

        if (t.type == NUMBER) {
            eat(NUMBER);
            return t.value;
        } else if (t.type == LPAREN) {
            eat(LPAREN);
            double result = expr();
            eat(RPAREN);
            return result;
        }
        throw runtime_error("Invalid factor");
    }

    // term : factor ((MUL | DIV) factor)*
    double term() {
        double result = factor();

        while (current_token.type == MUL || current_token.type == DIV) {
            if (current_token.type == MUL) {
                eat(MUL);
                result *= factor();
            } else if (current_token.type == DIV) {
                eat(DIV);
                result /= factor();
            }
        }
        return result;
    }

    // expr : term ((PLUS | MINUS) term)*
    double expr() {
        double result = term();

        while (current_token.type == PLUS || current_token.type == MINUS) {
            if (current_token.type == PLUS) {
                eat(PLUS);
                result += term();
            } else if (current_token.type == MINUS) {
                eat(MINUS);
                result -= term();
            }
        }
        return result;
    }
};

// -------------------- MAIN COMPILER INTERFACE --------------------

int main() {
    cout << "Enter arithmetic expression: ";
    string input;
    getline(cin, input);

    try {
        Lexer  lexer(input);
        Parser parser(lexer);

        double result = parser.expr();
        cout << "Result = " << result << endl;
    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
