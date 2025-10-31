#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int arr[1000];

    string s;
    getline(cin, s);
    stringstream ss(s);
    int i=0;

    int num;
    while(ss>>num) arr[i++]=num;


    for(int j=0; j<i; j++){
        cout<<arr[j]<<" ";
    }
}