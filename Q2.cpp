#include <bits/stdc++.h>
using namespace std;








int main() {
   int t;
   cin >> t;

   while(t--){
   	int n;
   	cin >> n;
   	int arr[n];
   	priority_queue<int, vector<int>, greater<int>> pq;             // syntax of pq to make it a min heap
   	int res = 0;

   	for(int i=0;i<n;i++){
   		cin >> arr[i];
   		pq.push(arr[i]);
   	}

   	while(pq.size()>1){
   		int a,b;
   		a = pq.top();
   		pq.pop();
   		b = pq.top();
   		pq.pop();
   		res += a+b;
   		pq.push(a+b);
   	}
   	cout << res << endl;
   }
}