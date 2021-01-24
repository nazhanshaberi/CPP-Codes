#include<iostream>
using namespace std;
int main() 
{
   int product[100][100], r1=5, c1=5, r2=5, c2=5, i, j, k;
   int a[5][5] = { {2, 4, 1, 4, 7} , {2, 3, 9, 4, 6} , {3, 1, 8,3, -5} , {1, 2, 3, 5, 6} , {2, 4, 7, 3, 3} };
   int b[5][5] = { {1, 2, 3, 5, 6} , {3, 6, 1, 7, 2} , {2, 4, 7, 3, 3} , {2, 4, 7, 3, 3} , {1, 2, 3, 5, 6} };
   
   if (c1 != r2) 
   
   {
      cout<<"Column of first matrix should be equal to row of second matrix";
   } else {  
      cout<<"The first matrix is:"<<endl;
      for(i=0; i<r1; ++i) {  
         for(j=0; j<c1; ++j)
            cout<<a[i][j]<<" ";
            cout<<endl;
      }
      cout<<endl;
      cout<<"The second matrix is:"<<endl;
      for(i=0; i<r2; ++i) {  
         for(j=0; j<c2; ++j)
            cout<<b[i][j]<<" ";
            cout<<endl;
      }
      cout<<endl;
      for(i=0; i<r1; ++i)
         for(j=0; j<c2; ++j) {
            product[i][j] = 0;
         }
      for(i=0; i<r1; ++i)
         for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k) {
               product[i][j]+=a[i][k]*b[k][j];
            } 
      cout<<"Product of the two matrices is:"<<endl;
      for(i=0; i<r1; ++i) {   
         for(j=0; j<c2; ++j)
            cout<<product[i][j]<<" ";
               cout<<endl;
      }
      
      cout<<product[i][j];
   }
   return 0;
}
