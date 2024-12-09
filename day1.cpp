#include <iostream>
#include <vector>
using namespace std;
int findSecondLargest(vector<int>&arr){
    int largest = -1 , secondlargest = -1;
    for(int num:arr){
        if(num > largest ){
            secondlargest = largest;
            largest= num;
        }
        else if(num > secondlargest && num <largest) {
            secondlargest = num;

        }

    }
    return secondlargest;
}
int main(){
    vector<int> arr = {10, 20, 20, 5, 10};
    cout << findSecondLargest(arr) << endl;
    return 0;
}

