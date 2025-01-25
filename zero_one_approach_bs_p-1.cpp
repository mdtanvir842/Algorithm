#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
        vector<int>v={0,0,0,0,0,1,1,1,1,1,1};
        int lo=0;
        int hi=v.size()-1;
        int mid;
        while(lo<hi){
            mid=(lo+hi)/2;
            if(v[mid]==0){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
        cout<<"ans0 : "<<lo-1<<endl;
        cout<<"ans1 : "<<hi<<endl;

}

