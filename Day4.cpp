#include <iostream>
using namespace std;
#include <cmath>


int leng(int start) {
        int fStart = start;
        int le = 0;
        //length of start
          while(fStart!=0){
              fStart /=10;
              le++;
          }
          
        return le;
        
    }
    
    int isArm(int start, int le){
        int value = 0;
        while(start!=0){
            int rem = start%10;
            value += pow(rem,le);
            start/=10;
        }
            
            
            return value;
              
          
    }

int main()
{
    //(Q1)Given is the two number we have to find GCD (greatest common divison) of them
    
    //(M1) 
    int a = 8,b = 11,gcd; // ans --> 1
    
    for(int i = 1;i<=a && i<=b;i++){
        if(a%i == 0 && b%i == 0){
            
            gcd = i;
        }
    }
    
    cout<< gcd << endl;
    
    
    //(M2)
    
     int a1 = 10,b1 = 15,gcd1; // ans --> 5 
     int mini = min(a,b);
     
    
    for(int i = 1;i<= mini;i++){
        if(a1%i == 0 && b1%i == 0){
            
            gcd1 = i;
        }
    }
    
    cout<< gcd1 << endl;
    
    //(M3) 
    int x,y;
    cout << "Enter two numbers:";
    cin >> x >> y;
    int gcd2;
    int m = min(x,y);
    for(int i = m; i >= 1;i--)
    {
        if(((x%i)==0)&&(y%i==0)){
            gcd2 = i;
            break;
        }
    }
    
    cout<<gcd2<<endl;
    
    
    //(M4)
    int a4 =20,b4 =30;
    
    while(a4!=b4){
        cout << a4 << " " << b4 << endl;
        if(a4>b4){
            a4 = a4-b4;
        }
        else{
            b4 = b4-a4;
        }
        cout << a4 << " " << b4 << endl;
    }
    cout << "gcd is " << a4 << endl;
    
    
    
    
    
    //(Q2) Find LCM of given two number
    
    int c = 2,d = 7;
    int ma = max(c,d);
    int lcm = ma;
    cout<<lcm<<endl;
    int mul = 2;
    while(true){
        if(lcm%c == 0 && lcm%d == 0){
            break;
        }
        lcm = ma*mul;
        mul++;
        cout<<lcm<<endl;
    }
    cout<<lcm<<endl;
    
    cout << "ended" << endl;
    
    //(M2)  c*d/gcd
    
    
    //(Q4) Given two integers: Start and end, find all the armstrong numbers between start and end, including both.
    
    
    int start = 2,end = 153;
    

    
      while(start != (end + 1)){
          int fStart = start;
          int f2Start = start;
          int len = 0;
          int value = 0;
          
          //length of start
          while(fStart!=0){
              fStart /=10;
              len++;
          }


            //checking whether the given number is armstrong or not
            while(f2Start!=0){
            int rem = f2Start%10;
            value += pow(rem,len);
            f2Start/=10;
              
          }
          if(start == value){
              cout << "armstrong number is " << value << endl;
          }
          
          start++;
        
        
      }
      
      
      
      
      //(M2) by modular way
      int start1 = 2,end1 = 153;
      
      
    
    
      while(start1 != (end1 + 1)){
          int le = leng(start1);
          int value = isArm(start1,le);
          if(start1 == value){
              cout << "armstrong number is " << value << "and start is " << start1 << endl;
          }
          
          start1++;
        
        
      }
      
      


// (Q4) Half pyramid

/*

*
**
***
****
*****

*/

int n = 5;
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=i;j++){
        cout << "*" ;
    }
    cout << endl ;
}


//(Q5) Inverted half pyramid

/*
*****
****
***
**
*

*/
int n1 = 5;
for(int i = n1;i>=1;i--){
    for(int j = 1;j<=i;j++){
        cout << "*" ;
    }
    cout << endl ;
}


//(Q6) Half Numerical pyramid
/*
1 
12 
123 
1234 
12345
*/

int n2 = 5;
for(int i = 1;i<=n2;i++){
    for(int j = 1;j<=i;j++){
        cout << j ;
    }
    cout << endl ;
}

//(Q7) Half Numerical pyramid
/*
12345
1234 
123 
12 
1
*/

int n3 = 5;
for(int i = n3;i>=1;i--){
    for(int j = 1;j<=i;j++){
        cout << j ;
    }
    cout << endl ;
}


//(Q8) full pyramid

/*   
    *
   ***
  *****
 *******        
*********
*/

int n4 = 5;
for(int i = 1;i<=n4;i++){
    for(int j = n-i;j>=1;j--){
        cout << " " ;
    }
    for(int j = 1;j<=(i*2 - 1);j++) {
        cout << "*";
    }
    
    cout << endl;
}


//method 2 

int n5 = 5;
for(int i = 1;i<=n5;i++){
    for(int space = 1;space <=n5-i;space++){
        cout << " ";
    }
    int k= 0;
    while(k!=2*i-1){
        cout << "*";
        k++;
    }
    cout << endl;
}

//(Q 9) Print reverse full pyramid

/*

*********
 *******
  *****
   ***
    *
    
*/

int n6 = 5;
for(int i = 5;i>=1;i--){
    for(int space = 1;space <=(n6-i);space++){
        cout << " ";
    }
    int k= 0;
    while(k!=2*i-1){
        cout << "*";
        k++;
    }
    cout << endl;
}


    
    





        
        
      
          
      

    
    
      
      
    return 0;
}



