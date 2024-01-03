#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int num;
  do {
    cin >> num;
    sum += num;
    n--;
  } while (n > 0);
  cout << sum << endl;
  return 0;
}
