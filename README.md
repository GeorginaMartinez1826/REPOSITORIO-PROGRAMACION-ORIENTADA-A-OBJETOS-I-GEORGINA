#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <chrono>
#include <iomanip>
#include <set>
using namespace std;
using namespace chrono;

//GENERAR NUMEROS aleatorios
void aleatorios(vector<int>&array) {
    int numeros, n;
    cout<<"   Ingrese la cantidad de terminos: ";
	cin>>n;
	array.clear();
	//srand(time(NULL));
	
	for(int i=0; i<n; i++) {
	   numeros = 1+rand() % 100;
	   array.push_back(numeros);
	}
}
	   
//MOSTRAR NUMEROS GENERADOS
void mostrar(const vector<int>& array) {
	for(int numeros : array) {
	    cout<<numeros<<" ";
	}
	cout<<endl;
}

//MOSTRAR VALORES EN FORMA Descendente
void mostrarDescendente(const vector<int>& array) {
    for(int i=array.size()-1; i>=0; i--){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

//METODO DE BUBBLE Sort
void bubbleSort(vector<int>& array) {
    int aux;
    
    for(int i=0; i<array.size(); i++){
		for(int j=0; j<array.size()-1; j++){
			if(array[j] > array[j+1]) {
			   aux = array[j];
			   array[j] = array[j+1];
			   array[j+1] = aux;
			}
		}
	}
}

//METODO DE INSERTION Sort
void insertionSort(vector<int>& array) {
    int m, i, j;
    
    for(int i=1; i<array.size(); i++) {
	    m = array[i];
	    j = i-1;
	        
	    while(j>=0 && array[j]>m) {
	         array[j+1] = array[j];
	         j = j-1;
	    }
	    array[j+1] = m;
	}
}

//METODO DE SELECTION Sort
void selectionSort(vector<int>& array) {
    int minValor;
	int temp;
	
	for(int i=0; i<array.size()-1; i++) {
	    minValor = i;
	    for(int j=i+1; j<array.size(); j++) {
	        if(array[j]<array[minValor]) {
	           minValor = j;
	        }
	    }
	    temp = array[i];
	    array[i] = array[minValor];
	    array[minValor] = temp;
	}
}

//METODO DE MARGE SORT 
void merge(vector<int>& array, int left, int mitad, int right) {
    int i, j, k;
    int n1 = mitad - left + 1;
    int n2 = right - mitad;
    
    vector<int> L(n1);
    vector<int> R(n2);
    //Copiar elementos de la parte izquierda
    for(i=0; i<n1; i++) {
        L[i]=array[left + i];
    }
    //Copiar elementos de la parte derecha
    for(j=0; j<n2; j++) {
        R[j]=array[mitad + 1 + j];
    }
        
    i = 0;
    j = 0;
    k = left;
    
    while(i<n1 && j<n2) {
        if(L[i]<=R[j]) {
            array[k]=L[i];
            i++;
        } else {
            array[k]= R[j];
            j++;
        }
        k++;
    }
    
    while(i<n1) {
        array[k]=L[i];
        i++;
        k++;
    }
    
    while(j<n2) {
        array[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& array, int left, int right) {
    if(left<right) {
        int mitad = left + (right - left) / 2;
        
        mergeSort(array, left, mitad);
        mergeSort(array, mitad + 1, right);
        merge(array, left, mitad, right);
    }
}

//METODO DE QUICK Sort
int dividir(vector<int>& array, int low, int high) {
    int pivote = array[high];
    int i = low - 1;
    
    for(int j=low; j<high; j++) {
        if(array[j]<pivote) {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return i + 1;
}

void quickSort(vector<int>& array, int low, int high) {
    if(low<high) {
        int A = dividir(array, low, high);
        quickSort(array, low, A - 1);
        quickSort(array, A + 1, high);
    }
}

//METODO DE COUNTING Sort
void countingSort(vector<int>& array) {
    int max=100;
    
    vector<int> contador(max + 1, 0);
    
    for(int i=0; i<array.size(); i++) {
        contador[array[i]]++;
    }
    int posicion = 0;
    
    for(int i=1; i<=max; i++) {
        while(contador[i]>0) {
            array[posicion] = i;
            posicion++;
            contador[i]--;
        }
    }
}
//resultados DE COMPARAR LOS METODOS 
void mostrarResultados(string nombre, double tiempo) {
    cout<<left<<setw(20)<<nombre<<right<<setw(15)<<tiempo<<" Microsegundos"<<endl;
}

//COMPARAR METODOS
void compararMetodos(const vector<int>& valores) {
    int duracion;
    //BUBBLE SORT
        vector<int> bubble = valores;
        auto inicio = high_resolution_clock::now();
        bubbleSort(bubble);
        auto fin = high_resolution_clock::now();
        double tiempoBubble = duration_cast<duration<double, micro>>(fin - inicio).count();
        
        //INSERTION SORT
        vector<int> insertion = valores;
        inicio = high_resolution_clock::now();
        insertionSort(insertion);
        fin = high_resolution_clock::now();
        double tiempoInsertion = duration_cast<duration<double, micro>>(fin - inicio).count();
        
        //SELECTION SORT
        vector<int> selection = valores;
        inicio = high_resolution_clock::now();
        selectionSort(selection);
        fin = high_resolution_clock::now();
        double tiempoSelection = duration_cast<duration<double, micro>>(fin - inicio).count();
        
        //MERGE SORT
        vector<int> mergeVector = valores;
        inicio = high_resolution_clock::now();
        if(!mergeVector.empty()) {
            mergeSort(mergeVector, 0, mergeVector.size() - 1);
        }
        fin = high_resolution_clock::now();
        double tiempoMerge = duration_cast<duration<double, micro>>(fin - inicio).count();
        
        //QUICK SORT
        vector<int> quick = valores;
        inicio = high_resolution_clock::now();
        if(!quick.empty()) {
            quickSort(quick, 0, quick.size() - 1);
        }
        fin = high_resolution_clock::now();
        double tiempoQuick = duration_cast<duration<double, micro>>(fin - inicio).count();
        
        //COUNTING SORT
        vector<int> counting = valores;
        inicio = high_resolution_clock::now();
        countingSort(counting);
        fin = high_resolution_clock::now();
        double tiempoCounting = duration_cast<duration<double, micro>>(fin - inicio).count();
        
        cout<<endl;
        cout<<" TIEMPO DE EJECUCIÓN DE TODOS LOS MÉTODOS"<<endl;
        cout<<endl;
        cout<<left<<setw(20)<<"  Algoritmos: "<<right<<setw(15)<<"   Tiempo: "<<endl;
        cout<<endl;
        
        mostrarResultados("  Bubble Sort", tiempoBubble);
        mostrarResultados("  Insertion Sort", tiempoInsertion);
        mostrarResultados("  Selection Sort", tiempoSelection);
        mostrarResultados("  Merge Sort", tiempoMerge);
        mostrarResultados("  Quick Sort", tiempoQuick);
        mostrarResultados("  Counting Sort", tiempoCounting);
}

//OPCION PARA REGRESAR AL MENU 
void continuarMenu(vector<int>& array) {
    int opcion;
    bool salir = false;
    cout<<"   Desea continuar con el programa..."<<endl;
    cout<<"   1. Regresar al menu principal"<<endl;
    cout<<"   2. Salir del programa"<<endl;
    cin>>opcion;
    if(opcion==2) {
       salir =true;
    }
}


int main() 
{
    vector<int> valores;
    
    int puntos;
    int opcion;
    int metodo;
    bool salir = false;
    srand(time(NULL));
    
    do 
    {
    cout<<" ========================================="<<endl;
    cout<<"                    MENÚ                  "<<endl;
    cout<<" ========================================="<<endl;
    cout<<"1. Generar números aleatorios y mostrarlos"<<endl;
    cout<<"2. Mostar números generados"<<endl;
    cout<<"3. Ordenar con un método"<<endl;
    cout<<"4. Mostrar resultados"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<endl;
    
    cout<<"Ingrese un numero según el menú: ";
    cin>>puntos;
    cout<<endl; 
    
    switch (puntos)
    {
        case 1: 
        {
            aleatorios(valores);
            cout<<"   Los numeros aleatorios son: ";
            mostrar(valores);
            cout<<endl;
            continuarMenu(valores);
            
            break;
        }
            
        case 2: 
        {
            cout<<endl;
            cout<<"Los numeros aleatorios son: ";
            mostrar(valores);
            cout<<endl;
            continuarMenu(valores);
            break;
        }
            
        case 3: 
        {
            do {
        
            cout<<"   -----MÉTODOS DE ORDENAMIENTO-----"<<endl;
            cout<<"   3.1. Bubble Sort (Método burbuja)"<<endl;
            cout<<"   3.2. Insertion Sort (Método de inserción)"<<endl;
            cout<<"   3.3. Selection Sort (Método de selección)"<<endl;
            cout<<"   3.4. Merge Sort (Ordenamiento por mezcla)"<<endl;
            cout<<"   3.5. Quick Sort (Ordenamiento rápido)"<<endl;
            cout<<"   3.6. Counting Sort"<<endl;
            cout<<"   3.7. Todos los metodos"<<endl;
            cout<<"   3.8. Regresar"<<endl;
            cout<<endl;
            
            cout<<"   Ingrese un numero del 1 al 8 para escoger un método de ordenamiento: "<<endl;
            cin>>metodo;
            cout<<endl; 
            
            switch (metodo)
            {
                case 1: 
                {
	            cout<<"   ---Seleccionó Bubble Sort---"<<endl;
	            
	            valores.clear();
	            aleatorios(valores);
                cout<<"   Los numeros aleatorios son: ";
                mostrar(valores);
                
                bubbleSort(valores);
                cout<<endl;
	
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	    
	            break; 
                }
	    
	    
	            case 2: 
	            {
	    
	            cout<<"   ---Seleccionó Insertion Sort---"<<endl;
	            
	            valores.clear();
	            aleatorios(valores);
                cout<<"   Los numeros aleatorios son: ";
                mostrar(valores);
                
                insertionSort(valores);
                cout<<endl;
	
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	    
	            break; 
	            }
	    
	    
	            case 3: {
	    
	            cout<<"   ---Seleccionó Selection Sort---"<<endl;
	            
	            valores.clear();
	            aleatorios(valores);
	            
                cout<<"   Los numeros aleatorios son: ";
                mostrar(valores);
                
                selectionSort(valores);
                cout<<endl;
	
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	           
	            break;
	            }
	            
	            
	            case 4: {
	            
	            cout<<"   ---Seleccionó Merge Sort---"<<endl;
	            
	            valores.clear();
	            aleatorios(valores);
                cout<<"   Los numeros aleatorios son: ";
                mostrar(valores);
                
                if(!valores.empty()) {
                    mergeSort(valores, 0, valores.size() - 1);
                }
                cout<<endl;
	
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	            
	            break;
	            }
	            
	            
	            case 5: {
	            
	            cout<<"   ---Seleccionó Quick Sort---"<<endl;
	            
	            valores.clear();
	            aleatorios(valores);
	            
                cout<<"   Los numeros aleatorios son: ";
                mostrar(valores);
                if(!valores.empty()) {
                quickSort(valores, 0, valores.size() - 1);
                }
                cout<<endl;
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	            
	            break;
	            }
	            
	            
	            case 6: {
	            
	            cout<<"   ---Seleccionó Counting Sort---"<<endl;
	            
	            valores.clear();
	            aleatorios(valores);
                cout<<"   Los numeros aleatorios son: ";
                mostrar(valores);
                
                countingSort(valores);
                cout<<endl;
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	            
	            break;
	            }
	            
	            
	            case 7: {
	            
	            cout<<"   ---Seleccionó todos los metodos---"<<endl;
	            
	            valores.clear();
	            aleatorios(valores);
                cout<<"   Los numeros aleatorios son: ";
                mostrar(valores);
                cout<<endl;
                
	            cout<<"   BUBBLE SORT: "<<endl;
	            bubbleSort(valores);
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	            
	            cout<<"   INSERTION SORT: "<<endl;
	            insertionSort(valores);
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	            
	            cout<<"   SELECTION SORT: "<<endl;
	            selectionSort(valores);
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	            
	            cout<<"   MERGE SORT: "<<endl;
	            if(!valores.empty()) {
	               mergeSort(valores, 0, valores.size() - 1);
	            }
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	            
	            cout<<"   QUICK SORT: "<<endl;
	            if(!valores.empty()) {
	               quickSort(valores, 0, valores.size() - 1);
	            }
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            cout<<endl;
	            
	            cout<<"   COUNTING SORT: "<<endl;
	            countingSort(valores);
	            cout<<"   Numeros de forma Ascendente: ";
	            mostrar(valores);
	            cout<<"   Numeros de forma Descendente: ";
	            mostrarDescendente(valores);
	            
	            break;
	            }
	            
	            
	            case 8: {
	            
	            cout<<"   Regresando al menu principal..."<<endl;
	            break;
	            }
	            
	            default: {
                cout<<"Error"<<endl;
                break;
                }
            }
            
            if (metodo >= 1 && metodo <= 7) {
                cout<<"   Desea continuar con el programa..."<<endl;
                cout<<"   1. Elegir otro metodo"<<endl;
                cout<<"   2. Regresar al menu principal"<<endl;
                cin>>opcion;
                if(opcion==2) {
                    metodo = 8;
                } else if (opcion == 3) {
                    salir = true;
                    metodo = 8;
                }
            }
            
        } while (metodo != 8 && !salir);
        
        break; 
                
        }
        
            
        case 4: {
        cout<<" ======================================="<<endl,
        cout<<"           MOSTRAR RESULTADOS            "<<endl;
        cout<<" COMPARAMOS LOS METODOS DE ORDENAMIENTO "<<endl;
        cout<<" ======================================="<<endl;
        valores.clear();
        aleatorios(valores);
        
        cout<<"   Los numeros aleatorios son: ";
        mostrar(valores);
        
        cout<<endl;
        compararMetodos(valores);
        cout<<endl;
        continuarMenu(valores);
        
        break;
        }
        
        case 5: {
        
        cout<<"   Programa finalizado"<<endl;
        salir = true;
        break;
        }
        
        default: {
            cout<<"   ERROR..."<<endl;
            break;
        }
      }
      
    } while(!salir);
    
    return 0;
}