#include<iostream>
using namespace std;

int main(){
//Declaration and Assignment of the vlaue in array
  int y[10];
  y[0] = 2;
  y[4] = 5;
  cout<<y[0]<<" "<<y[4]<<endl;
   
// Initialiaztion of array
   int a[10] = {0};         /// Initialisation with 0
//   cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;   ///printing values
   for(int i=0;i<10;i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;

//Printing the array of the squares
   int x[10];
   for(int i=0;i<10;i++){
    x[i] = i*i;
    cout<<x[i]<<" ";
   }
   cout<<endl;

// Printing the Size of the array
   int b;
   cout<<sizeof(b)<<endl;

   int d[10] = {1,2,3};
   cout<<sizeof(d);

   return 0;
}
