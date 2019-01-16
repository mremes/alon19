#include<iostream>
using namespace std;
#define f(i,a,b)for(int i=a;i<=b;i+=2)cout<<i<<" ";
int main(){long n;cin>>n;if(n>1&&n<4)cout<<"NO SOLUTION\n";else{f(i,2,n);f(i,1,n)};}
