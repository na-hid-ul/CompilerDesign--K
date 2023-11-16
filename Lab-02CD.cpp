#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

  ifstream MyReadFile("CD-LAB02.txt");

  string line;

  while (getline(MyReadFile, line)) {

    string operators = " ";
    string identifiers = "";
    for (int i = 0; i < line.length(); i++) {
      if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == '%'
         || line[i] == '=') {
        operators += line[i];
        if (i != line.length() - 1) {
          operators += ',';
        }
      } else if (isalpha(line[i]) || isdigit(line[i])) {
        identifiers += line[i];
        if (i != line.length() - 1 && !isalpha(line[i + 1]) && !isdigit(line[i + 1])) {
          identifiers += ',';
        }
      }
    }

    if (!operators.empty()) {
      cout << "THE LINE IS \"" << line << "\"\nOPERATORS OF THAT LINE ARE :" << operators << endl;
    }

    if (!identifiers.empty()) {
      cout << "IDENTIFIERS OF THAT LINE ARE :" << identifiers << endl << endl;
    }
  }

  MyReadFile.close();

  return 0;
}
