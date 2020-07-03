#include <iostream>

int get_change(int m) {
  //write your code here
  int result = 0;
  //coin of 10s
  result += m / 10;
  m = m%10;
  //coin of 5s
  result += m/5;
  m = m%5;
  //total coins
  m+= result;
  return m;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
