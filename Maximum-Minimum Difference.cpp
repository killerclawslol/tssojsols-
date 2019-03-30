#include <bits/stdc++.h> 
using namespace std;
int mine[10000][16];
int maxe[10000][16];
void SparseTable(int nums[], int n){
    for(int i = 0; i < n; i++){
        mine[i][0] = nums[i];
        maxe[i][0] = nums[i];
    }
    for(int i = 1; (1 << i) <= n; i++){
        for(int d = 0; (d + (1 << i)-1)< n; d++){
            if(mine[d][i-1] < mine[d+(1<<(i-1))][i-1]){
                mine[d][i] = mine[d][i-1];
            }
            else{
                mine[d][i] = mine[d+(1<<(i-1))][i-1];
            }
            if(maxe[d][i-1] > maxe[d+(1<<(i-1))][i-1]){
                maxe[d][i] = maxe[d][i-1];
            }
            else{
                maxe[d][i] = maxe[d+(1<<(i-1))][i-1];
            }
        }
    }


}
void question(int start, int end){
  int first, second;
    int l = log2(end-start+1);

    if(mine[start][l] <= mine[end-(1<<l)+1][l]){
        first = mine[start][l];
    }
    else{
        first = mine[end-(1<<l)+1][l];
    }
    if(maxe[start][l] >= maxe[end-(1<<l)+1][l]){
        second = maxe[start][l];
    }
    else{
        second = maxe[end-(1<<l)+1][l];
    }
    cout << second - first << endl;
}
int main() {
    int n,q;
    cin >> n >> q;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    SparseTable(nums, n);
    for(int i = q; i--;){
    int start, end;
    cin >> start >> end;
    start--;
    end--;
    question(start,end);
    }


}
