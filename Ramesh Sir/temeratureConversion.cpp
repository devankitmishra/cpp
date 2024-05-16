#include<iostream>
using namespace std;
char tempType;
int main()
{   
    cout<<"Enter what you want to calculate ?(c for Celsius and f for Fahrenheit)"<<endl;
    cin>>tempType;    

    if(tempType=='f'){
        float temp_c, temp_f;
        printf ("Enter the value of Temperature in Celsius: ");
        scanf ("%f", &temp_c);
        temp_f = (1.8 * temp_c) + 32;
        printf ("The Temperature in Fahrenheit is: %f", temp_f);
    }
    else if(tempType=='c'){
        float temp_c,temp_f;
        printf("Enter the value of Temperature in Fahrenheit: ");
        scanf("%f",&temp_f);
        temp_c = (temp_f - 32)*5/9;
        printf("The temperature in Celsius is: %f",temp_c);
    }
    else{
        printf("Invalid Input");
    }
    return 0;   
}
