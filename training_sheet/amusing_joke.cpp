#include <iostream>
#include <string>

using namespace std;

int pile[26] = {0};

int main() {
  string a, b, c;

  cin >> a >> b >> c;

  for (char d : c) 
    pile[d - 'A']++;

  for (char d : a) {
    if (pile[d - 'A'] < 1) {
      cout << "NO\n";
      return 0;
    }
    pile[d - 'A']--;
  }

  for (char d : b) {
    if (pile[d - 'A'] < 1) {
      cout << "NO\n";
      return 0;
    }
    pile[d - 'A']--;
  }

  for (int i = 0; i < 26; i++) {
    if (pile[i] != 0) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";
  
  return 0;
}