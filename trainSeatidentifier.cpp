#include<iostream>
using namespace std;
int main(){
    int t,n,p;
    cin>>t;
    do {
        cin>>n;
        p=n/12;
        n%=12;
        if(n%3==2||n==2){
            cout<<p*12+(13-n)<<" "<<"MS"<<endl;
        }
        else if(n%6==0||n%6==1||n==1){
            n==0?cout<<p*12-11:cout<<p*12+(13-n);
            cout<< " "<<"WS"<<endl;
        }else cout<<p*12+(13-n)<<" "<<"AS"<<endl;
        t--;
    }while(t>0);
    return 0;
}
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/