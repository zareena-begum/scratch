#include <iostream>
#include <cstdio>
#include<string.h>
#include<string>
using namespace std;

int main() {
    // Complete the code
std::string arr[20] ={"one","one","one","one","one","one","one","one","one","one"};
 int i, a,b;
 
 cin>>a>>b;
  for(i=a;i<=b;i++)
  { 
    printf("%s",arr[i-1]);
    
  }
for (i=10;i<=b;i++)
   {
       
    i%2==0?printf("even"):printf("odd");
   
   }
  
  
} 
   
 