# include <bits/stdc++.h>
using namespace std;
int main (){
	int t,type,farji;
	stack <int> st;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&type);
		if(type==1){
			scanf("%d",&farji);
			st.push(farji);
		}
		if(type==2){
			if(!st.empty())
				st.pop();
		}
		if(type == 3){
			if(!st.empty())
				printf("%d\n",st.top());
			else 
				printf("Empty!\n");
		}
	}

	return 0;
}