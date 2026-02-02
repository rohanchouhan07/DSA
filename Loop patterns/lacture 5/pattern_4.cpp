#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number of * ::";
    cin>>n;
    for(j=1;j<=n;j++)
    {
        for (i=1;i<=n-j;i++)
    {
        cout<<"  "; 
    }
    for(i=1;i<=j;i++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}