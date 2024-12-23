    vector<int> myVec={10,20,30,50,80,-10,-2};
    vector<int>::iterator  it;
    for(int &S:myVec)
    {
        
        cout<<S<<"  ";
    }
     cout<<endl;
    //reverse array
    vector<int>second_vec; //dynamic
    int second_vec_index=0;
    for(it=myVec.end()-1 ; it>=myVec.begin();it--)
    {
        //cout<<*it<<endl;
        second_vec.push_back(*it);
    }
    cout<<"-------------------"<<endl;
    // print revered vector
    cout<<" revered vector"<<endl;
    for(it=second_vec.begin() ; it<second_vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
     cout<<"----using built in fn-----"<<endl;
    reverse(myVec.begin(),myVec.end());
    //reverse(myVec.begin(),myVec.end()); //to turn back into original
     for(it=myVec.begin() ; it<myVec.end();it++)
    {
        cout<<*it<<" ";
    }
