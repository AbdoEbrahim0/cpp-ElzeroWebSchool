#include <iostream>
#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    // Pointers - Arithmetic And Array
    int nums_arr[]={10,20,30,40};
    cout<<"HOLDING ARRAY PHYSICAL MEM AND CONTENT"<<endl;
    cout<<nums_arr<<endl; //Adress
    cout<<&nums_arr[0]<<endl;//Adress
    cout<<*nums_arr<<endl;//1st element  or 
    cout<<*(&nums_arr[0])<<endl;//1st element
    cout<<"iterate on wild Poniter"<<endl;
    int *ptr;
    cout<<*ptr<<endl; //0 as passing null 
    cout<<ptr<<endl; //0x23dcb6e1680 //random location for pointer at every run
    ptr++;
    cout<<ptr<<endl; //as int 4 bytes 0x23dcb6e1684
    cout<<"iterate Over  array "<<endl;
    for (int val : nums_arr){cout<< val<<"  " ;} cout<<"\n";
    ptr=nums_arr; //or ptr =&nums_arr[0]
    cout<<*ptr<<endl; //1st element
    ptr++;
    cout<<*ptr<<endl; //2nd element
    cout<<*(ptr-1); //1st element
  return 0;
}
