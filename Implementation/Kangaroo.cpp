//https://www.hackerrank.com/challenges/kangaroo/problem

#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1,v1,x2,v2;
    cin >>x1>>v1>>x2>>v2;
    if((x2>x1 && v2>v1) ||(x1>x2 && v1>v2|| v1==v2)){
        cout <<"NO";
    }else{
        if(x2>x1 && v1>v2){
            while(x1<x2 && x1!=x2){
              x1+=v1;
              x2+=v2;
            }
            if(x1==x2){
                cout <<"YES";
            }else{
                cout <<"NO";
            }

        }
        else{
        cout <<"YES";}
    }

    return 0;
}
