## UVA_11417_GCD_35
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2412
+ Difficulty : ★☆☆☆☆
-------
```c++ 
// You have to know gcd;
// First solution:
int gcd(int a,int b)
{
  while(a!=0&&b!=0)
  {
    if(a>b)
    {
      a=a%b;
    }
    else if(b>a)
    {
      b=b%a;
    }
  }
  if(a>=b)
  {
    cout<<a;
  }
  else if(b>=a)
  {
    cout<<b;
  }
}
```
-------
```c++
// Second solution:
int gcd(int a,int b)
{
  if(b==0)
  {
    return a;
  }
  if(b!=0)
  {
    return(b,a%b)
  }
}
```
-------
```c++
// Third solution
int gcd(int a,int b)
{
  while(a!=0&&b!=0)
  {
    while(b!=0)
    {
      int temp
      temp=b;
      b=a%b;
    	a=temp;
    }
    return a;
  }	
}
```
