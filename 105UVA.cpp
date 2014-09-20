#include<bits/stdc++.h>
using namespace std;

int high[10005];
int li,ri,i,st,rmax;

int main(){
	memset(high,0,sizeof(high));
	int hi;
	scanf("%d %d %d",&li,&hi,&ri);
	st = li;
	rmax = ri;
	for(int j = li; j < ri ; j++) high[j] = hi;
	while( scanf("%d %d %d",&li,&hi,&ri) != EOF )
	{
		if ( rmax < ri) rmax = ri;
		for( i = li; i < ri ; i++){
			if(hi > high[i]) high[i] = hi;
		}
	}
	printf("%d %d",st,high[st]);
	for(i = st+1; i< rmax+3; i++){
		if (high[i] != high[i-1])
			printf(" %d %d",i,high[i]);
	}
	putchar('\n');
	return 0;
}

/*

1 11 5
2 6 7
3 13 9
12 7 16
14 3 25
19 18 22
23 13 29
24 4 28


*/