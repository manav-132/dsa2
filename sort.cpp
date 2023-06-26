#include<vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

  struct triplet{
    int value;
    int freq;
    
};

bool comp(triplet a,triplet b){
    if(a.freq!=b.freq){
        return a.freq>b.freq;
    }
    
        return a.value<b.value;
   
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int fre[101]={0};
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    fre[arr[i]]++;
}
vector<triplet> v;
for(int i=0;i<n;i++){
    triplet t;
    t.value=arr[i];
    t.freq=fre[arr[i]];
    v.push_back(t);
}
sort(v.begin(),v.end(),comp);
for(int i=0;i<v.size();i++){
    cout<<v[i].value<<" ";
}
	cout<<endl;
}
    return 0;
}
