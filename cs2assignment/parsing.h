
#include <string>
#include <vector>

using namespace std;

// Global variables
extern vector<string> tokens;
extern int indx_token;

// Tokenization
void tokenize(const string& input);
string peek();
string advance();
bool match(const string& matching);

// Parsing
double parseExpr();
double parseTerm();
double parseFactor();



