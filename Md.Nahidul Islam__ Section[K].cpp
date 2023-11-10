#include <iostream>
#include <string>

using namespace std;

string labelRelationalOperator(const string& expression) {
    string result;

    for (size_t i = 0; i < expression.size(); ++i) {
        if (expression[i] == '<') {
            if (i + 1 < expression.size() && (expression[i + 1] == '=' || expression[i + 1] == '≤')) {

                cout << "<= Less than or equal to" << endl;
                ++i;
            } else {

                cout << "< Less than" << endl;
            }
        } else if (expression[i] == '=' && (i + 1 < expression.size() && expression[i + 1] == '=')) {

            cout << "== Equal to" << endl;
            ++i;
        } else if (expression[i] == '>' && (i + 1 < expression.size() && (expression[i + 1] == '=' || expression[i + 1] == '≥'))) {

            cout << ">= Greater than or equal to" << endl;
            ++i;
        } else if (expression[i] == '>') {

            cout << "> Greater than" << endl;
        } else if (expression[i] == '!' && (i + 1 < expression.size() && expression[i + 1] == '=')) {

            cout << "!= Not Equal" << endl;
            ++i;
        }
    }

    return result;
}

int main() {
    string input;

    cout << "Enter a relational expression: ";
    getline(cin, input);

    string result = labelRelationalOperator(input);

    cout <<"  " << result<< endl;

    return 0;
}
