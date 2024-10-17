#include <iostream>
using namespace std;

// Function which returns max profit
int Rod(int rate[], int n)
{
    // Base case 
    if (n == 0) 
    {
       return 0;
    }
//  Variable for storing the result
    int res = 0;
    // THis loop will check for the all possible cases
    for (int i=0; i<n; i++)
    { 
        // This will recursively calculate tyhe all possible solutions and give the finbal output 
       res = max(res, rate[i] + Rod(rate, n-i-1));

    }
    // Returning the result
    return res;

}
int main()
{
// Price Array
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};  
    // Taking the size of the rod
    int size;
    cout<<"Enter the Size"<<endl;
    cin>>size;
    // Computing max profit
    cout<<"Max Profit is"<<endl;
    cout << Rod(price, size)<<endl;
    return 0;

}
