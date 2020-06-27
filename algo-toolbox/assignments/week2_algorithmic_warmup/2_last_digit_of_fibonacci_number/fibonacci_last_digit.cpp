#include <iostream>
#include <vector>
using std::vector;

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit(int n) {
  vector<int> result(n+1);
  result[0] = 0;
  result[1] = 1;
  for(int i=2; i< result.size();i++) {
	  result[i] = (result[i - 1] + result[i - 2]) % 10;
  }
  return result[n];
}

int main() {
    int n;
    std::cin >> n;
    //int c = get_fibonacci_last_digit_naive(n);
    int c = get_fibonacci_last_digit(n);
    //std::cout << "Naive/Slower Algot output: "<< c << '\n';
    std::cout << c << '\n';
    }
