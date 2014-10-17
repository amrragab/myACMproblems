#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int val;
	if ( n % 2 == 0 ) {val = n /2;}
	else{
		val = (n-1)/2;
	}
	for(int i = val ; i <= n ; i++){
		if ( i % m == 0 ){
			printf("%d\n",i);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}