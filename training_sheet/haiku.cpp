#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;

  for (int i = 0; i < 3; i++) {
    getline(cin, s);
    int d = 0;
    for (char c : s) {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        d++;
    }

    if ((i == 0 && d != 5) || (i == 1 && d != 7) || (i == 2 && d != 5)){
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";

  return 0;
}