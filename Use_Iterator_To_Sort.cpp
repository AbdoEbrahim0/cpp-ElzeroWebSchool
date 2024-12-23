    vector<int> myVec={10,20,30,50,80,-10,-2};
    vector<int>::iterator  it;

    for(int &S:myVec)
    {
        
        cout<<S<<"  ";
    }
     cout<<endl;

     cout<<"-------------------"<<endl;
    vector<int>Sorted_Vec;
    int current;
    int min;
    
    //cout<<*(second_vec.begin()+1)<<endl; //-10
     vector<int> myVec2={10,20,30,50,80,-10,-2};
     vector<int>mySortedVec;
    for(it=myVec2.begin() ; it<myVec2.end();it++)
    {
        // cout<<"it++ :"<<*it<<endl;;
        min=*it;
        //cout<<"currrent"<<current<<endl;
        if (myVec2.size()>3)
        {
            for(int current :myVec2 )
                {
        //    cout<< "min : "<<min<<"  current : "<<current <<endl;
            if (current<min){min=current;} 
                }   
        cout<<"Min : "<< min<<endl;
        mySortedVec.push_back(min); 
        myVec2.erase(remove(myVec2.begin(),myVec2.end(),min) );
        }
   }
        int lowest=0;
        int thrdLowest=0;
        int secLowest=0;
        cout<<"-----------"<<endl;
           if(myVec2.size()==3)
        {
            cout<<"now it shrink to size 3 elemnts"<<endl;
        }
            if(myVec2.at(0)<myVec2.at(1) && myVec2.at(0)<myVec2.at(2))//1st num is lowest so push
            {lowest=myVec2.at(0);}
            
            if (myVec2.at(1)>myVec2.at(0) && myVec2.at(1)<myVec2.at(2))//2nd num is lowest so push
            {secLowest= myVec2.at(1);}

            if (myVec2.at(2)>myVec2.at(0) && myVec2.at(2)>myVec2.at(1))//3rd is lowest
            {thrdLowest= myVec2.at(2);}
        mySortedVec.push_back(lowest);//30
        mySortedVec.push_back(secLowest); //50
        mySortedVec.push_back(thrdLowest);//80
                
                    cout<<"vector after erase minimum num :"<<endl;
        for(it=myVec2.begin() ; it<myVec2.end();it++)
        cout<<*it<<endl;     
                    cout<<"vector after Sorting :"<<endl;
        for(it=mySortedVec.begin() ; it<mySortedVec.end();it++)
             cout<<*it<<endl;
        cout<<"----using built in fn-----"<<endl; 
        cout<<"------------Before sort------"<<endl;
        for(it=myVec.begin() ; it<myVec.end();it++)
             cout<<*it<<endl;
              cout<<"vector after Sorting :"<<endl;
        sort(myVec.begin(),myVec.end());
        for(it=myVec.begin() ; it<myVec.end();it++)
             cout<<*it<<endl;
