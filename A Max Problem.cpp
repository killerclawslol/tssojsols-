#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define WHILE(n) while(n--)
#define pb push_back
#define LL long long
#define ULL unsigned long long
#define LD long double
#define LLI long long int
#define PI acos(-1)
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
        vector <int> nums;
    long long int n;
    cin >> n;
    for(int i = n; i--;){
        long long int j; cin >> j; nums.pb(j);
    }
    long long int a = *max_element(nums.begin(), nums.end());
    long long int b = *min_element(nums.begin(), nums.end());
    if(b*b > a*a){
        cout << b*b << endl;
    }else{
        cout << a*a << endl;
    }


}
