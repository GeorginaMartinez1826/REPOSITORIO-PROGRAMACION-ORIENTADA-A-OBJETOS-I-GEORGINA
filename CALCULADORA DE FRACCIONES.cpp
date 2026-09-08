#include <iostream>
#include <stdio.h>
#include <numeric>
#include <cstdlib>
using namespace std;

class Fraccion
{
    public:
    
    int numerador;
    int denominador;
    
    void ingresar1Fraccion() {
        cout<<" Ingrese la primera fraccion: "<<endl;
        cin>>numerador>>denominador;
        while(denominador == 0) {
            cout<<" ERROR...ingrese otro denominador"<<endl;
            cin>>denominador;
        }
    }
    
    void ingresar2Fraccion() {
        cout<<" Ingrese la segunda fraccion: "<<endl;
        cin>>numerador>>denominador;
        
        while(denominador == 0) {
            cout<<" ERROR...ingrese otro denominador"<<endl;
            cin>>denominador;
        }
    }
    
    void limpiar() {
        numerador = 0;
        denominador = 0;
    }
    
    void imprimir() {
        cout<<numerador<<"/"<<denominador;
    }
    
    Fraccion simplificar () {
        int divisorMCD = gcd(abs(numerador), abs(denominador));
        Fraccion resultado;
        resultado.numerador = numerador / divisorMCD;
        resultado.denominador = denominador / divisorMCD;
        return resultado;
    }
    
    Fraccion multiplicar(Fraccion a) {
        Fraccion resultado = Fraccion ();
        resultado.numerador = numerador * a.numerador;
        resultado.denominador = denominador * a.denominador;
        return resultado;
    }
    
    Fraccion sumar(Fraccion a) {
        Fraccion resultado = Fraccion ();
        resultado.numerador = numerador * a.denominador + a.numerador * denominador;
        resultado.denominador = denominador * a.denominador;
        return resultado;
    }
    
    Fraccion restar(Fraccion a) {
        Fraccion resultado = Fraccion ();
        resultado.numerador = numerador * a.denominador - a.numerador * denominador;
        resultado.denominador = denominador * a.denominador;
        return resultado;
    }
    
    Fraccion dividir(Fraccion a) {
        Fraccion resultado = Fraccion ();
        resultado.numerador = numerador * a.denominador;
        resultado.denominador = denominador * a.numerador;
        return resultado;
    }
    
    bool continuarMenu() {
        int opcion;
        cout<<endl;
        cout<<"   Desea continuar con el programa..."<<endl;
        cout<<"   1. Regresar al menu principal"<<endl;
        cout<<"   2. Salir del programa"<<endl;
        cin>>opcion;
        cout<<endl;
        if(opcion==2) {
            return false;
        }
        return true;
    }
};

int main()
{
    int a, b;
    Fraccion fraccion_a = Fraccion ();
    Fraccion fraccion_b = Fraccion ();
    Fraccion resultado = Fraccion ();
    Fraccion simplificado = Fraccion ();
    
    int puntos;
    int opcion;
    bool salir = false;
    
    do { 
    cout<<" ================================================="<<endl;
    cout<<"                   MENÚ PRINCIPAL                 "<<endl;
    cout<<" ================================================="<<endl;
    cout<<" 1. Suma de fracciones"<<endl;
    cout<<" 2. Resta de fracciones"<<endl;
    cout<<" 3. Multiplicacion de fracciones"<<endl;
    cout<<" 4. División de fracciones"<<endl;
    cout<<" 5. Todas las operaciones"<<endl;
    cout<<" 6. Salir..."<<endl;
    cout<<endl;
    
    cout<<" Escoge una operación matemática para fracciones: "<<endl;
    cin>>puntos;
    cout<<endl;
    
        switch (puntos) {
        case 1:
        {
            fraccion_a.ingresar1Fraccion();
            fraccion_b.ingresar2Fraccion();
            cout<<endl;
            resultado = fraccion_a.sumar(fraccion_b);
            cout<<"   Resultado de la suma: ";
            resultado.imprimir();
            cout<<"  -->  "; 
            simplificado = resultado.simplificar();
            simplificado.imprimir();
            cout<<endl;
            if (!fraccion_a.continuarMenu()) {
                puntos = 6;
            }
            
            break;
        }
        
        case 2: 
        {
            fraccion_a.ingresar1Fraccion();
            fraccion_b.ingresar2Fraccion();
            cout<<endl;
            resultado = fraccion_a.restar(fraccion_b);
            cout<<"   Resultado de la resta: ";
            resultado.imprimir();
            cout<<"  -->  "; 
            simplificado = resultado.simplificar();
            simplificado.imprimir();
            cout<<endl;
            if (!fraccion_a.continuarMenu()) {
                puntos = 6;
            }
            
            break;
        }
        
        case 3: 
        {
            fraccion_a.ingresar1Fraccion();
            fraccion_b.ingresar2Fraccion();
            cout<<endl;
            resultado = fraccion_a.multiplicar(fraccion_b);
            cout<<"   Resultado de la multiplicacion: ";
            resultado.imprimir();
            cout<<"  -->  "; 
            simplificado = resultado.simplificar();
            simplificado.imprimir();
            cout<<endl;
            if (!fraccion_a.continuarMenu()) {
                puntos = 6;
            }
            
            break;
        }
        
        case 4: 
        {
            fraccion_a.ingresar1Fraccion();
            fraccion_b.ingresar2Fraccion();
            cout<<endl;
            if (fraccion_b.numerador != 0) {
                resultado = fraccion_a.dividir(fraccion_b);
                cout<<"   Resultado de la division: ";
                resultado.imprimir();  
                cout<<"  -->  "; 
                simplificado = resultado.simplificar();
                simplificado.imprimir();
            } else {
                cout<<"   ERROR...";
            }
            cout<<endl;
            if (!fraccion_a.continuarMenu()) {
                puntos = 7;
            }
            
            break;
        }
        
        case 5: 
        {
            fraccion_a.ingresar1Fraccion();
            fraccion_b.ingresar2Fraccion();
            cout<<endl;
            //SUMAR
            resultado = fraccion_a.sumar(fraccion_b);
            cout<<"   Resultado de la suma: ";
            simplificado = resultado.simplificar();
            simplificado.imprimir();
            cout<<endl;
            //RESTAR
            resultado = fraccion_a.restar(fraccion_b);
            cout<<"   Resultado de la resta: ";
            simplificado = resultado.simplificar();
            simplificado.imprimir();
            cout<<endl;
            //MULTIPLICACION
            resultado = fraccion_a.multiplicar(fraccion_b);
            cout<<"   Resultado de la multiplicacion: ";
            simplificado = resultado.simplificar();
            simplificado.imprimir();
            cout<<endl;
            //DIVIDIR
            if (fraccion_b.numerador != 0) {
                resultado = fraccion_a.dividir(fraccion_b);
                cout<<"   Resultado de la division: ";
                simplificado = resultado.simplificar();
                simplificado.imprimir();
            } else {
                cout<<"   ERROR...";
            }
            cout<<endl;
            if (!fraccion_a.continuarMenu()) {
                puntos = 7;
            }
            
            break;
        }
        
        case 6:
        
        {
            cout<<" Programa finalizado..."<<endl;
            
            break;
        }
        
        default: {
            cout<<" ERROR..."<<endl;
        }
        
        }
        
        fraccion_a.limpiar();
        fraccion_b.limpiar();
        resultado.limpiar();
        simplificado.limpiar();
        
    } while (puntos != 6 && !salir);

    return 0;
}