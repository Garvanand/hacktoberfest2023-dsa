#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" element of the array";
    cin>>a[i];
    int maxim = a[0];
    int minn = a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]>maxim)
            maxim = a[i];
        if(a[i]<minn)
            minim = a[i];
    }
    cout << "Largest is : "<<maxim<<"\nSmallest in the array is:  "<<minn<<"\n";
    return 0;
}		
