#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v;
    int n,q,i,j;
    cin>>n>>q;
    for(i=0;i<n;i++){
        vector<int> iv;
        int size,val;
        cin>>size;
        for(j=0;j<size;j++){
            cin>>val;
            iv.push_back(val);
        }
        v.push_back(iv);
    }
    int i_v,j_iv;
    for(i=0;i<q;i++){
        cin>>i_v>>j_iv;
        cout<<v[i_v][j_iv]<<endl;
    }
    

    return 0;
}
