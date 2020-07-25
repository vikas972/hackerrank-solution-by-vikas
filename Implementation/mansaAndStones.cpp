//https://www.hackerrank.com/challenges/manasa-and-stones/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the stones function below.
int main(){
 int T;
 cin >>T;
 while(T--){

     int n,a,b;
     cin >>n>>a>>b;

set<int> ans;
int su=0;
if(a<b){
ans.insert(a*(n-1));
su=a*(n-1);
}
else{
    ans.insert(b*(n-1));
    su=b*(n-1);
}

for(int i=1;i<n-1;i++){
     su+=abs(a-b);
    ans.insert(su);
}
if(a>b){
ans.insert(a*(n-1));}
else{
    ans.insert(b*(n-1));
}

for(auto it=ans.begin();it!=ans.end();it++){
    cout <<*it<<" ";
}
cout <<endl;

 }


    return 0;
}
