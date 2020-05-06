#include<iostream>
 int fib(int n){
   long long F[n]={0};
   F[0]=0;
   F[1]=1;
   for(int i=2; i<=n;i++)
   {
     F[i]=(F[i-1]%10+F[i-2]%10)%10;
   }
   return F[n];
}

int main(){
  int n;
  std::cin>>n;
  std::cout<<fib(n)<<" ";
}
