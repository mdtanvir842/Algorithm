#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
        vector<int>v={1,2,3,3,5,5,5,6,7};
        int x=3;
        int lo=0;
        int hi=v.size()-1;
        int mid;
        int ans;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(v[mid]==x){
                ans=mid;
                hi=mid-1;
            }
            else if(v[mid]<x){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
}
