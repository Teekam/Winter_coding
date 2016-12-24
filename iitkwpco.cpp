# include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,count,i,farji;
	
	scanf("%d",&t);
	while(t--){
		vector<int> v(10);
		fill(v.begin(), v.end(), -1);
		count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&v[i]);
			
		}
		sort(v.begin(),v.begin()+n);
		
		std::vector<int>::iterator low,it,itt;
		int n1=n;
		while(1){
			if(n1<=0) break;
			it = v.begin();
			low = find(it,it+n1,(*it)*2);
			//printf("%d %d %d %d\n",*it,*low,n1,low-it );
			if(low<it+n1){
				count++;
				v.erase(low);
				v.erase(it);
				n1-=2;
			}
			else{
			//	printf("Hi negative\n");
				v.erase(it);
				n1--;
			}/*
			cout << "The contents of first are:";
  for (itt = v.begin(); itt != v.end(); ++itt)
    cout << ' ' << *itt;
  cout << "\n\n\n";
		}*/
		}
		printf("%d\n",count );
		v.clear();
	}
	



	return 0;
}