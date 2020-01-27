#include<bits/stdc++.h>
using namespace std;//you can use cin.tie(0) to optimize the time complexity of the problem
 bool eitherprime(int n)
{

if(n<=1)
{
    
return false;

}
for(int i=2;i<=sqrt(n);i++)//this is the most optimized solution to find a number whether it is a prime or not!
{
    if(n%i==0)
{
        
return false;
    
}

}
return true;

}

vector<int> Solution::primesum(int A) {
  
  vector<int> mybaby={0,0};
 
   for(int j=1;j<A;j++){
   
     if(eitherprime(j)){
   
         if(eitherprime(A-j)){
  
            mybaby[0]=j;
      
          mybaby[1]=A-j;
       
          return mybaby;
            }
   
     }
   
 }
  

}
/*
int main(){
cout<<"Hello engineer !"<<endl;
cout<<"Having a tough time while coding ,No problem! we can get through it by doing a little extra effort!<<endl;
Solution a=new Solution();
vector<int>selena =a.primesum(54);
for(int i=0;i<selena.size();i++){
cout<<selena[i];
}
return 0;
}
*/

