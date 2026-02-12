#include <iostream>
using namespace std;

int main()
{
    // (Q 1) Rotate an array by d to left side by using an additional array.
    
    
    // My method
    
    int a[7] = {1,2,3,4,5,6,7}; // answer a[5] = {4,5,6,7,1,2,3}
    int size = sizeof(a)/sizeof(a[0]);
    int d = 3;
    
    int first = a[0];
    int second = a[1];
    int third = a[2];
    
    for(int i = 0;i<(size-d);i++){
        a[i] = a[i+d]; 
    }
    a[size-d+0] = first;
    a[size-d+1] = second;
    a[size-d+2] = third;
    
    for(int i = 0;i <size ; i++) {
        cout << a[i] << " ";
    }
    cout << endl ;
    
    
    //2nd method -> personal favourite
    int a1[7] = {1,2,3,4,5,6,7}; // answer a[5] = {4,5,6,7,1,2,3}
    int size1 = sizeof(a1)/sizeof(a1[0]);
    int d1 = 3;
    
    for(int i = 0;i<(size1-d1);i++){
        int temp = a1[i];
        a1[i] = a1[i+d1]; 
        a1[i+d1] = temp;
    }
    int temp = a1[size1-1];
    for(int i = 0;i<(size1-2*d1);i++){
      int temp = a1[size1-1];
      a1[size-1-i] = a1[size-2-i];
    }
  a1[size1-d1] = temp;
    
    for(int i = 0;i <size ; i++) {
        cout << a1[i] << " ";
    }
    cout << "end " << endl;
    
    //not completed still working 
    
    
    
    //sir's method
    
    /*
    arr = [1,0,2,6,3,4]
    
    step 1: reverse entire array: [6,2,0,1,4,3]
    step 2: reverse first n-d elements ---> [1,0,2,6,4,3]
    step 3: reverse last d elements ---> [1,0,2,6,3,4]
    
    */
    
    int arr[] = {3,4,1,0,2,6};
    int s = sizeof(arr)/sizeof(arr[0]);
    
    int d2 = 2;
    int in = 0;
    int last = s-1;
    while(in<last){
        int temp = arr[in];
        arr[in] = arr[last];
        arr[last] = temp;
        in++;
        last--;
        
    }
    
    int start1 = 0;
    int last1 = s-d2-1;
    while(start1<last1){
        int temp = arr[start1];
        arr[start1] = arr[last1];
        arr[last1] = temp;
        start1++;
        last1--;
    }

    
    int start2 = s-d2;
    int last2 = s-1;
    
    while(start2<last2){
        int temp = arr[start2];
        arr[start2] = arr[last2];
        arr[last2] = temp;
        start2++;
        last2--;
    }
   
    
    for(int i = 0 ; i<s ;i++){
        cout << arr[i] << " ";
    }
    cout << endl
    
    
    
    //Method 2;
    /*
    void rotate (int arr[] , int l,int r){
        while(l<r){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
        
    int main(){
        int arr[] = {3,4,1,0,2,6}
        int d = 2;
        
        int n = sizeof(arr)/sizdof(arr[0]);
        
        rotate(arr,0,n-1);
        rotate(arr,0,n-d-1);
        rotate(arr,n-d,n-1);
        
        for(int i = 0; i <n ; i++){
            cout << arr[i] << " ";
        }
    }
    }
    */


    // (Q 2) Give an array of 0s and 1s, find the largest consecutive sequence of  all 0s or 1s.
    
    
    

    
    
    
    int arr[] = {0,0,0,0,1,1,1,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    int current_count = 0;
    int max_count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            // If we find a zero, increment current streak
            current_count++; 
        } else {
            //If we find a 1, check if the streak we just finished is the biggest
            if(current_count > max_count) {
                max_count = current_count;
            }
            //Reset current streak to 0
            current_count = 0;
        }
    }

    //Last : Check one last time after the loop ends
    // (in case the array ends with the longest sequence of zeros)
    if(current_count > max_count) {
        max_count = current_count;
    }

    // Output results
    cout << "The longest sequence of 0s is: " << max_count << endl; 
    
    
    
            //sir's method
    
    
    int arr[] {0,0,1,1,1,1,0,0,0,0,0,0,0};
    int maxLen = 0, count = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
   
    
    for(int i = 1; i < n ; i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count > maxLen){
            maxLen = count;
        }
    }
    
    cout << maxLen << endl;
    
    
    
    
    // (Q 3)
    
    Given an array of integers, put all 1s to the end of the array, while 
    maintaining the relative position of all the other elements.
    
    a[] = {3,1,5,6,1,1,2,1,4}
    output[] = {3,5,6,2,4,1,1,1,1} 
    
    
    int a[] = {3,1,5,6,1,1,2,1,4};
    int size = sizeof(a)/sizeof(a[0]);
    int o[size];
    int j = 0;
    int count = 0;
    
    for(int i = 0;i<size ; i++){
        if(a[i] !=1){
            o[j] = a[i];
            j++;
        }
    }
    
    
    for(int i = j;i<size;i++){
        o[i] = 1;
    }
    
    //printing
    
    for(int i = 0;i<size;i++){
        cout << o[i] << " " ;
    }
    
    cout << endl ;
    
    
            //Sir's method
            
    int arr[] = {5,6,1,4,1,8,1,9};
    int pos = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0;i<n;i++){
        if(arr[i]!=1){
            arr[pos] = arr[i];
            pos++;
        }
    }
    while(pos<n){
        arr[pos] = 1;
        pos++;
    }
    
    //printing
    
    for(int i = 0; i<n;i++){
        cout << arr[i]<< " ";
    } 
    
    
    
    //(Q 4)
    
    /*
    Given an array of integers , reverse the array in groups of k.
    a = {3,5,1,4,7,8,5,8} , k =3
    o = {1,5,3,8,7,4,8,5}
    
    */ 
    int a[] = {3,5,1,4,7,8,5,6};
    int k = 3;
    int size = sizeof(a)/sizeof(a[0]);
    int pos = 0;
    bool flag = true;
    
    while(flag){
        int temp = a[pos];
        a[pos] = a[pos + k-1] ;
        a[pos + k-1] = temp;
        pos += k;
        cout << pos << endl ;
        
        flag = false;
        
        if( (size-pos) > 3){
            flag = true;
            
        }
        
        else if(0<(size-pos) && (size-pos)<4){ // last few;
            k = size-pos;
            flag = true;
        }
        
    }
    
    for(int i = 0;i<size ; i++){
        cout << a[i] << " " ;
    }
    
    cout << endl;
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
