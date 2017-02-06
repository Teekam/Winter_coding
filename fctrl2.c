# include <stdio.h>
# include <string.h>
int len,arr[200];
void multiply(int n){
	int i;
	if(n==100){
		for(i=len;i>=0;i--) arr[i+2]=arr[i];
		arr[1]=arr[0]=0;
		len+=2;
	}
	else{

		int digones=n%10, digtens=0;
		int arr1[200];
		for(i=0;i<200;i++) arr1[i]=arr[i];
		
		int carry=0,temp;
		for(i=0;i<len;i++){
			temp=arr[i]*digones+carry;
			arr1[i]=temp%10;
			carry=(temp/10)%10;
			//printf("carry=%d\n",carry );
		}
		if(carry!=0){
			arr1[len] = carry;
			len++;
		}
		if(n/10){
			carry=0;
			//len++;
			digtens=(n/10)%10;
			
			for(i=1;i<=len;i++){
				temp=arr[i-1]*digtens+carry+arr1[i];
				arr1[i]=temp%10;
				carry=(temp/10)%10;
			//	printf("temp,carry %d %d\n",temp,carry );
			}
			len++;
			if(carry!=0){
				arr1[len] = carry;
				len++;
			}
		}
		for(i=0;i<len;i++) arr[i]=arr1[i];
		//printf(" n=%d  len=%d\n",n,len );
	}
}
int main(){
	int t,n,i,j;
	scanf("%d",&t);
	while(t--){
		len=1;
		for(i=0;i<200;i++) arr[i] = 0;
		arr[0]=1;
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			multiply(i);
		}
		int flag=0;
			for(i=len-1;i>=0;i--){
				if(arr[i]!=0) flag=1;
			if(flag)printf("%d",arr[i] );
		}

			printf("\n");
	}

	return 0;
}