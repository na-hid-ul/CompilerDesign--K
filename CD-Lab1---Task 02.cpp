#include <iostream>
#include <regex>

using namespace std;

bool isValidVariableName(string name) {
  regex regex("[a-zA-Z_][a-zA-Z0-9_]*");

  return regex_match(name, regex);
}

bool isUsableVariable(string name) {
  if (!isValidVariableName(name)) {
    return false;
  }


  return true;
}

int main() {
  string variableName;
  cout << "ENTER A VARIABLE: ";
  cin >> variableName;

  if (isUsableVariable(variableName)) {
    cout << variableName << " IS A VALID VARIABLE." << endl;
  } else {
    cout << variableName << " IS NOT A VALID VARIABLE." << endl;
  }

  return 0;
}
