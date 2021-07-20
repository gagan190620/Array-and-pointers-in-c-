#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter number of elements of array below:"<<endl;
    cin>>n;
    cout<<"**********Enter elements************"<<endl;
    int arr[n],*p;
    p=arr;
    for(i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"******You entered elements to array as******"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<" :"<<*p<<endl;
        p++;
    }
         return 0;
}

