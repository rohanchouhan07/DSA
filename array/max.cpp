#include<iostream>
// #include<climits>
using namespace std;
int main(){
    int max=0;
    int arr[5]={8,19,-24,49,33};
    for(int i=0;i<5;i++){
        if(max<=arr[i])            
        max=arr[i];
        }
        cout<<max;
}