#include <iostream>

int main() {
  int n, a = 0, d = 0;
  std::string inp;

  std::cin >> n >> inp;
  for (char c : inp) {
    if (c == 'A') 
      a++;
    else
      d++;
  }

  if (a > d)
    std::cout << "Anton\n";
  else if (a == d)
    std::cout << "Friendship\n";
  else
    std::cout << "Danik\n";

  return 0;
}