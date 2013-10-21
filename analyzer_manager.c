#include "hadoop_api.c"

int main()
{
   int *ricky;
   ricky = new int[3];

   for(int i = 0;i<3;i++)
     ricky[i] = 9527;
   
   ricky[0]++;

   delete  [] ricky; 
   
   return 0;
}
