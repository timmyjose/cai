#include <iostream>

int main() {
  int n, h, d, c = 0;
  std::cin >> n >> h;

  for (int i = 0; i < n; i++) {
    std::cin >> d;
    c += d > h ? 2 : 1;
  }

  std::cout << c << "\n";

  return 0;
}