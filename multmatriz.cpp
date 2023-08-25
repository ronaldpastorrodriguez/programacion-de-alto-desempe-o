#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include<stdlib.h>
#include<time.h>

/* Multiplicación de matrices
Programa creado por Ronald Pastor Rodríguez
Fecha: 2023-08-21
Doctorado en Ciencias de la Computación
Curso Programación de Alto Desempeño
*/
int main() {
int comun=1200;
int n=comun; int m=comun; int p=comun; int q=12;
float A[n][m]; float B[p][q]; float C[n][q];
clock_t start, end;
srand(time(NULL));

/* Creación de matrices con datos aleatorios*/

for (int i = 0; i < n ; i++)
 {
  for (int j = 0; j < m; j++)
  { 
   A[i][j] = rand();  
  }
 }

for (int i = 0; i < p ; i++)
 {
  for (int j = 0; j < q; j++)
  { 
   B[i][j] = rand();  
  }
 }


/* Multiplicación de matrices común */
if (m==p)
{
 start=clock();
 ios_base::sync_with_stdio(false);
 for (int i = 0; i < n ; i++)
 {
  for (int j = 0; j < q; j++)
  { 
    C[i][j] =0;
    for (int k =0; k<m; k++)
    {
      C[i][j] += A[i][k]*B[k][j];  
    } 
  }
 }
 end=clock();
 double time_taken = double(end - start)/double(CLOCKS_PER_SEC);
     cout << "Time taken by matrix product for size : "<< n <<"x"<< m<<" "<< fixed
         << time_taken << setprecision(7);
     cout << " sec " << endl;
}
else
 cout<<"Las dimensiones de las matrices no son coherentes" <<endl;   

return 0;

}