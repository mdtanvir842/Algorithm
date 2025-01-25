#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int isOk( vector<int>v1,int mid,int x){
    if(v1[mid]<x){
        return 0;
    }
    else{
        return 1;
    }
}
int main() {
    optimize();
        vector<int>v={1,2,3,4,4,5,5,5,6,7};
        int lo=0;
        int hi=v.size()-1;
        int mid;
        int target=5;
        while(lo<hi){
            mid=(lo+hi)/2;
            if(isOk(v,mid,target)==0){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
        cout<<"ans1 : "<<lo<<endl;

}
