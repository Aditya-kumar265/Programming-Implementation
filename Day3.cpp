#include <bits/stdc++.h>

// #include<ioStream>  @ as we already done with #include <bits/stdc++.h then no need to include any other library as it all done in "bits/stdc++.h"
using namespace std;
int main(){
   //(Q 9) Check if given number is pallindrome or not ?
   
   // Pallindrome =  A palindrome number is a digit sequence that remains identical when its digits are reversed, reading the same forwards and backwards (e.g., 121, 16461, 88)
   int num = 12021;
   int copy = num;
   int reversed = 0;
   while(num != 0)
   {
    
    reversed = reversed*10 + num%10;
    cout << "reversed = " << reversed << endl;
    num /= 10;
    cout << "num =" << num << endl;
   }
   if(copy == reversed){
       cout << "Pallindrome" << endl;
   }
   else
   {
       cout << "Not Pallindrome" << endl;
   }
   
   // Sir Method
   
   int n = 88788;
   int rev = 0;
   int temp = n;
   while(temp != 0)
   {
       rev = rev*10 + temp%10;
       cout << rev << endl;
       temp /= 10;
   }
   
   if( n == rev)
   {
       cout << "yes" << endl;
   }
   else 
   {
       cout << "No";
   }
   
   
   /* ( Q 10) Given a number x , determine whether the given number is ArmStrong's number or not.
              A positive integer of n digits is called an Armstrong number of order n ( order is the number digits )
              if abcd.... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + .....
   
   */
   
   int x = 153;
   int temp1 = x;
   int len = 0;
   
   //calculating length of number
   
   while(temp1 != 0)
   {
       temp1 /= 10;
       len++;
   }
   
   //calculating the sum of number.
   int temp2 = x;
   int sum = 0;
   while(temp2 != 0)
   {
    int i = 1;
    
    // calculating Digit * order( or lenth)
    for(int rep = 1 ; rep <= len;rep++){
        i *= (temp2%10);
    }
    
    
    sum += i;
    temp2/=10;
   }
   
   //Checking whether number is Armstrong or not 
   if(x == sum)
   {
       cout << "Armstrong" << endl;
   }
   else
   {
       cout << "Not Armstrong" << endl;
   }
   
   
   // Sir Method 
   
   int n1 = 9473;
   int tem = n1;
   int tem1 = n1;
   int ans = 0;
   int len1 = 0;
   
   while(tem1 != 0)
   {
       tem1 /= 10;
       len1++;
   }
   cout << len1 << endl;
   
   while(tem != 0){
       int q = tem%10;
       ans += pow(q,len1); // pow(q,3) = q*q*q
       tem /=10;
   }
   
   if(ans == n1)
   {
       cout << "Armstrong number!" << endl;
   }
   else
   {
       cout << "Not Armstrong number!" << endl;
   }
   
   // ( Q 11 )Given a positive number , check if it is a prime number or notl
   
   int g_num = 6;
   // Prime number = number exactly divisible by only two number which is  1 and itself
   int flag1 = 1;
   for(int a1 = 2; a1<g_num ; a1++)
   {   
       if(g_num == 1)
       {
           cout << "Neither prime nor composite" << endl; 
           flag1 = 0;
           break;
       }
       else if((g_num%a1) == 0)
       {
           cout << "Not Prime" << endl;
           flag1 = 0;
           break;
           
       }
    
       }
       
   
   
   if(flag1)
   {
      cout << "Prime" << endl; 
   }
  
   
   // sir method 
   
   int nu = 6;
   int flag = 1;
   
   for(int i = 2; i< nu; i++)
   {
       if(nu%i == 0)
       {
           cout << "Not a prime number! " << endl ;
           flag = 0;
           break;
       }
   }
   if(flag)
   {
       cout << "Prime" << endl ;
   }
   
   //(Q 12) Given a postive number ,print all its divisors between 1 to 100.
   
   int n2 = 17;
   int d = 1;
   for(; d <= 100 ; d++)
   {
       if(n2%d == 0)
       {
           cout << d << endl;
           if(n2 == d)
           {
               break;
           }
       }
   }
   
   cout << "value of d = " << d << endl;
   
   // Sir method 
   
   int last1 = min(n2,100);
   for(int i2 = 1;i2<=last1 ; i2++)
   {
       if(n2%i2 == 0)
       {
           cout << i2 << endl;
       }
   }
   
   //( Q 13) Given a positive number , find its factorial;
     int n3 = 18;
  
   for(int d1 = 1;d1 <= n3 ; d1++)
   {
       if(n3%d1 == 0)
       {
           cout << d1 << endl;
           
       }
   }
   
    // Sir method 
   
   
   for(int i3 = 1;i3<=n3 ;i3++)
   {
       if(n3%i3 == 0)
       {
           cout << i3 << endl;
       }
   }
   
   
   // ( Q 14) Given a number n, print the multiplication table of it , till its first 10 multiples.
   int mul = 7;
   for(int start = 1; start <= 10 ; start++){
       cout << "7 * " << start << "  = " << mul*start << endl ;
   }
   
   // ( Q 15 ) Write a code to find the power of a given number.
   // like a,b --> a^b ---> without using pow()
   int a5 = 2,b5 = 4;
   int pow = 1;
   for(int i = 1; i<=b5; i++ )
   {
       pow *=a5;
   }
   cout << "a5^b5 = " << pow << endl;
   
   
   
   
    
    return 0;
}