    vector<int> myVec={10,20,30,50,80,-10,-2};
    vector<int>::iterator  it;
    for(int &S:myVec)
    {
        
        cout<<S<<"  ";
    }
     cout<<endl;
    cout<<"-------------------"<<endl;
    int c=0; //counter of occrance of specific num
    int biggestOcc=0;
    vector<int >vec_occarance={10,20,-30,20,500,14,20,50,20};
    for (int i : vec_occarance)
    {
        for (int j : vec_occarance)
        {
         if (j==i)
            c++;
        }   
        if (c>biggestOcc){biggestOcc=c;}
        c=0;
    }
    cout<<"biggestOcc : "<<biggestOcc<<endl;
    cout<<"----using built in fn-----"<<endl;
    int spcific_value=20;
    biggestOcc=count(vec_occarance.begin(),vec_occarance.end(),spcific_value);
    cout<<"biggestOcc : "<<biggestOcc<<endl;
