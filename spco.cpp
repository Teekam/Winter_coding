# include <bits/stdc++.h>
using namespace std;
int prime(long long int num){
	int i;
	if(num == 1) return 0;
	if(num==2) return 1;
	else {
		for(i=2;i<=sqrt(num);i++){
			if(num%i == 0) return 0;
		}
		return 1;
	}
}
int bitsum(long long int num){
	long long int sum,num1;
	sum = 0;
	num1 = num;
	while(num1!=0){
		sum += num1%2;
		num1/=2;
	}
	if(prime(sum)==1) return 1;
	else return 0;

}
int main(){
	unsigned long long int i,t,a,b,count,arr[1000000],high;
	int k;
		
		k=0;
		high=pow(10,19);
		printf("%llu\n",high );
		for(i=1;i<=high;i++){
			if(bitsum(i)){                        //high par print nahi aa raha hain
				arr[k++]=i;
				//printf("%lld\n",i );
			}
		}
		
		/*while(t--){
		scanf("%lld %lld",&a,&b);
		while(1){
			count = 0;
			
		}*/
	

	return 0;
}