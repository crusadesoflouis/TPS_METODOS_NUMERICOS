#ifndef _matrix_h__

#include <iostream>
#include <vector>
#include <stdio.h>


using namespace std;
class matrix {
public:

    // Fila& operator[] (unsigned int  x) {
    //   return filas[x];
    // }

    ~matrix();
    matrix(unsigned int n,unsigned int m);
    void agregar_elemento(uint fila, uint columna, float elemento);
    void mostrar();
    void trasponer(matrix &T);
    void resta_matrix_vector(vector<float> &v);
    void division_escalar(unsigned int escalar);
    void multiplicacion(matrix &B,matrix &R);
    unsigned int dame_filas();
    unsigned int dame_columnas();
    float dame_elem_matrix(unsigned int fila, unsigned int columna);
    vector<float> vector_promedio();



private:

    vector<vector <float> > matriz;
    unsigned int filas;
    unsigned int columnas;


};

#endif