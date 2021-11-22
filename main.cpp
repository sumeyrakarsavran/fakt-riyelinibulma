#include <iostream>
using namespace std;
int main()
{
int a,sum=1;
cin>> a;
while(a>0){
sum *=a;
a=a-1;
}
cout << sum;
return 0;
}