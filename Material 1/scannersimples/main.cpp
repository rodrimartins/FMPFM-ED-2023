#include <iostream>
#include <string>
using namespace std;

// Definindo a classe Token para representar cada token encontrado
class Token {
public:
    enum TokenType { NUMBER, PLUS, MINUS, MUL, DIV, LPAREN, RPAREN, EOL };
    TokenType type;
    string value;
};

// Função para analisar a entrada e produzir tokens
Token getNextToken(string input) {
    static int currentPos = 0;
    static char currentChar = input[0];

    while (isspace(currentChar)) {
        currentChar = input[++currentPos];
    }

    if (isdigit(currentChar)) {
        string value = "";
        while (isdigit(currentChar)) {
            value += currentChar;
            currentChar = input[++currentPos];
        }
        return Token{Token::NUMBER, value};
    }

    if (currentChar == '+') {
        currentChar = input[++currentPos];
        return Token{Token::PLUS, "+"};
    }

    if (currentChar == '-') {
        currentChar = input[++currentPos];
        return Token{Token::MINUS, "-"};
    }

    if (currentChar == '*') {
        currentChar = input[++currentPos];
        return Token{Token::MUL, "*"};
    }

    if (currentChar == '/') {
        currentChar = input[++currentPos];
        return Token{Token::DIV, "/"};
    }

    if (currentChar == '(') {
        currentChar = input[++currentPos];
        return Token{Token::LPAREN, "("};
    }

    if (currentChar == ')') {
        currentChar = input[++currentPos];
        return Token{Token::RPAREN, ")"};
    }

    if (currentChar == '\0') {
        return Token{Token::EOL, ""};
    }

    cerr << "Erro: Caractere inesperado '" << currentChar << "'" << endl;
}

int main() {
    string input = "3 + 4 * 2 / ( 1 - 5 )";
    //10 / 5 + 3 * 2

    Token token;
    do {
        token = getNextToken(input);
        cout << "Token: " << token.value << endl;
    } while (token.type != Token::EOL);

    return 0;
}


