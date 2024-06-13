#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Resultados {
    int valor_max;
    int valor_min;
};

int SumaArreglos(){
    /*
    Suma de elementos: Escribe un programa 
    que calcule la suma de todos los elementos de un arreglo de números enteros.
    */
    vector<int> array;
    short repeticion, valor, total = 0;
    cout << "¿Cuántos elementos tendrá el arreglo?" << endl;
    cout << ">>> ";
    cin >> repeticion;

    for (int i = 0; i < repeticion; i++)
    {
        cout << "Ingrese el valor de la posición: " << i << endl;
        cout << ">>> ";
        cin >> valor;
        array.push_back(valor);
    }

    for (int i = 0; i < array.size(); i++)
    {
        total += array[i];
    }

    cout << "El total de la suma de los valores del arreglo es: " << total << endl;   
    return total;
}

float PromedioArreglos(){
    /*
    Promedio de elementos: Escribe un programa 
    que calcule el promedio de todos los elementos de un arreglo de números enteros.
    */
    vector<int> array;
    short repeticion, valor, total = 0;
    float promedio; 
    cout << "¿Cuántos elementos tendrá el arreglo?" << endl;
    cout << ">>> ";
    cin >> repeticion;

    for (int i = 0; i < repeticion; i++)
    {
        cout << "Ingrese el valor de la posición: " << i << endl;
        cout << ">>> ";
        cin >> valor;
        array.push_back(valor);
    }

    for (int i = 0; i < array.size(); i++)
    {
        total += array[i];
    }

    promedio = static_cast<float>(total) / repeticion;

    cout << "El promedio del arreglo es: " << promedio << endl;


    return promedio;
}

Resultados MayorMenorArreglos(){
    /*
    Mayor y menor elemento: Escribe un programa que 
    encuentre el mayor y el menor elemento en un arreglo de números enteros.
    */
    vector<int> array;
    short repeticion, valor, max, min;
    cout << "¿Cuántos elementos tendrá el arreglo?" << endl;
    cout << ">>> ";
    cin >> repeticion;

    for (int i = 0; i < repeticion; i++)
    {
        cout << "Ingrese el valor de la posición: " << i << endl;
        cout << ">>> ";
        cin >> valor;
        array.push_back(valor);
    }

    max = array[0];
    min = array[0];

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if(array[i] < min)
        {
            min = array[i];
        }        
    }
    cout << "El mayor es: " << max << endl;
    cout << "El menor es: " << min << endl;
    Resultados res;
    res.valor_max = max;
    res.valor_min = min;
    /*
    Resultados resultado = MayorMenorArreglos();
    cout << "El mayor valor es: " << resultado.valor_max << endl;
    cout << "El menor valor es: " << resultado.valor_min << endl;
    Así se debe almacenar en el main (Abel 19/05/24)
    */
    return res;
}

vector<int> Duplicados(){
    /*
    Duplicados: Escribe un programa que encuentre y elimine 
    los elementos duplicados de un arreglo.
    */

    vector<int> array;
    short repeticion, valor, elemento;
    cout << "¿Cuántos elementos tendrá el arreglo?" << endl;
    cout << ">>> ";
    cin >> repeticion;

    for (int i = 0; i < repeticion; i++)
    {
        cout << "Ingrese el valor de la posición: " << i << endl;
        cout << ">>> ";
        cin >> valor;
        array.push_back(valor);
    }

  
    // Ordenar el vector para que los elementos duplicados estén juntos
    sort(array.begin(), array.end());

    // Eliminar elementos duplicados usando la función unique
    auto it = unique(array.begin(), array.end());
    
    // Redimensionar el vector para que tenga solo elementos únicos
    array.resize(distance(array.begin(), it));

    /*
    vector<int> arreglo =  Duplicados();
    for (int i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << endl;
    }
    Así se debe almacenar en el main (Abel 19/05/24)

    */

    return array;
}



int main(){
    
    return 0;
}