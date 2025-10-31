#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int arr[1000][1000];
    int x;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>x;
            arr[i][j] = x;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}