//https://www.hackerrank.com/challenges/game-of-thrones/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.


int main()
{
    string s;
    cin >>s;

//bool flag=false;

map<char,int> mp;
int odd=0,even=0;


for(int i=0;i<s.length();i++){
    mp[s[i]]++;
}
for(auto i=mp.begin();i!=mp.end();i++){
    if((i->second%2)==0){
   even++;
 }
 else{
     odd++;
 }

}

cout <<odd<<" "<<even;

if( !(odd>1)){
    cout <<"YES";
}else{
    cout <<"NO";
}

    return 0;
}
