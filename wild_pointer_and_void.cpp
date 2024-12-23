#include <iostream>
#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{     
    // wild_pointer_and_void
    cout<<"---------wild_pointer_and_void---------"<<endl;
    int *ptr_3; //wild_pointer
    //cout<<ptr_3;
    //cout<<*ptr_3; //print  nothing or garbage //stop code from runing
    
    int *ptr_4 =NULL;//wild_pointer
    int *ptr_5=nullptr;//wild_pointer
    cout<<ptr_4; // 0
    // cout<<*ptr_4; //print  nothing //stop code from runing
    cout<<ptr_5;  //0
    cout<<&ptr_5; //print  0xc4e25ffe20
    cout<<"\n---------Void_Pointer---------"<<endl;
    int a=100;
    void *ptr_a=&a; //if dont know what type return this adress 
    cout<<"\n---------Casting C-Style---------"<<endl;
    cout<<ptr_a<<"\n";// adress
    //cout<<*ptr_a;// compile error //expression must be a pointer to a complete object type
    cout<<*(int *)ptr_a; //100
    
    cout<<"\n---------static C-Style---------"<<endl;
    cout<<static_cast<int *>(ptr_a)<<endl; //address 0x23539ffb74
    cout<<*static_cast<int *>(ptr_a); //100
    

  return 0;
}
