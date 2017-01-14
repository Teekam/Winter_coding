# include <bits/stdc++.h>
using namespace std;

void multi(long long mat1[2][2],long long mat2[2][2],int m){
	long long x,y,z,w;
	x=(mat1[0][0]*mat2[0][0]+mat1[0][1]*mat2[1][0])%m;
	y=(mat1[0][0]*mat2[0][1]+mat1[0][1]*mat2[1][1])%m;
	z=(mat1[1][0]*mat2[0][0]+mat1[1][1]*mat2[1][0])%m;
	w=(mat1[1][0]*mat2[0][1]+mat1[1][1]*mat2[1][1])%m;
	mat1[0][0]=x;
	mat1[0][1]=y;
	mat1[1][0]=z;
	mat1[1][1]=w;
	
}
void foo(long long p[2][2],int k,int m){
	long long M[2][2] = {{1,1},{1,0}};
	if(k==1||k==0) return;
	foo(p,k/2,m);
	multi(p,p,m);
	if(k%2) multi(p,M,m);
	
}
long long fibt(int n,int m){
  long long F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  
  foo(F, n-1,m);
  return ((F[0][0]*4)%m+(F[0][1]*2)%m+(2*m-n-2)%m+m)%m;
}

int main(){
	int t,n,m;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d %d",&n,&m);
		if(n==0||n==1) printf("%d\n",n);
		else printf("%lld\n",fibt(n,m)%m);
	}
return 0;
}
