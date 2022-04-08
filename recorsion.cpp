#include <iostream>
using namespace std;
int recursion(int a) {
    //base case for recursion to stop
    if(a ==1)  
        return 1;
    return a * recursion(a-1);
}
void recorsionfun(int a){
    if(a < 0){ 
        return;
    } 
    else{
        cout << a << " ";
        recorsionfun(a -1);
        cout << a << " ";
    }
}
int fibo(int n){
    if(n==0) return 0;
    if(n <=2) return 1;

    return fibo(n-1) + fibo(n-2);
}
int fun1(int x, int y)
{
    if (x == 0)
        return y;
    else
        return fun1(x - 1, x + y);
}
short fun1(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + fun1(n / 2);
}
void fun2(int n)
{
if(n == 0)
    return;
 
fun2(n/2);
cout << n%2 << " ";
}

void fun3(int n)
{
   int i = 0;  
   if (n > 1){ 
       fun3(n - 1);  
   }
     
   for (i = 0; i < n; i++)
     cout <<  i  << " ";
    cout << "\n";
}
#define LIMIT 1000
void fun4(int n)
{
  if (n <= 0)
     return;
  if (n > LIMIT)
    return;
  cout << n <<" ";
  fun4(2*n);
  cout << n <<" ";
}

int main() {
    short a = 5;
    // cout << fun1(a);
    // for(int i=1;i<a;i++){
    //     fun2(i);
    //     cout << "\n";
    // }
    // fun2(a);
    // fun3(a);
    fun4(95);
    // recorsionfun(a);
    // for(int i=0;i<a;i++){
    //     cout << fibo(i) << " ";
    // }
    return 0;
}
/*
    5 + 2
    4 + 7
    3 + 11
    2 + 14
    1 + 16
    0 + 17
*/