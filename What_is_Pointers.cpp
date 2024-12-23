#include <iostream>
#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    //What_is_Pointers
    //Raw Pointer;
    int num=100;
    //int *ptr=num; //a value of type "int" cannot be used to initialize an entity of type "int *"
    int *ptr =&num;
    cout<<"Value of Variable num  "<<num<<endl;
    cout<<"Adress of num  "<<&num<<endl;
    cout<<"Adress         "<<ptr<<endl;
    cout<<"Value of Derefrence ptr "<<*ptr<<endl;
    //Now i want to change the value of num without change the ph address
    *ptr =200;
    cout<<"Value of Variable num  "<<num<<endl;
    cout<<"Adress of num  "<<&num<<endl;
    cout<<"Adress         "<<ptr<<endl;
    cout<<"Value of Derefrence ptr "<<*ptr<<endl;
      
  return 0;
}
