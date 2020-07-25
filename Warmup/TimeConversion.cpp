//https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   string s;
   cin >>s;
   string dn;
   string hr,mn,ss;
   int hri;
   int l;
   l=s.length();
   dn=s[l-2];
   dn+=s[l-1];
   hr=s[0];
   hr+=s[1];
   mn=s[3];
   mn+=s[4];
   ss=s[6];
   ss+=s[7];
   hri=stoi(hr);
   
   

   
   if(dn=="AM"){
       if(hr=="12"){
            cout <<"00"<<":"<<mn<<":"<<ss;}
            else{
                 cout <<hr<<":"<<mn<<":"<<ss;
            }
       }else{
          
           if(hr=="12"){
               cout <<hr<<":"<<mn<<":"<<ss;
           }else{
                hri+=12;
 cout <<hri<<":"<<mn<<":"<<ss;
           }
           
       }
   

  // cout <<dn;


    return 0;
}
