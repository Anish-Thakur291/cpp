# include<iostream>
using namespace std;
string count_say(int n){
    if(n==1){
        return "1";

    }
    if(n==2){
        return "11";
    }
    string ans="11";
    for(int i=3;i<=n;i++){
        string temp="";
        ans+="&";
        int count=1;
        for(int j=1;j<ans.size();j++){
            if(ans[j-1]!=ans[j]){
                temp+=to_string(count);
                temp+=ans[j-1];
                count=1;

            }
            else{
                count++;
            }
        }
        ans=temp;
    }
    return ans;
}
int main(){
int n=4;
cout<<"count and say is"<<count_say(n);
}
