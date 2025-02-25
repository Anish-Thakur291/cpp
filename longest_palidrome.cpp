#include<iostream>
#include<unordered_map>
using namespace std;
int longest(string s){
    unordered_map<char,int> map;
    int ans=0;
    int n=s.size();
    for(auto c:s)
        map[c]++;
        bool odd=false;
   
    for(auto s1: map){
        if(s1.second%2==0){
            ans+=s1.second;
        }
        else{
            ans+=(s1.second-1);
            odd=true;
        }
    }
    return ans+odd;
}
int main(){
string s2="aabbab";
cout<<"longest is"<<longest(s2);
}