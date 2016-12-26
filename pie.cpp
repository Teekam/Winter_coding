# include <bits/stdc++.h>
using namespace std;
#define ER 1e-7

double arr[10005];
int f,n;

bool validSize(double area){
	int sum = 0,i;
	for(i=0;i<n;i++){
		sum+=(int)(arr[i]/area);
	}
	return (sum >=f+1);
}
double binary_search_pie(double lo,double hi){
	double mid=(lo+hi)/2;
	if(fabs(hi-lo)<ER)
		return mid;
	else
		if(validSize(mid)) return binary_search_pie(mid,hi);
		else return binary_search_pie(lo,mid);
}
int main(){
	int t,i,temp;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&f);
		for(i=0;i<n;i++){
			scanf("%d",&temp);
			arr[i] = M_PI*temp*temp;
		}
		sort(arr,arr+n);
		
		
	printf("%.4lf\n", binary_search_pie(0.0,arr[n-1]));	
	}
	return 0;
}