//https://www.hackerrank.com/challenges/strange-code/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.

int main()
{
    long long int n;
    cin>>n;
    map<long long int,long long int> mp;
    long long int start=3, cycles[100000],ind=0;
    cycles[ind]=3;
    long long int updater;
    //int prec=start;
    for(auto it=1;it<=n;it++){
        if(start>0){
        mp[it]=start;
        start--;
        }else{
            updater=cycles[ind]*2;
            mp[it]=updater;
            ind++;
            cycles[ind]=updater;

            start=updater-1;
        }
    }


    cout <<mp[n];
    return 0;
}
