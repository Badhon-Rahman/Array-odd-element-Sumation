#include <iostream>

using namespace std;

void OddElementSum(int arr[], int arrSize){
    int sum = 0;
        for(int i = 0; i < arrSize; i++){
            if((arr[i] % 2 )!= 0){
                sum +=  arr[i];
            }
        }
        cout << "Summation: " << sum << endl;
}

int main()
{
    int arrSize;
    cout << "Enter array Size:";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter the array element:";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    OddElementSum(arr, arrSize);
    return 0;
}
