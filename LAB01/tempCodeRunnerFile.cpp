
#include<iostream>
using namespace std;

int distinctelement(int arr[], int n){
    bool isdistinct = true;
    int count =0;
    for (int i=0;i<n;i++){
        isdistinct=true;
        for (int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                isdistinct=false;
                break;
            }  
        }
        if(isdistinct==true){
            count++;

        }
    
    }
    return count;
    
}

int main(){
    int arr[1000],n;
    cout << "Enter size of array " << endl;
    cin >>  n;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << distinctelement(arr,n) << endl;

}