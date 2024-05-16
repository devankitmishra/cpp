#include<iostream>
using namespace std;
int main(){
    int height[9] = {1,8,6,2,5,4,8,3,7};
    int ll = 0; // setting 1st index as the left side of container
    int rl = 8; // setting last index as the right side of container
    int highestArea = 0; // initialising heighest area as 0 so that we could modify it after

    while (ll < rl)
    {
        {
            int currentArea = min(height[ll], height[rl]) * (rl - ll); //min hight has to br choosen sothat water won't overflow
            highestArea = max(highestArea, currentArea);//storing current area in heighest area if maximum
            if (height[ll] < height[rl]) //decresing width if required
            {
                ll++;
            }
            else
            {
                rl--;
            }
        }
        

    }

    cout<<highestArea << endl; // returnign max area that water can contain
    

     
}