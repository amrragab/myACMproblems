#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int val = n * a;
    //cout << val << endl;
    int i = 1;
    while( n >= 0){
        n -= m;
        if (n < 0) n = 0;
        int x = a * n + b * i;
        i++;
    //  cout << x << endl;
        if ( x < val ) val = x;
        if ( n == 0 ) break;
    }
    cout << val << endl;
    return 0;
}