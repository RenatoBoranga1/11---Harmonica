#include <iostream>

using namespace std;

int main(){
  
int i,n;
float s=0.0;
   
   cout<< "";
   cin >> n;
   
for(i=1;i<=n;i++)
   {
      if(i<n)
       {
     s+=1/(float)i;
       }
     if(i==n)
     {
     s+=1/(float)i;
     }
     }
     
	printf("%.8f",s);
}  
