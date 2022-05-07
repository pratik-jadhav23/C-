/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int N,i,j,temp=0;
    cout<<"Enter no of values: "<<endl;
    cin>>N;
    int arr[N];
    
    cout<<"Enter values: "<<endl;
    for(i=0;i<N;i++)
    cin>>arr[i];
    
    for(i=0;i<N;i++)
    for(j=i+1;j<N;j++){
        if(arr[j]<arr[i]){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    
    cout<<"Sorted Array: "<<endl;
    for(i=0;i<N;i++)
    cout<<arr[i]<<" ";

    return 0;
}
