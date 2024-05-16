// /*Home Work*/

// #include<iostream>
// using namespace std;
// int main(){
//     int size = 5,sum=0;
//     int arr[size];
//     cout<<"enter the elements of the array: "<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     cout<<"Sum of all elements of array: "<<sum<<endl;

// }

// /*-------------------------------linear search----------------------------------*/
// #include<iostream>
// using namespace std;

// int search(int arr[],int size,int key){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }

//     }
//     return 0;

// }
// int main(){
//     int arr[10] = {4,32,23,654,645,756,5,543,47,65};

//     cout<<"Enter the element to find: "<<endl;
//     int key;
//     cin>>key;

//     bool found = search(arr,10,key);

//     if (found)
//     {
//         cout<<"Key is present!"<<endl;
//     }
//     else
//     {
//         cout<<"Key is not present!"<<endl;
//     }

// }

// /*------------------array reverse---------------------------------*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int start = 0;
//     int end = 5 - 1;
//     int temp;
//     for (int i = start; i <= end; i++)
//     {
//         // temp = arr[start];
//         // arr[start] = arr[end];
//         // arr[end] = temp;
//         swap(arr[start], arr[end]);

//         start++;
//         end--;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

/*--------------------some important questions--------------------------------*/

// find unique
// find duplicate
// array intersection
// pair sum
// triplate sum
// sort 0's and 1's

// //swap alternate even
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {10, 20, 30, 40, 50, 60};
//     for (int i = 0; i < 6; i+=2)
//     {
//         if (i+1 < 6)
//         {
//             swap(arr[i+1], arr[i]);
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// //swap alternate odd
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};
//     for (int i = 0; i < 5; i+=2)
//     {
//         if (i+1 < 5)
//         {
//             swap(arr[i+1], arr[i]);
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// // unique element
// #include<iostream>
// using namespace std;
// int main()
// {
//     int ans = 0;
//     int arr[8]={14,14,66,66,34,34,5,66};
//     for (int i = 0; i < 8; i++)
//     {
//         ans = ans^arr[i];
//     }
//     cout<<ans<<endl;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[8] = {14, 14, 66, 66, 34, 34, 5, 66};
//     int n = sizeof(arr) / sizeof(int);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 // Mark duplicate elements by setting them to a unique value, for example, -1.
//                 arr[j] = -1;
//             }
//         }
//     }

//     // Print unique elements (elements not marked as duplicates).
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != -1)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main()
// {
//     int arr[10] = {14, 14, 66, 66, 34, 34, 5, 5, 66, 7};
//     int n = sizeof(arr) / sizeof(int);

//     unordered_map<int, int> frequency;
//     for (int i = 0; i < n; i++)
//     {
//         frequency[arr[i]]++;
//     }
//     cout << "Unique elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         if (frequency[arr[i]] == 1)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[8] = {14, 14, 66, 66, 34, 34, 5, 66};
//     int n = sizeof(arr) / sizeof(int);

//     cout << "Unique elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[8] = {14, 14, 66, 66, 34, 34, 5, 66};
//     int n = sizeof(arr) / sizeof(int);

//     cout << "Unique elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>

// bool are_occurrences_different(const vector<int> &arr)
// {
//     vector<int> occurrences;

//     for (int element : arr)
//     {
//         bool found = false;
//         for (int count : occurrences)
//         {
//             if (count == element)
//             {
//                 found = true;
//                 break;
//             }
//         }

//         if (found)
//         {
//             return false; // Occurrence is not unique
//         }

//         occurrences.push_back(element);
//     }

//     return true; // All occurrences are unique
// }

// int main()
// {
//     vector<int> my_array = {2,2,1,1,3,3};

//     if (are_occurrences_different(my_array))
//     {
//         cout << "false" << endl;
//     }
//     else
//     {
//         cout << "true" << endl;
//     }

//     return 0;
// }

/*--------------find duplicate element---------------------*/

// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[6] = {1,2,3,4,5,5};
//     int ans = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         ans = ans^arr[i];
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         ans = ans^i;
//     }
//     cout<<ans<<endl;
// }




// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n = 8;
//     int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
//     vector<int> ans;
    
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 ans.push_back(arr[i]);
//             }
//         }
//     }
//     for (int i = 0; i < ans.size(); i++) {
//         std::cout << ans[i] << " ";
//     }
//     return 0;
// }






