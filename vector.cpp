#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int>v(20);
   cout<<v.size()<<endl;
   cout<<v.capacity()<<endl;
   v.push_back(5);
//    cout<<v.size()<<endl;
//    cout<<v.capacity()<<endl;
   v.push_back(10);
//      cout<<v.size()<<endl;
//    cout<<v.capacity()<<endl;
   v.push_back(15);
//      cout<<v.size()<<endl;
//    cout<<v.capacity()<<endl;
   v.push_back(25);
    //  cout<<v.size()<<endl;
//    cout<<v.capacity()<<endl;
   v.push_back(100);
//    cout<<v.capacity()<<endl;
   cout<<" size of vectore : "<<v.size()<<endl;
   v.resize(30);
    cout<<" size of vectore : "<<v.size()<<endl;
    v.pop_back();
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    // for loop
    
    return 0;
}