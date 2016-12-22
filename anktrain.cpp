# include <bits/stdc++.h>
using namespace std;
int main(){
	int t,i;
	scanf("%d",&t);
	while(t--){
		int n,n1;
		scanf("%d",&n);
		int array1[9]={7,4,5,6,1,2,3,8};
		char seatno[9][3]={"SU","LB","MB","UB","LB","MB","UB","SL"};
		n1=n%8;
		printf("%d%s\n",array1[n1]+((n-1)/8)*8,seatno[array1[n1]%8] );
			
	}
	return 0;
}