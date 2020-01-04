// https://github.com/DevEmmanuel

#include "bits/stdc++.h"
#include <iostream>
#define mod 1000000007
#define ll long long

using namespace std;

int multiplesof3nd5(ll num) {
  ll sum(0);
  for(ll i = 1; i < num; i++) {
    if((i % 3 == 0) || (i % 5 == 0))
      sum += i;
  }
  return sum;
}

int main() {
  ll num;
  cin>>num;
  cout << multiplesof3nd5(num);
  return 0;
}
