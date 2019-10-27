#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=1;i<=10;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
        else
        {
            continue;
        }

    }
    cout<<"greater"<<arr[0];
    return 0;
}
