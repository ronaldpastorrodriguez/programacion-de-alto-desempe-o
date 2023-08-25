#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include<stdlib.h>
#include<time.h>

/* Multiplicación de matrices por bloques
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


/* Multiplicación de matrices por bloques */
if (m==p)
{int Block=4;
  
 start=clock();
 ios_base::sync_with_stdio(false); 
 for (int ii = 0; ii < n; ii+=Block) {
  for (int jj = 0; jj < q; jj+=Block) {
    for (int kk = 0; kk < m; kk+=Block) {
      for (int i = ii; i < ii+Block; i++) {
        for (int j = jj; j < jj+Block; j++) {
          for (int k = kk; k < kk+Block; k++) {
            C[i][j] += A[i][k]*B[k][j];
          }
        }
      }
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