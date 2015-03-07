#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int *a=(int *)malloc(5*sizeof(int));
cout<<&a<<"\n"<<&(a)+<<endl;
cout<<(sizeof(a)/sizeof(a[0]))<<endl;
return 0;
}
