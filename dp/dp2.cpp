#include<iostream>
using namespace std;
 void myfun(int &i){
     i++;
 }

int main()
{
int i = 10;

myfun(i);
cout<<i<<endl;

int &j = i;
i++;
cout<<i<<endl;
i++;
cout<<j<<endl;
int k = 100;
j = k;

cout<< i <<endl;


}