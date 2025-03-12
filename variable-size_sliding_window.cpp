#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int n,mx;
    mx=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    deque<int>dq;
    for(int i=0;i<n;i++){
        if(mp[v[i]]==1){
            while(1){
                int p=dq.front();
                dq.pop_front();
                mp[p]=0;
                if(v[i]==p){
                    break;
                }
            }
        }
        dq.push_back(v[i]);
        mp[v[i]]=1;
        mx=max(mx,(int)dq.size());

    }
    cout<<mx<<endl;


}
