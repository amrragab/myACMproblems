#include<bits/stdc++.h>
using namespace std;

int arr[1000001];
int main(){
	int n;
	scanf("%d",&n);
	int i = 1;
	int j = 1;
	while(n--){
		int a;
		scanf("%d",&a);
		while(a--){
			arr[i] = j;
			i++;
		}
		j++;
	}
	int p,q;
	scanf("%d",&p);
	while(p--){
		scanf("%d",&q);
		printf("%d\n",arr[q]);
	}
	return 0;
}