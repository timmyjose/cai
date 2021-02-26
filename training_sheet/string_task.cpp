#include <iostream>
#include <string>

using namespace std;

bool isvowel(const char c) {
  switch (c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    case 'y':
    case 'Y':
      return true;
    default:
      return false;
  }
}

int main() {
  string inp, out = "";

  cin >> inp;
  for (int i = 0; i < inp.size(); i++) {
    if (isvowel(inp[i])) 
      continue;
    else {
      out += ".";
      out += inp[i] >= 'A' && inp[i] <= 'Z' ? inp[i] + 32 : inp[i];
    }
  }

  cout << out << endl;

  return 0;
}