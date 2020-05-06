#include<iostream>
typedef   long long int               ll;
ll gcd(ll a,ll b){
  ll c;
  if(b == 0){
    return a;
  }
  else
    c= a % b;
    return gcd(b,c);
}
ll lcm(ll a, ll b){
  return a*b/gcd(a,b);
}
int main(){
  int a,b;
  std::cin>>a>>b;
  std::cout<<lcm(a,b);
}
