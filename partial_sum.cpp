#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mx=2e5+123;
ll prefSum[mx];
int main()
{
    optimize();
    int n,q;
    cin>>n>>q;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        prefSum[i]=prefSum[i-1]+arr[i];
    }
    while(q--){
        pair<int,int>p;
        cin>>p.first>>p.second;
        cout<<prefSum[p.second]-prefSum[p.first-1]<<endl;
    }

}
