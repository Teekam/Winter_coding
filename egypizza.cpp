# include <bits/stdc++.h>
using namespace std;
int main(){
	int n,half,quarter,threequarter,i;
	half = quarter = threequarter = 0;
	char str[5];
	char str1[5]="1/4";
	char str2[5]="1/2";
	char str3[5]="3/4";

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);
		if(!strcmp(str,str1)) quarter++;
		else if (!strcmp(str,str2)) half++;
		else if(!strcmp(str,str3)) threequarter++;
	}	
	//printf("%d %d %d\n",quarter,half,threequarter );
	int ans = 1;
	ans = ans + half/2;
	half = half - 2*(half/2);
	ans += threequarter;
	//printf("%dhedgf\n",ans );
	quarter = quarter - threequarter ;
	if(quarter > 0){
		if(half == 1){
			quarter -=2;
			ans+=1;
		}
		else{
	//		printf("gnjdfsfs\n");
			ans+=ceil((quarter*1.0)/4);
		}
	}
	else ans = ans + half;
	
	printf("%d\n",ans );
return 0;
}