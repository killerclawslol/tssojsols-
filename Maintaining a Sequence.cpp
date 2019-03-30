#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, j;
  cin >> n >> j;
  int nums[n];
  for(int i = 0; i < n; i++){
      cin >> nums[i];
  }
  for(int i = j; i--;){
      string uselessfuck;
      int total = 0;
      int s, c;
      cin >> uselessfuck >> s >> c;
      s--;
      for(int i = s; i < s+c; i++){
         total += nums[i];
      }
      cout << total << "\n";
  }
}
