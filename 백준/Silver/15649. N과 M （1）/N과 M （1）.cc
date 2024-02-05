#include <iostream>
using namespace std;

int n,m;
int arr[10];
bool used[10];
void recur(int a){
    if(a==m){
        for(int i=0; i<m; i++) cout<<arr[i]<<" ";
        cout<<"\n";
        return;
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            arr[a]=i;
            used[i]=1;
            recur(a+1);
            used[i]=0;
        }
    }
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin>>n>>m;
    recur(0);
    return 0;
}