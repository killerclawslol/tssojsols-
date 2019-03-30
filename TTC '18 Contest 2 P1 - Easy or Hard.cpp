#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std;
#define endl '\n';
#define WHILE(n) while(n--)
#define pb push_back
#define LL long long
#define ULL unsigned long long
#define LD long double
#define LLI long long int
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, d, dcount = 0, ecount = 0;
    cin >> n;
    WHILE(n){
        cin >> d;
        if(d == 1){
            dcount++;
        }else{
            ecount++;
        }
    }
    if(dcount >= 1){
        cout << "Too hard!" << endl;
    }else{
        cout << "Perfectly easy" << endl;
    }
        



}
