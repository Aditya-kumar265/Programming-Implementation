#include <iostream>
using namespace std;

int main()
{
    //What is Arrays    ?
    /*
    Sequences of value stored in contiguous manner.Array is a varibale that
    store multiple value of same data types in contiguous memory location.
    
    
    @ Syntax
    
    dataType arrayName[arraySize] ;  //declaration
    dataType arrayName[arraySize] = {value1,value2,...} //declaration and initialization.
    dataType arrayName[] = {value1,value2,...} //declaration and initialization.
    
    
    @accessing an Array
    
    a[i]
    
    */
    
    int a[5] = {1,2,3,4,5};
    
    cout << "array is : " << a[1] << endl;
    
    //printing an array
    
    int arr[] = {10, 20, 30, 40, 50};

    cout << "Array elements: ";
    for (int value : arr) {
        cout << value << " ";
    }
    cout << endl;
    
    //printing an Array
    int arra[] = {100, 200, 300, 400, 500};
    int size = sizeof(arra) / sizeof(arra[0]); // Calculate the number of elements

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
       cout << arra[i] << " ";
    }
    cout << endl;
    
    // (Q 1) Display Prime numbers between start and end range:
    
        //My Method
        
    for(int i =2;i<=1000;i++){
        bool flag = true;
        //Checking for prime
        for(int j = 2;j<i;j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }
        //Printing Prime : isPrime number = True ; Print 
        if(flag){
            cout << i << " is a prime number" << endl;
        }
    }
    
    // (Q 2) Find pair of divisor of 100 such that if we multiply those pair element then we will get 100.
    /*
    1*100
    2*50 
    4*25
    20*5
    5*20 
    10*10
    
    */
    
    // My Method
    
    int pair1 = 1;
    int pair2 = 8;
    int count = 0;
    int last   = pair2;
    
     cout << "(" << pair1 << " , " << pair2 << ")" << endl;
    while(true){
        bool flag = true;
        
        
        for(int j = 2;j<pair2;j++){
            if(pair2%j == 0 ){
                
                pair1 = pair1*j;
                pair2 = pair2/j;
                
                flag = false;
                if(pair1>pair2 && count == 0){
                    int copy = pair1;
                    pair1 = pair2;
                    pair2 = copy;
                    count++;
                }
                break;
            }
        }
        
        
        if(last!=pair2){
            cout << "(" << pair1 << " , " << pair2 << ")" << endl;
            
        }
        last = pair2;
        
        
        
        if(flag || (pair1 == pair2) ){
            break;
        }
        
        
        
    }
    
    
    
    // (Q 4) Given an array of integers, find the sum of all the elements in it.
    
    int n = 5;
    int given_arr[n];
    
    int sum1 = 0;
    for(int i = 0;i<n;i++){
            cin>>given_arr[i];
    }
    for(int i = 0;i<n; i++){
        sum1 +=given_arr[i];
    }
    cout << sum1 << endl;
    
    //Method 2 
    
    int ar[] = {3,5,6,7};
    int e = sizeof(ar)/sizeof(ar[0]);
    int sum2 = 0;
    for(int i = 0; i < e; i++){
        sum2 += ar[i];
    }
    cout << sum2 << endl;
    
    
    //(Q 5) Given an array of integers , find the average of all the numbers in it;
    
    int aa[] = {3,5,6,7};
    int size_of = sizeof(aa)/sizeof(aa[0]);
    cout << size_of<< endl;
    
    double sum3 = 0;
    for(int i = 0; i < size_of; i++){
        sum3 += aa[i];
    }
    
    float av = sum3/size_of;
    cout << "average is : " << av << endl;
    
    
    //(Q 6) Given an array of integers , find the minumum element in it.
    
    int numbers[] = {5,3,1,7};
    int min = numbers[0];
    for(int value:numbers){
        if(min > value){
            min = value;
        }
    }
    cout << min << endl;
    
    //Method 2 
    
    int size1 = sizeof(numbers)/sizeof(numbers[0]);
    int min1 = numbers[0];
    for(int i = 1; i <size1 ; i++){
        if(min1 > numbers[i]){
            min1 = numbers[i];
        }
    } 
    cout << min1 << endl;
    
    
    // (Q 7) Given an array of integers, find the max element in it.
    
    
    int number2[] = {7,2,10,5};
    
    int size2 = sizeof(number2)/sizeof(number2[0]);
    int max = number2[0];
    for(int i = 1; i <size2 ; i++){
        if(max < number2[i]){
            max = number2[i];
        }
    } 
    cout << max << endl;
    
    
    // (Q 8) Given an array of integers, find the max element in it
     int number3[] = {7,2,10,5};
    
    int size3 = sizeof(number2)/sizeof(number2[0]);
    int max4 = number2[0];
    int min4 = number2[0];
    for(int i = 1; i <size3 ; i++){
        if(max4 < number3[i]){
            max4 = number2[i];
        }
        else if(min4 > number3[i]){
            min4 = number3[i];
        }
    } 
    cout << max4 << endl;
    cout << min4 << endl; 
    
    
    //(Q 9) Given a Positive number , check if it is even or odd.
    
    int pos = 5;
    if(pos % 2 == 0){
        cout << "even" << endl;
    }
    else{
        cout << "odd "<< endl;
    }
    
    
        
    

    return 0;
}