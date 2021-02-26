#include <iostream>
#include <cmath>

int main() {
  int e = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      std::cin >> e;
      if (e == 1) {
        std::cout << abs(i - 2) + abs(j - 2) << "\n";
        return 0;
      }
    }
  }

  return 0;
}