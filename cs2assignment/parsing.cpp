#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cctype>
#include <map>
#include "calculator.h"

using namespace std;

// for tokenization
vector<string> tokens;
int indx_token = 0;

void tokenize(const string& input) {
    tokens.clear(); // clearing the vector from past inputs
    int i = 0;
    while (i < input.length()) {
        if (isspace(input[i])) {
            i++; // if white space skip
        }
        else if (isdigit(input[i])) {
            string number;
            while (i < input.length() && isdigit(input[i])) {
                number += input[i++]; // if it is a number we concatenate to form the whole number and put inside the token called number
            }
            tokens.push_back(number); // push into the tokens list
        }
        // go over input if matching any of the terminal mathematical operator
        else if (strchr("+-*/()", input[i])) {
            tokens.push_back(string(1, input[i++])); // converts the operators to string using the c++ constructor then adds to the tokens list
        }
        else {
            cerr << "Unknown character: " << input[i] << endl;
            exit(1);
        }
    }
    indx_token = 0; // to parse from the start
}

// prints current token
string peek() {
    if (indx_token < tokens.size())
        return tokens[indx_token];
    return "";
}

// return the next token and move forward
string advance() {
    return tokens[indx_token++];
}

bool match(const string& matching) {
    if (peek() == matching) {
        advance();
        return true;
    }
    return false;
}

// parsing
// utilises the calculator.h
// has nesting for precedence :
// An expression is a term->(number,n*/b+-smth). A term is a factor ->(number, "(expr)")
double parseExpr() {
    double val = parseTerm();
    while (true) {
        if (match("+")) {
            val = add(val, parseTerm());
        }
        else if (match("-")) {
            val = sub(val, parseTerm());
        }
        else {
            break;
        }
    }
    return val;
}

// also uses nesting to maintain precedence
double parseTerm() {
    double val = parseFactor();
    while (true) {
        if (match("*")) {
            val = mult(val, parseFactor());
        }
        else if (match("/")) {
            val = division(val, parseFactor());
        }
        else {
            break;
        }
    }
    return val;
}

// handles parenthesis and numbers
double parseFactor() {
    if (match("(")) {
        double val = parseExpr();
        if (!match(")")) {
            cerr << "Expected ')' after expression\n";
            exit(1);
        }
        return val;
    }

    string tok = advance();
    return stod(tok); // convert string to double
}



   
