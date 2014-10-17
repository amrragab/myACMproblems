#include<iostream>
#include<map>
#include<cstdio>
#include<cstdlib>
using namespace std;

	int arr[10];
int main(){
	//memset(arr,0,sizeof(arr));
	for( int i = 0 ; i < 6 ; i++) {
		int x;
		scanf("%d",&x);
		arr[x]++;
	}
	int levels = 0;
	int p = 0;
	for ( int i = 0 ; i < 10 ; i++){
		if ( arr[i] != 0 && arr[i] != 4)
			levels++;
		if ( arr[i] >= 4 )
			p++;
	}
	if ( p > 0 && levels == 2) printf("Bear");
	else if ( p > 0) printf("Elephant");
	else printf("Alien");
	return 0;
}