//https://www.hackerrank.com/challenges/making-anagrams/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {

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


   map<char,int> mp2(mp);
   int sum=0;

   for(int i=0;i<s1.length();i++){
       mp[s1[i]]++;
   }
      for(int i=0;i<s2.length();i++){
       mp2[s2[i]]++;
   }
       for(auto i=mp.begin();i!=mp.end();i++){

         sum+=  abs(i->second - mp2[i->first]);
   }


   return sum;




}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
