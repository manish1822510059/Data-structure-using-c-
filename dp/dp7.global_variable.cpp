#include<iostream>
using namespace std;
#define pi  3.14
int a;
void g(){
a++;
cout<<a<<endl;

}

void f()
{
cout<<a<<endl;
a++;
g();

}

int main()
{
a = 10;
f();
f();
cout<<a<<endl;


}