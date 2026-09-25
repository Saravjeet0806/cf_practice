#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int total = a;
    int temp = 0;
    while(a>=b){
        if(a%b==0){
            a/=b;
            total+=a;
        }
        else{
            temp=a;
            a/=b;
            total+=a;
            a+=temp%b;
        }
    }
    cout<<total<<'\n';
    return 0;
}