// Time Limite Exceeded 

// class Solution {
//     bool isPrime(int n) {
//         if(n<=1)
//             return false;
//         for(int i = 2; i<=n/2; i++)
//         {
//             if(n%i == 0)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
//     int countPrimes(int n) {
//         int count = 0;
//         for(int i = 2; i<n; i++)
//         {
//             if(isPrime(i))
//                 count++;
//         }
//         return count;
//     }
// };


//Optimised Solution

class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;
        for(int i = 2; i<n; i++){
            if(prime[i]){
                count++;

                for(int j = i*2; j<n; j+=i){ //starting from i*2=2i as i*1=i the same element which is prime
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};