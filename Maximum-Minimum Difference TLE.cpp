#include <bits/stdc++.h>
using namespace std;
struct branch{
  int min, max;
};
struct branch minmax(int nums[], int a, int b){
  struct branch minax, mml, mmr; 
  if(a == b){
    minax.max = nums[a];
    minax.min = nums[a];
    return minax;
  } 
  if(b == a+1){
    if(nums[a] > nums[b]){
      minax.max = nums[a];
      minax.min = nums[b];
    }else{
      minax.max = nums[b];
      minax.min = nums[a];
    }
    return minax;
  }
  int mid = (a+b)/2;
  mml = minmax(nums, a, mid);
  mmr = minmax(nums, mid+1, b);

  if(mml.min < mmr.min){
    minax.min = mml.min;
  }
  else{
    minax.min = mmr.min;
  }
  if(mml.max > mmr.max){
    minax.max = mml.max;
  }
  else{
    minax.max = mmr.max;
  }
  return minax;


}
int main() {
  int n,q;
  cin >> n >> q;
  int nums[n];
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }
  while(q--){
    int a, b;
    cin >> a >> b;
    struct branch minax = minmax(nums, a-1, b-1);
    cout << minax.max - minax.min << "\n";
  }
}
