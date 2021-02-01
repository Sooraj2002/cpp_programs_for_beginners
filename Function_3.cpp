/* Finding fibonacci series with help of function*/
#include<iostream>
using namespace std;
void fibonacci(int x){
    long int t1 = 0;
    long int t2 = 1;
    long int next;
    for(int i=1;i<=x;i++){
        cout<<t1<<endl;
        next = t1+t2;
        t1=t2;
        t2=next;
    }
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}