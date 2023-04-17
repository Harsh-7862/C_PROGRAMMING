
//this code is for printing the count in which we have to check numbers between n that are divisible by x,y,z
// code 1
// #include<iostream>
// using namespace std;


// int Divisible(int n, int x, int y,int z){
// int count=0;
// for(int i=1;i<=n;i++){
// if(i%x==0 && i%y == 0 && i%z==0)
// count++;
// }

//     return count;
// }

// int main(){
// int x,y,z,n;
// cin>>n>>x>>y>>z;
// cout<<Divisible(n,x,y,z)<<endl;
//     return 0;
// }



// code for finding sum of average of subarrays
// code 2
// #include <iostream>

// using namespace std;

// double sum_of_avSub(int arr[], int n) {
//     double total_sum = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int subarray_sum = 0;
//             for (int k = i; k <= j; k++) {
//                 subarray_sum += arr[k];
//             }
//             int subarray_len = j - i + 1;
//             double subarray_avg = (double) subarray_sum / subarray_len;
//             total_sum += subarray_avg;
//         }
//     }

//     return total_sum;
// }

// int main() {
//     int arr[] = {5, 6, 1,2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     double result = sum_of_avSub(arr, n);
//     cout << "Sum of average of all subarrays is: " << result << endl;
//     return 0;
// }


//code 3 code for celebrity problem
#include <iostream>
using namespace std;

#define N 4

int M[N][N] = {
    {0, 0, 0, 1},
    {0, 0, 0, 1},
    {0, 0, 0, 1},
    {0, 0, 0, 1}
};

bool knows(int a, int b) {
    return M[a][b];
}

int find_celebrity(int n) {
    int a = 0, b = n - 1;

    while (a < b) {
        if (knows(a, b)) {
            a++;
        } else {
            b--;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i != a && (knows(a, i) || !knows(i, a))) {
            return -1;
        }
    }

    return a;
}

int main() {
    int result = find_celebrity(N);

    if (result == -1) {
        cout << "No celebrity found." << endl;
    } else {
        cout << "Celebrity found at index " << result << "." << endl;
    }

    return 0;
}


//                                    other option code 3
// #include<bits/stdc++.h>
// using namespace std;
// class Solution 
// {
//     public:
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//               int k = n-1;
        
//         for(int i=0;i<n;i++){
//             int rCount= 0;
//             int cCount = 0;
//             for(int j=0;j<n;j++){
                
//                 if(i==j){
//                     continue;
//                 }
//                 if(M[i][j]==0){
//                     rCount++;
//                 }
//                 if(M[j][i]==1){
//                     cCount++;
//                 }
                
//             }
            
//             if(rCount == k && cCount == k ){
//                 return i;
//             }
//         }
//         return -1;

//     }
// };
// int main(){
// int t;
// cin>>t;
// while(t--){

//     int n;cin>>n;
//     vector<vector <int> > M(n,vector <int>(n,0));
//     for(int i=0;i<n;i++)
//     {
//    for(int j=0;j<n;j++)
// {
// cin>>M[i][j];

// }Solution ob;
// cout<<ob.celebrity(M,n)<<endl;
//     }
// }

// }