#include<iostream>
// #include<climits>
using namespace std;
int main(){
    int min=0;//min=INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(min>=arr[i])            
        min=arr[i];
        }
        cout<<"Minimun is ::"<<min;
}