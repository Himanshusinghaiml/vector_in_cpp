#include<bits/stdc++.h>
using namespace std;
// int main()
// {   int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// user input print 2nd matrix 



// int main()
// {   int row,column;
//     cin>>row; cin>>column;
//     int arr[row][column];
//     for(int i=0;i<row;i++)
//     {
//          for(int j=0;j<column;j++)
//          {
//             cin>>arr[i][j];
//          }
//     }
//  for(int i=0;i<row;i++)
//     {
//          for(int j=0;j<column;j++)
//          {
//             cout<<arr[i][j]<<" ";
//          }
//          cout<<endl;
//     }
     
//     for(int i=0;i<row;i++)
//     {   int sum=0;
//         for(int j=0;j<column;j++)
//         {
//             sum=sum+arr[i][j];
//         }
//         if(i==0){
//         cout<<" sum of first row :"<<i<<" : "<<sum<<endl;}
//         if(i==1){
//         cout<<" sum of second row :"<<i<<" : "<<sum<<endl;}
//         if(i==2){
//         cout<<" sum of third row :"<<i<<" : "<<sum<<endl;}
        

//     }
//     return 0;


//add two matrix



// int main()
// {  int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//    int arr2[3][4]={13,14,15,16,17,18,19,20,21,22,23,24};
//    int arr3[3][4];  int sum=0;
//    for(int i=0;i<3;i++)
//    {    //int sum=0;
//     for(int j=0;j<4;j++)
//     {
//          sum=arr1[i][j]+arr2[i][j];
//         //  cout<<sum<<" ";
//          arr3[i][j]=sum;
         
         
//     }
//     cout<<endl<<endl;
//    }
//    for(int i=0;i<3;i++)
//    {
//     for(int j=0;j<4;j++)
//     {
//         cout<<arr3[i][j]<<" ";
//     }
//     cout<<endl;
//    }

//     return 0;
// }

//  matrix multilpication 

// int main()
// {   int arr1[2][2]={2,3,4,5};
//     int arr2[2][2]={2,3,5,1};
//     int arr3[2][2]; int mult=0;
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//            mult= arr1[i][j]+arr2[i][j];
//            arr3[i][j]=mult;
//         }
//     }
//     return 0;
// }
int multiply(int arr[],int len)
{   int mult=1;
    for(int i=0;i<len;i++)
    {
        mult=mult*arr[i];
    }
    return mult;
}
int main()
{   int arr[]= {1,2,3,4,5,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int ans =multiply(arr,len);
    cout<<" multiplication of 1 D array : "<<ans<< endl;
    return 0;
}