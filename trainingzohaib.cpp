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
#include <iostream>

using namespace std;

double sum_of_avSub(int arr[], int n) {
    double total_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int subarray_sum = 0;
            for (int k = i; k <= j; k++) {
                subarray_sum += arr[k];
            }
            int subarray_len = j - i + 1;
            double subarray_avg = (double) subarray_sum / subarray_len;
            total_sum += subarray_avg;
        }
    }

    return total_sum;
}

int main() {
    int arr[] = {5, 6, 1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    double result = sum_of_avSub(arr, n);
    cout << "Sum of average of all subarrays is: " << result << endl;
    return 0;
}
