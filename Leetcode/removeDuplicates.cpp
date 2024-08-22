// Remove Duplicates from Sorted Array
#include<iostream>
using namespace std;
int main()
{
    int nums[5] = {1,1,2,2,4};
    int j = 1; 
        for (int i = 1; i < 5; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i]; 
                j++;
            }
        }
    for (int i = 0; i <j; i++)
    {
        cout<<nums[i]<<endl;
    }
      
}

