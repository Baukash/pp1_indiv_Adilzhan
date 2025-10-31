#include <iostream>
using namespace std;

bool isLucky(string num){
    int sum=0;
    int last;

    for(int i=0; i<num.size(); i++){
        sum+=(int)num[i]-48;
        cout<<sum<<" ";
        if(i==num.size()-1) last=(int)num[i]-48;
    }

    if(sum%last==0) return true;
    else return false;
}

int main(){
    string num;
    cin>>num;

    if(isLucky(num)) cout<<"Yes";
    else cout<<"No";
}