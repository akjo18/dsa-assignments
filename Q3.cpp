#include <bits/stdc++.h>
using namespace std;







int main() {
   int t;
   cin >> t;


   while(t--){
   	int n;
   	cin >> n;
   	int arr[n+1];

   	for(int i=1;i<=n;i++){
   		cin >> arr[i];
   	}

   	for(int i=1;i<=n;i++){
   		arr[i] = arr[i] - 2*i;
   	}

   	int count=0;
   	unordered_map<int,int> map;
   	
   	for(int i=1;i<=n;i++){
   		map[arr[i]]++;
   	}
   	
   	for(auto it=map.begin();it!=map.end();it++){
   		if((*it).second>1){
   			int a = (*it).second;
   			count += ((a)*(a-1))/2;
   		}
   	}
   	cout << count << endl;
   }
}