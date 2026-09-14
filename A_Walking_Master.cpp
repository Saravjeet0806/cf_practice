#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1, x2, y1, y2;
        cin>>x1>>x2>>y1>>y2;

        if(x2>y2){
            cout<<-1<<'\n';
            continue;
        }

        int moves = y2-x2;

        x1 += moves;

        if(x1<y1){
            cout<<-1<<'\n';
            continue;
        }
        moves+=(x1-y1);

        cout<<moves<<'\n';

    }
    return 0;
}