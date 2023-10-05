#include <iostream>
using namespace std;

int main() {
    char input;
  cout << "ENTER AN OPERATOR : ";
  cin >> input;

  if (input == '+' || input == '-' || input == '%' || input == '*' || input == '/') {
    cout << input << " IS AN ARITHMATIC OPERATOR" << endl;
  } else {
    cout << input << " IS NOT AN ARITHMATIC OPERATOR." << endl;
  }

  string equation;
  cout << "ENTER AN EQUATION : ";
  cin >> equation;

  cout << "THE ARITHMATIC OPERATOR USED IN THE EQUATION :- ";
  for (int i = 0; i < equation.length(); i++) {
    if (equation[i] == '+' || equation[i] == '-' || equation[i] == '%' || equation[i] == '*' || equation[i] == '/') {
      cout << equation[i] << " ";
    }
  }
  cout << endl;

  return 0;
}
