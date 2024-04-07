#include<iostream>
using namespace std;
int main()
{
    int A[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int x;
    cin>>x;
    int k=-1;
    for(int i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            k=i;
            break;
        }
    }
    cout<<k;
    return 0;
}