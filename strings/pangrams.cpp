//https://www.hackerrank.com/challenges/pangrams/problem

#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   string s;
   getline(cin,s);
   //cin >>s;
   int flag=1;
   map<char,int> mp;
   mp.insert(pair<char, int>('a',0));
   mp.insert(pair<char, int>('b',0));
   mp.insert(pair<char, int>('c',0));
   mp.insert(pair<char, int>('d',0));
   mp.insert(pair<char, int>('e',0));
   mp.insert(pair<char, int>('f',0));
   mp.insert(pair<char, int>('g',0));
   mp.insert(pair<char, int>('h',0));
   mp.insert(pair<char, int>('i',0));
   mp.insert(pair<char, int>('j',0));
   mp.insert(pair<char, int>('k',0));
   mp.insert(pair<char, int>('l',0));
   mp.insert(pair<char, int>('m',0));
   mp.insert(pair<char, int>('n',0));
   mp.insert(pair<char, int>('o',0));
   mp.insert(pair<char, int>('p',0));
   mp.insert(pair<char, int>('q',0));
   mp.insert(pair<char, int>('r',0));
   mp.insert(pair<char, int>('s',0));
   mp.insert(pair<char, int>('t',0));
   mp.insert(pair<char, int>('u',0));
   mp.insert(pair<char, int>('v',0));
   mp.insert(pair<char, int>('w',0));
   mp.insert(pair<char, int>('x',0));
   mp.insert(pair<char, int>('y',0));
   mp.insert(pair<char, int>('z',0));
   string ns;
  for(int i=0;i<s.length();i++){
      if(s[i] != ' '){
          ns+=s[i];
      }
  }

   for(int i=0;i<ns.length();i++){
     mp[tolower(ns[i])]++;
    }
   
    for(auto it=mp.begin();it!=mp.end();it++){
        if(!(it->second)){
            flag=0;
        }

        //cout <<it->first<<" "<<it->second<<endl;
    }
    if(flag){
        cout <<"pangram";
    }else{
        cout <<"not pangram";
    }
    
    return 0;
}
