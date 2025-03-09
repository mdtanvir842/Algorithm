//find the all greatest and smallest number of all substring in a particular vector.
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int n,p;
    cin>>n>>p;
    vector<int>x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    multiset<int>ms;
    for(int i=0;i<p;i++){
        ms.insert(x[i]);
    }
    for(int i=0;i<=n-p;i++){
        int mn=*ms.begin();
        int mx=*ms.rbegin();
        cout<<mn<<" "<<mx<<endl;
        ms.erase(ms.find(x[i]));
        if(i<n-p){
            ms.insert(x[i+p]);
        }

    }
}
