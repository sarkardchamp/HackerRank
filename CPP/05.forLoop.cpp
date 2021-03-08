#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    string arr[] = {"one","two","three","four","five","six","seven","eight","nine"};
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(i<=9)cout<<arr[i-1]<<endl;
        else if(i%2==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    return 0;
}
