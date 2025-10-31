#include <iostream>
#include <algorithm>
using namespace std;

void decToHex(int num){
    string s;

    while(num!=0){
        
        if(num%16<=9){
            s.push_back(num%16+48);
        }
        else if(num%16==10){
            s.push_back('A');
        }
        else if(num%16==11){
            s.push_back('B');
        }
        else if(num%16==12){
            s.push_back('C');
        }
        else if(num%16==13){
            s.push_back('D');
        }
        else if(num%16==14){
            s.push_back('E');
        }
        else if(num%16==15){
            s.push_back('F');
        }
        num/=16;

    }

    reverse(s.begin(), s.end());
    cout<<s;
}

int main(){
    int num;
    cin>>num;
    decToHex(num);
}