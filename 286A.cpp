#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int t;
	scanf("%d",&t);
	set<int> s;
	for(int i = 0 ; i < t ; i++){
		int x;
		scanf("%d",&x);
		if ( ! s.count(x) ){
			s.insert(x);
		}
	}
	scanf("%d",&t);
	for(int i = 0 ; i < t ; i++){
		int x;
		scanf("%d",&x);
		if ( ! s.count(x) ){
			s.insert(x);
		}
	}
	if( n == s.size() ) printf("I become the guy.\n");
		else  printf("Oh, my keyboard!\n");
	return 0;
}