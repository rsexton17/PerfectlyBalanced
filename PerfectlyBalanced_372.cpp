#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool Balanced(string s) { //with algorithm
  if (s == "") return true;
  int theCount = count(s.begin(), s.end(), s[0]);
  for (int i = 1; i < s.size(); i++) {
    if (theCount != count(s.begin(), s.end(), s[i])) { return false; }
  }
  return true;
}

bool Balanced2(string s) { //no algorithm
  if (s == "") return true;
  int theCount = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[0] == s[i]) theCount++;
  }
  int j = 1;
  while (j < s.size()) {
    int temp = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[j] == s[i]) temp++;
    }
    if (temp != theCount) return false;
    j++;
  }
  return true;
}

int main() {
  while (true) {
    cout << "Enter String: ";
    string input = "";
    cin >> input;
    if (Balanced2(input)) cout << "Balanced\n";
    else cout << "Not Balanced\n";
  }
  return 0;
}
