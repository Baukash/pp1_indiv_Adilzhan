#include <iostream>
#include <cmath>
using namespace std;

bool ifValid(string num){
    for(int i=0; i<num.size(); i++){
        if((int)num[i]%2!=0) return false;
    }

    return true;
}



int main(){
    string num;
    cin>>num;

    if(ifValid(num)) cout<<"Valid";
    else cout<<"Not Valid";
    
}