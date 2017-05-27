# include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,y,r,x1,y1,i;
	char ch;
	vector <int> arr1,arr2;
	scanf("%d",&t);
	while(t--){
		arr1.clear();
		arr2.clear();                       //empty the vector of pairs
		scanf("%d",&n);
		for(i=0;i<n;i++){
			

			ch = getchar();
			while(ch != 'p' && ch != 'c'&& ch != 'l'){ 
				ch = getchar();
				//printf("scanned%c\n",ch );	
			}
			//

			if(ch == 'p'){
				scanf("%d %d",&x,&y);
				arr1.push_back(x);
				arr2.push_back(y);
			}
			else if (ch == 'c'){
				scanf("%d %d %d",&x,&y,&r);
				arr1.push_back(x-r);
				arr2.push_back(y-r);
				arr1.push_back(x+r);
				arr2.push_back(y+r);
			}
			else if(ch == 'l'){
				scanf("%d %d %d %d",&x,&y,&x1,&y1);
				
				arr1.push_back(x);
				arr2.push_back(y);
				arr1.push_back(x1);
				arr2.push_back(y1);
			}
			
		}
		sort(arr1.begin(),arr1.end());
		sort(arr2.begin(),arr2.end());

		printf("%d %d %d %d\n",arr1.front(),arr2.front(),arr1.back(),arr2.back());

	}




	return 0;
}