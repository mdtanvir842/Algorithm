#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n=11;
    int arr[n]={2,4,6,8,10,12,14,16,18,20,21};
    int f=21;
    int lo,hi,mid,p=0;
    lo=0;
    hi=n-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        //mid=lo+((hi-lo)/2);
        if(arr[mid]==f){
            cout<<mid<<endl;
            p=1;
            break;
        }
        else if(f<arr[mid]){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    if(p==0){
        cout<<"Not Found"<<endl;
    }

}
