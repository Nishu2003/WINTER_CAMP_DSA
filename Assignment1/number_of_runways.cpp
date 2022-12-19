/*For a given set of flights, the arrival and departure times are provided in 
2 arrays. Lets say there are 3 flights with arrival and departure times 
provided as per the arrays provided below:
int arr[] = { 100, 300, 500 };
int dep[] = { 900, 400, 600 };
Find the minimum number of runways required to land/depart for each 
flight.*/

#include<iostream>
using namespace std;

void runways_req(int *arr,int *dep,int n){
    int res=1,output=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arr[i]>=arr[j] && dep[j]>=arr[i]){
                    res++;
                }
            }
        }
    }
    cout<<"Runways required : "<<max(res,output);
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n],dep[n];
    cout<<"Enter arrival array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter departure array : ";
    for(int i=0;i<n;i++){
        cin>>dep[i];
    }

    runways_req(arr,dep,n);
    return 0;
}