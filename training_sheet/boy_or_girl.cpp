#include <iostream>
#include <string>

using namespace std;

int main() {
  string inp;
  int hash[26];

  for (int i = 0; i < 26; i++)
    hash[i] = 0;

  cin >> inp;
  for (const char c : inp)
    hash[c - 'a']++;

  int s = 0;
  for (int i = 0; i < 26; i++) 
    s += hash[i] >= 1 ? 1 : 0;

  cout << (s % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

  return 0;
}