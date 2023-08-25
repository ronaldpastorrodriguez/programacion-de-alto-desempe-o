#include <iostream>
using namespace std;
#include <bits/stdc++.h>
/* Analisis de blucles for
Programa creado por Ronald Pastor Rodríguez
Fecha: 2023-08-21
Doctorado en Ciencias de la Computación
Curso Programación de Alto Desempeño
*/
int main() {
int MAX=1200;
float A[MAX][MAX]; float x[ MAX]; float y[MAX ];
cout<<sizeof A <<endl;
clock_t start, end;

/*Initialize A and x, assign y = 0 */

/* First pair of loops */
start=clock();
ios_base::sync_with_stdio(false);
for (int i = 0; i < MAX ; i++)
{
 for (int j = 0; j < MAX ; j++)
 { 
  y[i] += A[i][j]*x[j];  
 }
}
end=clock();
double time_taken = double(end - start)/double(CLOCKS_PER_SEC);
    cout << "Time taken by firts loop is : " << fixed
        << time_taken << setprecision(7);
    cout << " sec " << endl;    

/* Assign y = 0 */

/* Second pair of loops */
start=clock();
ios_base::sync_with_stdio(false);
for (int j = 0; j < MAX ; j++)
{
 for (int i = 0; i < MAX; i++)
 {
  y[i] += A[i][j]*x[j];
 }
}
end=clock();
double time_taken2 = double(end - start)/double(CLOCKS_PER_SEC);
    cout << "Time taken by second loop is : " << fixed
        << time_taken2 << setprecision(7);
    cout << " sec " << endl; 

}