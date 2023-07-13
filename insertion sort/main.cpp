#include <iostream>
using namespace std;
#include <vector>
#include <array>

vector<int> InsertionSort (vector<int> arr){
    for(int i=1;i<arr.size();i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    return arr;
}

void input(){
     vector<int> arr={};
    int input,lenght;
    cout<<"Enter the size of the array: ";
    cin>>lenght;
    cout<<"enter the elements: ";
    for(int k=0;k<lenght;k++){
        cin>>input;
        arr.push_back(input);
    }
    cout<<"Your array is: ";
    for(int i:arr){cout<<i<<" ";};
    cout<<endl;
    arr= InsertionSort(arr);
    cout<<"Your sorted array is: ";
    for(int i:arr){cout<<i<<" ";};
    cout<<endl;
}

int main() {
    int check=0;
    while (check!=-1){
        input();
        cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Are you want to continue.Press (-1) if you want to quit.Else press any key:";
        cin>>check;
        cout << endl;
    }
    cout<<"Welcome";
    return 0;
}
