// https://github.com/DevEmmanuel

#include "bits/stdc++.h"
#include <iostream>
#define mod 1000000007
#define ll long long

using namespace std;

ll return_sum_of_even_fibonacci_terms() {
  int f(1), s(2), t(0);
  ll sum(0);
  while(t <= 4000000) {
    t = f + s;
    if(t % 2 == 0)
      sum += t;
    f = s;
    s = t;
  }
  return sum;
}

int main() {
  cout << return_sum_of_even_fibonacci_terms();
  return 0;
}
