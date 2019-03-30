#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
  int n; cin >> n;
  for(int i = n; i--;){
    long long int a,b;
    cin >> a >> b;
    if(a < b){
    cout << a - b << "\n";
    }if(b <= a){
      cout << b - a << "\n";
    }
  }
}
