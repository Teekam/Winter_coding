# include <stdio.h>
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int t,a,b,c;
	scanf("%d",&t);
	int i=1;
	while(t--){
		scanf("%d/%d",&a,&b);
		c=gcd(a,b);
		printf("Case %d: %d/%d\n",i,a/c,b/c);
		i++;
	}

return 0;
}