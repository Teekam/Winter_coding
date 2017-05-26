# include <bits/stdc++.h>
using namespace std;
int main (){
int a,b,i,sum=0;
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++) 
			sum+=i*i;
		printf("%d\n",sum );
	return 0;
}