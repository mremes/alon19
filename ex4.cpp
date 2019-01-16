#include <iostream>
#define p std::cin
int main(){long t,a,b;p>>t;while(t-->0){p>>a;p>>b;std::cout<<((a+b)%3>0||b>2*a||a>2*b?"NO\n":"YES\n");}}
