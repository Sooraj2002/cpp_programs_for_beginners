/* Function with argument and with return type*/
#include<iostream>
using namespace std;
int sum(int x,int y){
    return x+y;

}
int main(){
    int a,b;
    cout<<"Enter any two no: ";
    cin>>a>>b;
    int res = sum(a,b);
    cout<<"Sum is :"<<res<<endl;
    return 0;

}