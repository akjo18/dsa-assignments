#include <bits/stdc++.h>
using namespace std;







int main() {
   int n;
   cin >> n;

   map<int,string> map;

   while(n--){
   	int a;
   	string s;
   	cin >> s >> a;

   	map.insert({a,s});
   }

   auto it = map.end();
   it--;
   cout << (*it).second;
}