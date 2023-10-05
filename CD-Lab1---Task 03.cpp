#include <iostream>
#include <string>

using namespace std;

bool isNumber(string str) {
  if (str.empty() || str.find_first_not_of(' ') == string::npos) {
    return false;
  }

  if ( (str[0] < '0' || str[0] > '9')) {
    return false;
  }

  for (int i = 1; i < str.length(); i++) {
    if (str[i] < '0' || str[i] > '9') {
      return false;
    }
  }

  return true;
}

int main() {
  string str;

  cout << "ENTER VALUE: ";
  cin >> str;

  if (isNumber(str)) {
    cout << str << " IS A NUMBER." << endl;
  } else {
    cout << str << " IS NOT A NUMBER." << endl;
  }

  return 0;
}
