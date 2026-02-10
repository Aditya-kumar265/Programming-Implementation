#include <iostream>
using namespace std;

int main()
{
    //(Q 1) Find the 2nd largetst element in an array of distinct array.
    
    int a[] = {1,2,8,4,7,6};
    int max1 = a[0];
    int max2 = a[0];
    int size = sizeof(a)/sizeof(a[0]);
    for(int i = 1;i<size;i++){
        if(max1<a[i]){
            max2 = max1;
            max1 = a[i];
        }
        else if((max2 < a[i]) /*&& (a[i] < max) -> not needed because this statement will run when a[i] < max*/){
            max2 = a[i];
        }
    }
    cout << "2nd largest numbers in array is :" << max2 << endl;
    
    // Method 2nd
    
    int max3 = a[0];
    int max4 = a[0];
    
    for(int i = 0;i<size ; i++){
        max3 = max(max3,a[i+1]);
    }
    for(int i = 1; i <size ; i++){
        if(a[i]<max3){
            max4 = max(max4,a[i]);
        }
    }
    
    cout << "2nd largest numbers in array is :" << max2 << endl;
    
    
    // ( Q2) Given an array of integers, reverse it.
        //part 1 - Can create a new array to store reverse.
        
        
        int arr[] = {1,2,8,4,7,6};
        int n = sizeof(arr)/sizeof(arr[0]);
        int rev_arr[n];
        for(int i = 0;i < n ; i++){
            rev_arr[i] = arr[size-i-1];
        }
        
        
        for(int i = 0;i<n;i++){
            cout << "member of revese array is " << rev_arr[i] << endl;
        }
        
        cout << "end " << endl;
        
        //method 2nd
        int arr1[] = {1,2,8,4,7,6};
        int n1 = sizeof(arr1)/sizeof(arr1[0]);
        int j = 0;
        int rev_arr1[n1];
        for(int i = n1-1;i >= 0 ; i--){
            rev_arr1[j] = arr1[i];
            j++;
        }
        
        
        for(int i = 0;i<n1;i++){
            cout << "member of revese array is " << rev_arr1[i] << endl;
        }
        
        cout << "end" << endl;
        
            //Part 2 - > Without using any other array.
            
            
        int arra[] = {1,2,8,4,7,6,5} ;
        int size2 = sizeof(arra)/sizeof(arra[0]);
        for(int i = 0;i<(size2/2  ); i++){
            int hold = arra[i];
            arra[i] = arra[size2-1-i];
            arra[size2-1-i] = hold;
        
        }
        
        for(int i = 0;i<size2;i++){
            cout << "member of revese array is " << arra[i] << endl;
        }
        
        //Method 2nd
        
        int a4[] = {1,2,3,4,5,6,7};
        int n4 = sizeof(a4)/sizeof(a4[0]);
        int l = 0, r = n4-1 , temp;
        while(l<r) //abb humara code bas middle aane se ek pahle ruk jayega chalna
        {
            temp = a4[l];
            a4[l] = a4[r];
            a4[r] = temp;
            
            l++;
            r--;
        }
        
        for(int i = 0 ; i<n4 ;i++){
            cout << a4[i] << endl;
        }
        
        
        //(Q 3) Given an array of integers, left rotate the array by 1 position.
        
        /*
        a[] = {4,6,2,1,8}
        output : [6,2,1,8,4]
        */
        
        int x[] = {4,6,2,1,8};
        int size5 = sizeof(x)/sizeof(x[0]);
        
        int first = x[0];
        
        
        for(int i = 1; i < size5 ; i++){
            x[i-1] = x[i];
            cout << size5-1  << " " << i << endl;
         /*   if(i == (size5-1)){
                x[size5-1] = first; 
            }
            
            */
        }
        x[size5-1] = first;
        
        for(int i = 0; i<size5 ; i++){
            cout << "element of an array is : " << x[i] << endl;
        }


    //( Q 3) Given an array of integers, rotate the array by d positions on the left.
    /*
    let d = 3
    a[] = {4,6,2,1,8};
    op[] = {1,8,4,6,2]
    
    */
    
    int a[] = {4,6,2,1,8};
    int d = 3;
    int size = sizeof(a)/sizeof(a[0]);
    int first = a[0];
    int second = a[1];
    int third = a[2];
    for(int i = 0;i<size-d;i++){
        a[i] = a[i+d];
    }
    a[size-d] = first;
    a[size-d+1]  = second;
    a[size -d+2] = third;
    
    for(int i = 0;i<size;i++){
        cout << "the element is : " << a[i] << endl;
    }
    
    cout << "end" << endl;
    
    // Method 2 
     
    int a1[] = {4,6,2,1,8};
    int d1 = 3;
    int size1 = sizeof(a)/sizeof(a[0]);
    int rep[d1];
    for(int i = 0;i<size1-d1;i++){
        if(i<d1){
            rep[i] = a1[i];
            rep[i+1] = a1[i+1];
        }
        rep[d-1] = a1[d-1];
        a1[i] = a1[i+d];
    }
    for(int i = 0;i<d ; i++){
    a1[size1-d1 + i] = rep[i];
    a1[size1-d1+i]  = rep[i];
    a1[size1 -d1+i] = rep[i];
    }
    
    
    
    for(int i = 0;i<size1;i++){
        
        cout << "the element is : " << a1[i] << endl;
    }
    
    
    //Sir's Method
    
    int f[] = {1,2,10,3,4,7,8};
    int n = sizeof(f)/sizeof(f[0]);
    int g = 3;
    
    while(g!=0){
        int temp = f[0];
        for(int i = 0;i<n-1;i++){
            f[i] = f[i+1];
        }
        f[n-1] = temp;
        g--;
    }
    
    for(int i = 0; i<n;i++){
        cout<<f[i] << " ";
    }
    
    cout << endl;
    
    //time complexity = O(n*d)
    
    //sir's method 2
    
    
    
    int arr[] = {1,8,4,6,2};
    int n3 = sizeof(arr)/sizeof(arr[0]);
    int d3 = 3;
    int brr[n3];
    
    for(int i = d3;i<n3;i++){
        brr[i-d3] = arr[i];
        
    }
    
    for(int i = 0;i<n3;i++){
        brr[n3-d3+i] = arr[i];
    }
    
    for(int i = 0;i<n3;i++){
        cout<<brr[i] << " " ;
    }
    
    //time complexity = O(n)
    //space complexity = O(n)
    
    
    cout << endl;
    
        
        
        
        
        
        
        
        
        
        
        
    
    
    
    

    return 0;
}
