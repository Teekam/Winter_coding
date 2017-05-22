# include <bits/stdc++.h>
using namespace std;
int main (){
	int arr1[105],arr2[105],n,m,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&arr1[i]);
	scanf("%d",&m);
	for(i=0;i<m;i++) scanf("%d",&arr2[i]);
		
	for(i=0;i<n && i<m;i++){	
		if(arr1[i]==arr2[i]) printf("%d ",i+1 );
	}

	return 0;
}