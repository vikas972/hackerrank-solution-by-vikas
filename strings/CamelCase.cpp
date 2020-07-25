//https://www.hackerrank.com/challenges/camelcase/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.

int main()
{ 
    string s;
      int c=1;
    cin >>s;
    for(int i=0;i<s.length();i++){
  
    if((s[i]>='A') && (s[i]<='Z'))
    {
         c++;
    }
}
cout <<c;
  return 0;
}
