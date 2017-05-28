# include <bits/stdc++.h>
using namespace std;
int main (){
	int t,n,j,i;
	scanf("%d",&t);

	int num1[101]={},num2[101]={};
	char str[7],string1[65];
	while(t--){
		for(i=0;i<101;i++) num1[i] = num2[i] =0;
		scanf("%d",&n);
		getchar();
		for(j=0;j<n;j++){
			scanf("%s",str);
			for(i=0;i<6;i++){
				num1[j]+=pow(2,i)*((str[i] >> i) & 1);
				num2[j]+=pow(2,i)*((str[i] >> (i+3)%6) & 1);
			}

		}
		scanf("%s",string1);
		for(j=0;j<n;j++)
		printf("%c%c",string1[num1[j]],string1[num2[j]] );
		printf("\n");
	}
	return 0;
}