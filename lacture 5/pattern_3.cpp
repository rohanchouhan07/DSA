#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number of * ::";
    cin>>n;
    for(j=1;j<=n;j++)
    {
        for (i=0;i<=(j-1);i++)
    {
        cout<<"* "; 
    }
    cout<<endl;
}
return 0;
}