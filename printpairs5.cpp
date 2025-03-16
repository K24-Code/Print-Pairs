#include<iostream>
using namespace std;
void printAllPairs(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        //f=FOR EVERY i, WE ARE RUNNING LOOPING VARIABLE j FROM START TO END
        for(int j=0; j<=i; j++){
            cout<< arr[i] << "," << arr[j] <<endl;
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n=4;
    printAllPairs(arr,n);
    return 0;
}