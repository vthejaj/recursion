#include<iostream>
using namespace std;

bool check_sorted(int arr[], int size, int index) {
    //base clase
    if(index == size - 1) return true;

    //solution one case
    bool current_Ans = false, recursive_Ans = false;
    if(arr[index+1] > arr[index]) current_Ans = true;

    //solutioned by recusion
    recursive_Ans = check_sorted(arr,size,index+1);
    
    return (current_Ans && recursive_Ans);
    //if(current_Ans == true && recursive_Ans == true) return true; else return false;
}

bool check_sorted_desc(int arr[], int size, int index) {
    //base clase
    if(index == size - 1) return true;

    //solution one case
    bool current_Ans = false, recursive_Ans = false;
    if(arr[index] > arr[index+1]) current_Ans = true;

    //solutioned by recusion
    recursive_Ans = check_sorted_desc(arr,size,index+1);
    
    return (current_Ans && recursive_Ans);
    //if(current_Ans == true && recursive_Ans == true) return true; else return false;
}

int main() {
    //int arr[] = {10,20,30,40,50};
    int desc_arr[] = {50,40,30,20,10};
    int size = 5;
    int index = 0;
    
    //(check_sorted(arr,size,index) == true) ? cout << "sorted" << endl : cout << "not sotrted" << endl ;
    (check_sorted_desc(desc_arr,size,index) == true) ? cout << "descly sorted" << endl : cout << "descly not sotrted" << endl ;
    
    return 0;
}