/*Function with no argument but with return type*/
#include<iostream>
using namespace std;
int sum(int x,int y){
    return (x+y);
}
int main(){
    int a=12,b=10;
    int res=sum(a,b);
    cout<<"Sum of two no is :"<<res<<endl;
    return 0;
}
