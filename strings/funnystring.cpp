//https://www.hackerrank.com/challenges/funny-string/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.

int main()
{
    int q;
    cin >>q;
    while(q--){
    string s;
    int c=0;
   // getline(cin, s);
    cin >>s;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;

    for(int i=0;i<s.length();i++){
          v.push_back(int(s[i]));
    }

 for(int i=0;i<v.size()-1;i++){
     v1.push_back(abs(v[i]-v[i+1]));
          //cout <<v[i]<<" ";
    }

     for(int i=v.size()-1;i>=0;i--){
     v2.push_back(abs(v[i-1]-v[i]));
          //cout <<v[i]<<" ";
    }
    for(int i=0;i<v1.size();i++){

       //cout <<v1[i]<<" first ";
        //cout <<v2[i]<<" second ";

        if(v1[i]==v2[i]){
            c++;
        }
    }


   // cout <<c;
    if(c==(s.length()-1)){
        cout <<"Funny"<<endl;
    }else{
        cout <<"Not Funny"<<endl;
    }
       
    }
    return 0;
}
