#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
  int zero = 0;
  int one = 0;
  int n; cin >> n;
  for(int i = n; i--;){
    int a; cin >> a;
    if(a == 0){
      zero++;
    }
    if(a == 1){
      one++;
    }
  }
  if(one % 2 != 0){
      cout << 1 << endl;
  }else{
      cout << 0 << endl;
  }
}
