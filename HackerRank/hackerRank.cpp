// //functions

// #include <iostream>
// #include <cstdio>
// using namespace std;

// int max_of_four(int a,int b,int c,int d){
//     int biggest;
//     if (a>b && a>c && a>d)
//     {
//         biggest = a;
//     }
//     else if (b>c && b>a && b>d)
//     {
//         biggest = b;
//     }
//     else if (c>b && c>a && c>d)
//     {
//         biggest = c;
//     }
//     else if (d>c && d>a && d>b)
//     {
//         biggest = d;
//     }
//     return biggest;
// }

// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);
// }



// #include <stdio.h>

// void update(int *a,int *b) {
//     int temp_a = *a + *b;
//     int temp_b;
//     if (*a >= *b)
//     {
//         temp_b = *a - *b;
//     }
//     else if (*a<*b)
//     {
//         temp_b = *b - *a;
//     }
//     *a = temp_a;
//     *b = temp_b;
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;

//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d\n", a, b);

//     return 0;
// }



// //array reverse
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n, i, j;
//     cin >> n;

//     // Using dynamic memory allocation or a vector instead of an array with variable size
//     vector<int> arr(n);

//     for (i = 0; i < n; i++) {
//         cin >> j;
//         arr[i] = j;
//     }

//     for (i = n - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




// // C program to demonstrate variable length array
// #include <stdio.h>

// // function to initialize array
// void initialize(int* arr, int size)
// {
// 	for (int i = 0; i < size; i++) {
// 		arr[i] = i + 1;
// 	}
// }

// // function to print an array
// void printArray(int size)
// {
// 	// variable length array
// 	int arr[size];
// 	initialize(arr, size);

// 	for (int i = 0; i < size; i++) {
// 		printf("%d ", arr[i]);
// 	}
// }

// // driver code
// int main()
// {
// 	int n = 5;
// 	printArray(n);

// 	return 0;
// }
