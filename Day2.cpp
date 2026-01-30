// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Giving a meaningful identifier to a variable.
    /*      PART 1
    
    int age = 20;
    double cgpa = 9.2;
    bool isGraduate = true;
    char grade = 'A';
    string name = "Rahul";
    
    cout << age << endl << cgpa << endl << isGraduate << endl <<
    grade << endl << name << endl;  //we can write this but try to avoid these kind of practices.
    
    // (Q 1) Print 1 to 10 on screen , with every number of new line.
    
    for(int i = 1; i<=10; i++)
    {
        cout << i << endl;
    }
    
    // (Q 2) Print all the even numbers between 1 to 10 , each separated by a space 
    
    for (int i=1; i<= 10; i++)
    {
        if(i%2 == 0 && i != 10)
        {
            cout << i << " ";
        }
        else if(i == 10)
        {
        cout << i << endl;
        }
    }
    
    //method 2
    
    for(int i = 2; i<= 10 ; i+=2)
    {
        cout << i << " ";
    }
    cout << endl ;
    
    // (Q 3) Print all the odd numbers from 2 to 20 , each separted by '@'
    
    for (int i = 3; i<=20 ; i++)
    {
        if(i%2 != 0 && i !=19)
        {
            cout << i << "@";
        }
        else if (i == 19)
        {
            cout << i << endl;
        }
    }
    
    // Method 2
    
    for (int i = 3; i<=20 ; i+=2)
    {
        cout << i << "@";
    }
    cout << endl;
    
    */
    
    // ( Q 4) Initialise length and breadth of a rectangle and then print its area on the screen;
    
    int len = 5;
    int breadth = 8;
    int area = len*breadth;
    cout << area << endl;
    
    double len1 = 10;
    double breadth1 = 5;
    double area1 = len1*breadth1;
    cout << area1 << endl; 
    
    
    // Take an int as input from user and print hte double of it.
    
    int a;
    cin >>a;
    cout << 2*a << endl;
    
    // ( Q 5) Given an integer , write a code to print the sum of all the digits of that integer;
    
    int value ;
    cin >> value;
    
    int sum = 0;
    while(!(value == 0))
    {
      
      sum +=(value % 10);
      value = value/10;
    }
    
    cout << sum << endl ;
    
    
    //( Q 6) Given an integer , check if it represents a valid binary representation or not;
    /*
    n = 10001001001 -> yes
    n = 10010201001 -> no 
    */
    
    int bin ;
    cin >> bin;
    int flag = 1;
    
    while(bin)
    {
        if((bin%10 != 0) && (bin%10 != 1))
        {
           flag = 0;
           break;
        }
        bin = bin/10;
    }
    cout << flag << endl;
    if(flag)
    {
        cout << "It's a binary number" << endl;
    }
    else{
        cout << "It's not a binary number" << endl;
    }
    
    //sir's Method
    
    int n = 1000100101;
    int digit = 0;
    int flag1 = 0;
    while(n!=0)
    {
        digit = n%10;
        if((digit !=0) && (digit != 1)){
            cout << "No" << endl;
            flag1 = 1;
            break;
        }
        n = n/10;
    }
    if(flag1 == 0)
    {
        cout << "Yes" << endl;
    }
    
    
    // ( Q 7) Given two integers , write a code to swap them.
    
    /*
    part1- with using extra variable.
    part2- without using extra variable.
    */
    
    //part 1
    int e = 4;
    int f = 6;
    int g = e;
    e = f;
    f = g;
    cout << "reverse integer are : " << e << " , " << f << endl ;
    
    //part 2 
    
    int h = 4, i = 6;
    
    h = h+i; // 4 + 6
    i = h-i; //10 - 6
    h = h-i; //10 -4
    
       //method 2 
    int j = 4, k = 6;
    j = j^k;
    k = j^k;
    j = j^k;
    
    cout << "reverse integer are : " << h << " , " << i << endl ;
    
    //( Q 8) Given 3 numbers , print the maximum and minimum among them.
    
    int m = 3, n1 = 6 , o = 4,max,min;
    /*Why i didn't initialize max = 0 and min = 0 . Let we have did this then 
    (case 1 ) if m  = m = -1, n1 = -2 , o = -4 
     then even max needed to be = -1 but max would have been = 0

     (Case 2) if m= 1 , n1 = 2, o = 3
     then even min needed to be = 1 but min would have been = 0 which is wrong.
    */
    
    if(m>n1){
        max_ = m;
        min_ = n1;
    }
    else{
        max_ = n1;
        min_ = m;
    }
    
    if(max_ < o){
        max_ = o;
    }
    else if(min_ > o){
        min_ = o;
    }
    
    cout << "Max : " << max_ << " , " << "Min : " << min_ << endl;


    //sir mehtod

    int a = 1, b = 5 , c = 3;
    // ans : min1 = 1, max1 = 5;
    
    int min1 = a, max1 = a;
    
    if(b>max1)
    {
        max1 = b;
    } 
    else if(b<min1)
    {
        min1 = b;
    }
    
    if(c>max1)
    {
        max1 = c;
    } 
    else if(c<min1)
    {
        min1 = c;
    }
    
    cout << min1 << " " << max1 << endl;

    /* why i use max_ , min_ and max2,min1 and not max and min simply 
    because max and min are built in function and when we have used max , min as identifier then they have lost their functionality and 
    have act as simply variable not as function
    
    */

    // Method 2 

    cout << max(2,4) << endl;
    
    cout << min(2,4) << endl;
    
    int x = 1,y = 2,z = 3;
    cout << "max_value : " << max(x,max(y,z)) << ", min_value : " << min(x,min(y,z)) << endl;
    

    
    
    
    
    
    
    return 0;
}
