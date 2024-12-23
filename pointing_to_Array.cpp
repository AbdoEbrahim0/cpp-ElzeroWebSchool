#include <iostream>
#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    short int seq[]={10,20,30,40};
    short int *ptr_seq=&seq[0];
    cout<<"Value Using index    "<<seq[0]  <<endl;
    cout<<"Adress Using index   "<<&seq[0]  <<endl;
    cout<<"Adress Using pointer "<<ptr_seq  <<endl;
    cout<<"Value Using pointer  "<<*ptr_seq  <<endl;
    cout<<"---------iterate by 2 to get 3rd element---------"<<endl;
    cout<<"Value Using index    "<<seq[2]  <<endl;
    cout<<"Adress Using index   "<<&seq[2]  <<endl;
    cout<<"Adress Using pointer "<<ptr_seq+2  <<endl;
    cout<<"Value Using pointer  "<<*(ptr_seq+2)  <<endl;
  return 0;
}
