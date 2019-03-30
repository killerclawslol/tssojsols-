#include <bits/stdc++.h> 
using namespace std;
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int a; cin >> a;
    int o = 0;
    int d;
    for(int i = 0; i < a; i++){
    cin >> d;
    o = o ^ d;
    }
  cout << o << endl;
}
