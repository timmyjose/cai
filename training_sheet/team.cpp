#include <iostream>

int main() {
  int n, a, b, c;
  int d = 0;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> a >> b >> c;
    if (a + b + c >= 2)
      d++;
  }

  std::cout << d << "\n";

  return 0;
}