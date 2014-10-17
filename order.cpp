#include<iostream>
#include<sstream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<map>
#include<bitset>
#include<list>
#include<set>
#include<queue>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

#define INF 0xffffff
#define LL  long long
#define maxx(a, b) ((a > b)? a: b)
#define minn(a, b) ((a < b)? a: b)
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for ( int tt = 1 ; tt  <= t ; tt++){
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        do 
        {
            cout << s << endl;
        }while( next_permutation(s.begin(),s.end() ));
    }
    return 0;
}