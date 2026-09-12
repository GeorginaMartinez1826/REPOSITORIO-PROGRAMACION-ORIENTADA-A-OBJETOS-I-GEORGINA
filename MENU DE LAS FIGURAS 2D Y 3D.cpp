#include<iostream>
#include <stdio.h>
#include <numeric>
#include <cstdlib>
#include <math.h>
using namespace std;

class Cuadrado
{
    public:
    
    int lado, area, perimetro;
    int i, j;
    
    void ingresarLado() {
        cout<<"      Ingrese el lado: ";
        cin>>lado;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Cuadrado cuadradoArea(Cuadrado a) {
        Cuadrado resultado = Cuadrado ();
        resultado.area = lado * lado;
        return resultado;
        }
        
    Cuadrado cuadradoPerimetro(Cuadrado a) {
        Cuadrado resultado = Cuadrado ();
        resultado.perimetro = lado * 4; 
        return resultado;
        }
        
    void cuadradoFigura() {
        cout<<"      La figura es: "<<endl;
        for(i=1; i<=lado; i++) {
            for(j=1; j<=lado; j++) {
                cout<<"   *"; 
            }
            cout<<endl;
        }
    }
    
    void menuCaractFig() 
    {
        cout<<"    1. Área"<<endl;
        cout<<"    2. Perímetro"<<endl;
        cout<<"    3. Dibujar"<<endl;
        cout<<"    4. 1, 2 y 3"<<endl;
        cout<<"    5. Volver"<<endl;
        cout<<"    ¿Qué quiere saber? ";
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Triangulo 
{
    public:
    
    double base, area, perimetro;
    int i, j, k;
    
    void ingresarBase() {
        cout<<"      Ingrese la base: ";
        cin>>base;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Triangulo trianguloArea(Triangulo a) {
        Triangulo resultadot = Triangulo ();
        resultadot.area = a.base * a.base * sqrt(3) / 4;
        return resultadot;
        }
        
    Triangulo trianguloPerimetro(Triangulo a) {
        Triangulo resultadot = Triangulo ();
        resultadot.perimetro = a.base * 3; 
        return resultadot;
        }
        
    void trianguloFigura() {
        cout<<"      La figura es: "<<endl;
        for(i=1; i<=base; i++) {
            for(j=i; j<base; j++) {
                cout<<" "; 
            }
            for(k=1; k<=i; k++) {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Rectangulo
{
    public:
    
    int alto, largo, area, perimetro;
    int i, j;
    
    void ingresarAltoLargo() {
        cout<<"      Ingrese el alto: ";
        cin>>alto;
        cout<<"      Ingrese el largo: ";
        cin>>largo;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Rectangulo rectanguloArea(Rectangulo a) {
        Rectangulo resultador = Rectangulo();
        resultador.area = a.alto * a.largo;
        return resultador;
        }
        
    Rectangulo rectanguloPerimetro(Rectangulo a) {
        Rectangulo resultador = Rectangulo();
        resultador.perimetro = a.alto * 2 + a.largo * 2; 
        return resultador;
        }
        
    void rectanguloFigura() {
        cout<<"      La figura es: "<<endl;
        for(i=0; i<alto; i++) {
            for(j=0; j<largo; j++) {
                cout<<"  *"; 
            }
            cout<<endl;
        }
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Rombo
{
    public:
    
    int diagonalMayor, diagonalMenor, area, perimetro;
    int i, j, hipotenusa;
    
    void ingresarDiagonales() {
        cout<<"      Ingrese la diagonal mayor: ";
        cin>>diagonalMayor;
        cout<<"      Ingrese la diagonal menor: ";
        cin>>diagonalMenor;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Rombo romboArea(Rombo a) {
        Rombo resultadoRo = Rombo();
        resultadoRo.area = a.diagonalMayor * a.diagonalMenor / 2;
        return resultadoRo;
        }
        
    Rombo romboPerimetro(Rombo a) {
        Rombo resultadoRo = Rombo();
        hipotenusa = sqrt(pow((diagonalMayor / 2), 2) + pow((diagonalMenor / 2), 2));
        resultadoRo.perimetro = hipotenusa * 4; 
        return resultadoRo;
        }
        
    void romboFigura() {
        cout<<"      La figura es: "<<endl;
        for (int i = 1; i <= hipotenusa; i++) {
            for (int j = i; j < hipotenusa; j++) {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "*";
            }
            cout << endl;
        }
        // Parte inferior del rombo
        for (int i = hipotenusa - 1; i >= 1; i--) {
            for (int j = hipotenusa; j > i; j--) {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Pentagono 
{
    public:
    
    double lado5, area, perimetro, denomi = 1.453, apotemaPe;
    
    void ingresarLado5() {
        cout<<"      Ingrese el lado: ";
        cin>>lado5;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Pentagono pentagonoArea(Pentagono a) {
        Pentagono resultadoPe = Pentagono();
        apotemaPe = a.lado5 / denomi;
        resultadoPe.area = (a.lado5 * apotemaPe) * 5 / 2;
        return resultadoPe;
        }
        
    Pentagono pentagonoPerimetro(Pentagono a) {
        Pentagono resultadoPe = Pentagono ();
        resultadoPe.perimetro = a.lado5 * 5; 
        return resultadoPe;
        }
        
    void pentagonoFigura() {
        cout<<"      La figura es: "<<endl;
        // Parte superior (triangular)
        for (int i = 0; i < lado5 - 1; i++) {
            for (int j = i; j < lado5 - 1; j++) cout << "  ";
            for (int j = 0; j < (2 * i + 1); j++) cout << " *";
            cout << endl;
        }
        // Parte media (rectangular)
        for (int i = 0; i < lado5; i++) {
            for (int j = 0; j < (2 * lado5 - 2 + 1); j++) cout << " *";
            cout << endl;
        }
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Hexagono
{
    public:
    
    double lado6, area, perimetro, apotemaHex;
    
    void ingresarLado6() {
        cout<<"      Ingrese el lado: ";
        cin>>lado6;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Hexagono hexagonoArea(Hexagono a) {
        Hexagono resultadoHex = Hexagono();
        apotemaHex = sqrt(3) * a.lado6 / 2;
        resultadoHex.area = (apotemaHex * 6 * a.lado6) / 2;
        return resultadoHex;
        }
        
    Hexagono hexagonoPerimetro(Hexagono a) {
        Hexagono resultadoHex = Hexagono();
        resultadoHex.perimetro = a.lado6 * 6; 
        return resultadoHex;
        }
        
    void hexagonoFigura() {
        cout<<"      La figura es: "<<endl;
        // Parte superior (triangular)
        for (int i = 0; i < lado6 - 1; i++) {
            for (int j = i; j < lado6 - 1; j++) cout << " ";
            for (int j = 0; j < (2 * i + 1); j++) cout << "*";
            cout << endl;
        }
        // Parte media (rectangular)
        for (int i = 0; i < lado6 - 1; i++) {
            for (int j = 0; j < (2 * lado6 - 2 + 1); j++) cout << "*";
            cout << endl;
        }
        // Parte inferior (trapezoidal)
        for (int i = 0; i <= lado6 - 1; i++) {
            for (int j = 0; j < i; j++) cout << " ";
            for (int j = 0; j < (2 * lado6 - 2 + 1 - 2 * i); j++) cout << "*";
            cout << endl;
        }
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Heptagono
{
    public:
    
    double lado7, apotemaHep, denom = 0.963, area, perimetro;
    int i, j;
    
    void ingresarLado7() {
        cout<<"      Ingrese el lado: ";
        cin>>lado7;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Heptagono heptagonoArea(Heptagono a) {
        Heptagono resultadoHep = Heptagono();
        apotemaHep = a.lado7 / denom;
        resultadoHep.area = 7 * a.lado7 * apotemaHep / 2.0;
        return resultadoHep;
        }
        
    Heptagono heptagonoPerimetro(Heptagono a) {
        Heptagono resultadoHep = Heptagono();
        resultadoHep.perimetro = a.lado7 * 7; 
        return resultadoHep;
        }
        
    void heptagonoFigura() {
        cout<<"      La figura es: "<<endl;
        // Parte superior (triangular)
        for (int i = 0; i < lado7 - 1; i++) {
            for (int j = i; j < lado7 - 1; j++) cout << " ";
            for (int j = 0; j < (2 * i + 1); j++) cout << "*";
            cout << endl;
        }
        // Parte media (rectangular)
        for (int i = 0; i < lado7 - 1; i++) {
            for (int j = 0; j < (2 * lado7 - 2 + 1); j++) cout << "*";
            cout << endl;
        }
        // Parte inferior (trapezoidal)
        for (int i = 0; i <= lado7 - 1 - 2; i++) {
            for (int j = 0; j < i; j++) cout << " ";
            for (int j = 0; j < (2 * lado7 - 2 + 1 - 2 * i); j++) cout << "*";
            cout << endl;
        }
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Octogono
{
    public:
    
    double lado8, apotemaOcto, B = 0.829, area, perimetro;
    int i, j;
    
    void ingresarLado8() {
        cout<<"      Ingrese el lado: ";
        cin>>lado8;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Octogono octogonoArea(Octogono a) {
        Octogono resultadoOcto = Octogono();
        apotemaOcto = a.lado8 / B;
        resultadoOcto.area = 8 * a.lado8 * apotemaOcto / 2.0;
        return resultadoOcto;
        }
        
    Octogono octogonoPerimetro(Octogono a) {
        Octogono resultadoOcto = Octogono();
        resultadoOcto.perimetro = a.lado8 * 8; 
        return resultadoOcto;
        }
        
    void octogonoFigura() {
        cout<<"      La figura es: "<<endl;
        // Parte superior inclinada
        for (int i = 0; i < lado8; i++) {
            for (int j = 0; j < lado8 - i - 1; j++) cout << " ";
            for (int j = 0; j < lado8 + 2 * i; j++) cout << "*";
            cout << endl;
        }
        // Parte central (recta)
        for (int i = 0; i < lado8 - 1; i++) {
            for (int j = 0; j < 3 * lado8 - 2; j++) cout << "*";
            cout << endl;
        }
        // Parte inferior inclinada
        for (int i = lado8 - 2; i >= 0; i--) {
            for (int j = 0; j < lado8 - i - 1; j++) cout << " ";
            for (int j = 0; j < lado8 + 2 * i; j++) cout << "*";
            cout << endl;
        }
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Romboide
{
    public:
    
    double lado4, base4, altura4, area, perimetro;
    int i, j;
    
    void ingresarLadoAltura() {
        cout<<"      Ingrese la base: ";
        cin>>base4;
        cout<<"      Ingrese el lado: ";
        cin>>lado4;
        cout<<"      Ingrese la altura: ";
        cin>>altura4;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Romboide romboideArea(Romboide a) {
        Romboide resultadoRomb = Romboide();
        resultadoRomb.area = a.base4 * a.altura4;
        return resultadoRomb;
        }
        
    Romboide romboidePerimetro(Romboide a) {
        Romboide resultadoRomb = Romboide();
        resultadoRomb.perimetro = a.base4 * 2 + a.lado4 * 2; 
        return resultadoRomb;
        }
        
    void romboideFigura() {
        cout<<"      La figura es: "<<endl;
        // Dibujar el romboide
        for (int i = 0; i < altura4; i++) {
            // Espacios para el desplazamiento lateral
            for (int j = 0; j < altura4 - i - 1; j++) {
                cout << " ";
            }
            // Asteriscos de la base
            for (int j = 0; j < base4; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Trapecio
{
    public:
    
    double baseMayor, baseMenor, alturab, area, perimetro;
    double C, hipotenusaTrapec;
    
    void ingresarBasesAlturas() {
        cout<<"      Ingrese la base mayor: ";
        cin>>baseMayor;
        cout<<"      Ingrese la base menor: ";
        cin>>baseMenor;
        cout<<"      Ingrese la altura: ";
        cin>>alturab;
    }
    
    void imprimirArea() {
    cout<<"      El área es: "<<area;
    }
    
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    
    Trapecio trapecioArea(Trapecio a) {
        Trapecio resultadoTrapec = Trapecio();
        resultadoTrapec.area = alturab * (baseMayor + baseMenor) / 2.0;
        return resultadoTrapec;
        }
        
    Trapecio trapecioPerimetro(Trapecio a) {
        Trapecio resultadoTrapec = Trapecio();
        C = (baseMayor - baseMenor) / 2.0;
        hipotenusaTrapec = sqrt(pow(C, 2) + pow(alturab, 2));
        resultadoTrapec.perimetro = baseMayor + baseMenor + hipotenusaTrapec * 2; 
        return resultadoTrapec;
        }
        
    void trapecioFigura() {
        cout<<"      La figura es: "<<endl;
        int diferencia = baseMayor - baseMenor;
        // Cuánto se reduce por cada nivel de altura
        double paso = (double)diferencia / (alturab - 1);

        for (int i = 0; i < alturab; i++) {
            // Número de asteriscos en esta fila
            int ancho = baseMenor + (int)(paso * i);
            int espacios = (baseMayor - ancho) / 2;
            for (int j = 0; j < espacios; j++) cout << " ";
            for (int j = 0; j < ancho; j++) cout << "*";
                 cout << endl;
        }
        // Ejemplo (12, 6, 4) o (8, 4, 3)
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
    }
};

class Cubo
{
    public:
    
    double ladoCubo, area, perimetro, volumen, diagonal;
    
    void ingresarladoCubo() {
        cout<<"      Ingrese el lado: ";
        cin>>ladoCubo;
    }
    
    void imprimirArea() {
    cout<<"      El área de la superficie total es: "<<area;
    }
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    void imprimirVolumen() {
    cout<<"      El volumen es: "<<volumen;
    }
    void imprimirDiagonal() {
    cout<<"      El valor de la diagonal es: "<<diagonal;
    }
    
    Cubo cuboArea(Cubo a) {
        Cubo resultadoCubo = Cubo();
        resultadoCubo.area = 6 * a.ladoCubo * a.ladoCubo;
        return resultadoCubo;
    }
        
    Cubo cuboPerimetro(Cubo a) {
        Cubo resultadoCubo = Cubo();
        resultadoCubo.perimetro = a.ladoCubo * 12; 
        return resultadoCubo;
    }
        
    Cubo cuboVolumen(Cubo a) {
        Cubo resultadoCubo = Cubo();
        resultadoCubo.volumen = pow(a.ladoCubo, 3);
        return resultadoCubo;
    }
        
    Cubo cuboDiagonal(Cubo a) {
        Cubo resultadoCubo = Cubo();
        resultadoCubo.diagonal = a.ladoCubo * sqrt(3);
        return resultadoCubo;
    }
    
    void menuCaractSolid() {
        cout<<"      1. Área de la superficie total"<<endl;
        cout<<"      2. Perímetro"<<endl;
        cout<<"      3. Volumen"<<endl;
        cout<<"      4. Diagonal"<<endl;
        cout<<"      5. Todo"<<endl;
        cout<<"      6. Volver"<<endl;
        cout<<"      ¿Qué desea saber? ";
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
        volumen = 0;
        diagonal = 0;
    }
};

class Octaedro
{
    public:
    
    double ladoOctaedro, area, perimetro, volumen, diagonal;
    
    void ingresarladoOctaedro() {
        cout<<"      Ingrese el lado: ";
        cin>>ladoOctaedro;
    }
    
    void imprimirArea() {
    cout<<"      El área de la superficie total es: "<<area;
    }
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    void imprimirVolumen() {
    cout<<"      El volumen es: "<<volumen;
    }
    void imprimirDiagonal() {
    cout<<"      El valor de la diagonal es: "<<diagonal;
    }
    
    Octaedro octaedroArea(Octaedro a) {
        Octaedro resultadoOctaedro = Octaedro();
        resultadoOctaedro.area = 2 * pow(a.ladoOctaedro, 2) * sqrt(3);
        return resultadoOctaedro;
    }
        
    Octaedro octaedroPerimetro(Octaedro a) {
        Octaedro resultadoOctaedro = Octaedro();
        resultadoOctaedro.perimetro = a.ladoOctaedro * 12; 
        return resultadoOctaedro;
    }
        
    Octaedro octaedroVolumen(Octaedro a) {
        Octaedro resultadoOctaedro = Octaedro();
        resultadoOctaedro.volumen = pow(a.ladoOctaedro, 3) * sqrt(2) / 3.0;
        return resultadoOctaedro;
    }
        
    Octaedro octaedroDiagonal(Octaedro a) {
        Octaedro resultadoOctaedro = Octaedro();
        resultadoOctaedro.diagonal = a.ladoOctaedro * sqrt(2);
        return resultadoOctaedro;
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
        volumen = 0;
        diagonal = 0;
    }
};

class Paralelepipedo
{
    public:
    
    double largoP, altoP, anchoP, area, perimetro, volumen, diagonal;
    
    void ingresarladoParalelepipedo() {
        cout<<"      Ingrese el largo: ";
        cin>>largoP;
        cout<<"      Ingrese el alto: ";
        cin>>altoP;
        cout<<"      Ingrese el ancho: ";
        cin>>anchoP;
    }
    
    void imprimirArea() {
    cout<<"      El área de la superficie total es: "<<area;
    }
    void imprimirPerimetro() {
    cout<<"      El perímetro es: "<<perimetro;
    }
    void imprimirVolumen() {
    cout<<"      El volumen es: "<<volumen;
    }
    void imprimirDiagonal() {
    cout<<"      El valor de la diagonal es: "<<diagonal;
    }
    
    Paralelepipedo paralelepipedoArea(Paralelepipedo a) {
        Paralelepipedo resultadoP = Paralelepipedo();
        resultadoP.area = 2 * (a.altoP*a.largoP + a.largoP*a.anchoP + a.altoP*a.anchoP);
        return resultadoP;
    }
        
    Paralelepipedo paralelepipedoPerimetro(Paralelepipedo a) {
        Paralelepipedo resultadoP = Paralelepipedo();
        resultadoP.perimetro = a.largoP * 4 + a.altoP * 4 + a.anchoP * 4; 
        return resultadoP;
    }
        
    Paralelepipedo paralelepipedoVolumen(Paralelepipedo a) {
        Paralelepipedo resultadoP = Paralelepipedo();
        resultadoP.volumen = a.largoP * a.altoP * a.anchoP;
        return resultadoP;
    }
        
    Paralelepipedo paralelepipedoDiagonal(Paralelepipedo a) {
        Paralelepipedo resultadoP = Paralelepipedo();
        resultadoP.diagonal = sqrt(pow(a.altoP, 2) + pow(a.largoP, 2) + pow(a.anchoP, 2));
        return resultadoP;
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
        volumen = 0;
        diagonal = 0;
    }
};

class Cilindro
{
    public:
    
    double radioCi, altoCi, area, perimetro, volumen, peri;
    
    void ingresarladoCilindro() {
        cout<<"      Ingrese el radio: ";
        cin>>radioCi;
        cout<<"      Ingrese el alto: ";
        cin>>altoCi;
    }
    
    void imprimirArea() {
    cout<<"      El área de la superficie total es: "<<area<<"π";
    }
    void imprimirPerimetro() {
    cout<<"      El perimetro de su forma plana es: "<<peri<<" + "<<perimetro<<"π";
    }
    void imprimirVolumen() {
    cout<<"      El volumen es: "<<volumen<<"π";
    }
    
    Cilindro cilindroArea(Cilindro a) {
        Cilindro resultadoCi = Cilindro();
        resultadoCi.area = 2 * a.radioCi * (a.altoCi + a.radioCi);
        return resultadoCi;
    }
        
    Cilindro cilindroPerimetro(Cilindro a) {
        Cilindro resultadoCi = Cilindro();
        resultadoCi.peri = 2 * a.altoCi;
        resultadoCi.perimetro = 2 * a.radioCi * 4; 
        return resultadoCi;
    }
        
    Cilindro cilindroVolumen(Cilindro a) {
        Cilindro resultadoCi = Cilindro();
        resultadoCi.volumen = pow(a.radioCi, 2) * a.altoCi;
        return resultadoCi;
    }
    
    void limpiar() {
        area = 0;
        perimetro = 0;
        volumen = 0;
    }
};

class Esfera 
{
    public:
    
    double radioEs, area, volumen;
    
    void ingresarladoEsfera() {
        cout<<"      Ingrese el radio: ";
        cin>>radioEs;
    }
    
    void imprimirArea() {
    cout<<"      El área de la superficie total es: "<<area<<"π";
    }
    void imprimirVolumen() {
    cout<<"      El volumen es: "<<volumen<<"π";
    }
    
    Esfera esferaArea(Esfera a) {
        Esfera resultadoEs = Esfera();
        resultadoEs.area = 4 * pow(a.radioEs, 2);
        return resultadoEs;
    }
        
    Esfera esferaVolumen(Esfera a) {
        Esfera resultadoEs = Esfera();
        resultadoEs.volumen = pow(a.radioEs, 3) * 4 / 3;
        return resultadoEs;
    }
    
    void limpiar() {
        area = 0;
        volumen = 0;
    }
};

class General 
{
    public:
    
    double gener, area, perimetro, volumen, diagonal;
    
    void limpiar() {
        area = 0;
        perimetro = 0;
        volumen = 0;
        diagonal = 0;
    }
};

int main()
{
    int puntos;
    int figura;
    int solidoGeo;
    int caracteristicasCu, caracteristicasTri, caracteristicasRe;
    int caracteristicasRo, caracteristicasPe, caracteristicasHex;
    int caracteristicasHep, caracteristicasOcto, caracteristicasRomb;
    int caracteristicasTrapec, caracteristicasCubo, caracteristicasOctaedro;
    int caracteristicasParalelepipedo, caracteristicasCilindro, caracteristicasEsfera;
    
    int opcion;
    bool salir = false;
    
    int a, b;
    Cuadrado lado_a = Cuadrado();
    Cuadrado resultado = Cuadrado();
    
    Triangulo base_a = Triangulo();
    Triangulo resultadot = Triangulo();
    
    Rectangulo alto_a = Rectangulo();
    Rectangulo largo_b = Rectangulo();
    Rectangulo resultador = Rectangulo();
    
    Rombo diagonalMayor_a = Rombo();
    Rombo resultadoRo = Rombo();
    
    Pentagono lado5_a = Pentagono();
    Pentagono resultadoPe = Pentagono();
    
    Hexagono lado6_a = Hexagono();
    Hexagono resultadoHex = Hexagono();
    
    Heptagono lado7_a = Heptagono();
    Heptagono resultadoHep = Heptagono();
    
    Octogono lado8_a = Octogono();
    Octogono resultadoOcto = Octogono();
    
    Romboide lado4_a = Romboide();
    Romboide resultadoRomb = Romboide();
    
    Trapecio baseMayor_a = Trapecio();
    Trapecio resultadoTrapec = Trapecio();
    
    Cubo ladoCubo_a = Cubo();
    Cubo resultadoCubo = Cubo();
    
    Octaedro ladoOctaedro_a = Octaedro();
    Octaedro resultadoOctaedro = Octaedro();
    
    Paralelepipedo largoP_a = Paralelepipedo();
    Paralelepipedo resultadoP = Paralelepipedo();
    
    Cilindro radioCi_a = Cilindro();
    Cilindro resultadoCi = Cilindro();
    
    Esfera radioEs_a = Esfera();
    Esfera resultadoEs = Esfera();
    
    General gener_a = General();
    
  do 
  {
    cout<<" ======================="<<endl;
    cout<<"     MENU PRINCIPAL     "<<endl;
    cout<<" ======================="<<endl;
    cout<<" 1. Figuras 2D"<<endl;
    cout<<" 2. Figuras 3D"<<endl;
    cout<<" 3. Salir"<<endl;
    cout<<endl;
    cout<<" Ingrese un número de acuerdo al menú: ";
    cin>>puntos;
    cout<<endl;
    
    switch (puntos) 
    {
        case 1: 
        {
          do 
          {
            cout<<endl;
            cout<<"  ---Seleccionó figuras 2D--- "<<endl;
            cout<<"  1. Cuadrado"<<endl;
            cout<<"  2. Triangulo equilatero"<<endl;
            cout<<"  3. Rectángulo"<<endl;
            cout<<"  4. Rombo"<<endl;
            cout<<"  5. Pentágono regular"<<endl;
            cout<<"  6. Hexágono regular"<<endl;
            cout<<"  7. Heptagono regular"<<endl;
            cout<<"  8. Octogono regular"<<endl;
            cout<<"  9. Romboide"<<endl;
            cout<<"  10. Trapecio"<<endl;
            cout<<"  11. Salir"<<endl;
            cout<<endl;
            cout<<"  Escoge una figura geométrica: ";
            cin>>figura;
            cout<<endl;
       
            switch (figura) 
            {
                case 1: 
                {
                    cout<<"    ===== CUADRADO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasCu;
                    cout<<endl;
            
                    switch (caracteristicasCu) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL CUADRADO =====   "<<endl;
                            lado_a.limpiar();
                            lado_a.ingresarLado();
                            cout<<endl;
                            resultado = lado_a.cuadradoArea(lado_a);
                            resultado.imprimirArea();
                            cout<<endl;
                            
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL CUADRADO ====="<<endl;
                            lado_a.limpiar();
                            lado_a.ingresarLado();
                            cout<<endl;
                            resultado = lado_a.cuadradoPerimetro(lado_a);
                            resultado.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL CUADRADO =====   "<<endl;
                            lado_a.limpiar();
                            lado_a.ingresarLado();
                            cout<<endl;
                            lado_a.cuadradoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     ===== FIGURA DEL CUADRADO =====   "<<endl;
                            lado_a.limpiar();
                            lado_a.ingresarLado();
                            cout<<endl;
                            resultado = lado_a.cuadradoArea(lado_a);
                            resultado.imprimirArea();
                            cout<<endl;
                            resultado = lado_a.cuadradoPerimetro(lado_a);
                            resultado.imprimirPerimetro();
                            cout<<endl;
                            lado_a.cuadradoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    }
                    break;
                }
                
                
                
                case 2: 
                {
                    cout<<"    ===== TRIÁNGULO EQUILATERO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasTri;
                    cout<<endl;
            
                    switch (caracteristicasTri) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL TRIÁNGULO EQUILATERO =====   "<<endl;
                            base_a.limpiar();
                            base_a.ingresarBase();
                            cout<<endl;
                            resultadot = base_a.trianguloArea(base_a);
                            resultadot.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL TRIÁNGULO ====="<<endl;
                            base_a.limpiar();
                            base_a.ingresarBase();
                            cout<<endl;
                            resultadot = base_a.trianguloPerimetro(base_a);
                            resultadot.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL TRIÁNGULO =====   "<<endl;
                            base_a.limpiar();
                            base_a.ingresarBase();
                            cout<<endl;
                            base_a.trianguloFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     ===== FIGURA DEL TRIÁNGULO =====   "<<endl;
                            base_a.limpiar();
                            base_a.ingresarBase();
                            cout<<endl;
                            resultadot = base_a.trianguloArea(base_a);
                            resultadot.imprimirArea();
                            cout<<endl;
                            resultadot = base_a.trianguloPerimetro(base_a);
                            resultadot.imprimirPerimetro();
                            cout<<endl;
                            base_a.trianguloFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 3: 
                {
                    cout<<"    ===== RECTÁNGULO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasRe;
                    cout<<endl;
                    
                    switch (caracteristicasRe) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL RECTÁNGULO =====   "<<endl;
                            alto_a.limpiar();
                            alto_a.ingresarAltoLargo();
                            cout<<endl;
                            resultador = alto_a.rectanguloArea(alto_a);
                            resultador.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL RECTÁNGULO ====="<<endl;
                            alto_a.limpiar();
                            alto_a.ingresarAltoLargo();
                            cout<<endl;
                            resultador = alto_a.rectanguloPerimetro(alto_a);
                            resultador.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL RECTÁNGULO =====   "<<endl;
                            alto_a.limpiar();
                            alto_a.ingresarAltoLargo();
                            cout<<endl;
                            alto_a.rectanguloFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====   ÁREA, PERÍMETRO Y   ====="<<endl;
                            cout<<"     ===== FIGURA DEL RECTÁNGULO =====   "<<endl;
                            alto_a.limpiar();
                            alto_a.ingresarAltoLargo();
                            cout<<endl;
                            resultador = alto_a.rectanguloArea(alto_a);
                            resultador.imprimirArea();
                            cout<<endl;
                            resultador = alto_a.rectanguloPerimetro(alto_a);
                            resultador.imprimirPerimetro();
                            cout<<endl;
                            alto_a.rectanguloFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    }
                 break;
                }
                
                
                
                case 4: {
                    cout<<"    ===== ROMBO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasRo;
                    cout<<endl;
                    
                    switch (caracteristicasRo) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL ROMBO =====   "<<endl;
                            diagonalMayor_a.limpiar();
                            diagonalMayor_a.ingresarDiagonales();
                            cout<<endl;
                            resultadoRo = diagonalMayor_a.romboArea(diagonalMayor_a);
                            resultadoRo.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL ROMBO ====="<<endl;
                            diagonalMayor_a.limpiar();
                            diagonalMayor_a.ingresarDiagonales();
                            cout<<endl;
                            resultadoRo = diagonalMayor_a.romboPerimetro(diagonalMayor_a);
                            resultadoRo.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL ROMBO =====   "<<endl;
                            diagonalMayor_a.limpiar();
                            diagonalMayor_a.ingresarDiagonales();
                            resultadoRo = diagonalMayor_a.romboPerimetro(diagonalMayor_a);
                            cout<<endl;
                            diagonalMayor_a.romboFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     =====   FIGURA DEL ROMBO  =====   "<<endl;
                            diagonalMayor_a.limpiar();
                            diagonalMayor_a.ingresarDiagonales();
                            cout<<endl;
                            resultadoRo = diagonalMayor_a.romboArea(diagonalMayor_a);
                            resultadoRo.imprimirArea();
                            cout<<endl;
                            resultadoRo = diagonalMayor_a.romboPerimetro(diagonalMayor_a);
                            resultadoRo.imprimirPerimetro();
                            cout<<endl;
                            diagonalMayor_a.romboFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    }
                 break;
                }
                
                
                case 5: 
                {
                    cout<<"    ===== PENTÁGONO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasPe;
                    cout<<endl;
                    
                    switch (caracteristicasPe) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL PENTÁGONO =====   "<<endl;
                            lado5_a.limpiar();
                            lado5_a.ingresarLado5();
                            cout<<endl;
                            resultadoPe = lado5_a.pentagonoArea(lado5_a);
                            resultadoPe.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL PENTÁGONO ====="<<endl;
                            lado5_a.limpiar();
                            lado5_a.ingresarLado5();
                            cout<<endl;
                            resultadoPe = lado5_a.pentagonoPerimetro(lado5_a);
                            resultadoPe.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL PENTÁGONO =====   "<<endl;
                            lado5_a.limpiar();
                            lado5_a.ingresarLado5();
                            cout<<endl;
                            lado5_a.pentagonoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     ===== FIGURA DEL PENTÁGONO =====   "<<endl;
                            lado5_a.limpiar();
                            lado5_a.ingresarLado5();
                            cout<<endl;
                            resultadoPe = lado5_a.pentagonoArea(lado5_a);
                            resultadoPe.imprimirArea();
                            cout<<endl;
                            resultadoPe = lado5_a.pentagonoPerimetro(lado5_a);
                            resultadoPe.imprimirPerimetro();
                            cout<<endl;
                            lado5_a.pentagonoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            cout<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 6: 
                {
                    cout<<"    ===== HEXÁGONO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasHex;
                    cout<<endl;
                    
                    switch (caracteristicasHex) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL HEXÁGONO =====   "<<endl;
                            lado6_a.limpiar();
                            lado6_a.ingresarLado6();
                            cout<<endl;
                            resultadoHex = lado6_a.hexagonoArea(lado6_a);
                            resultadoHex.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL HEXÁGONO ====="<<endl;
                            lado6_a.limpiar();
                            lado6_a.ingresarLado6();
                            cout<<endl;
                            resultadoHex = lado6_a.hexagonoPerimetro(lado6_a);
                            resultadoHex.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL HEXÁGONO =====   "<<endl;
                            lado6_a.limpiar();
                            lado6_a.ingresarLado6();
                            cout<<endl;
                            lado6_a.hexagonoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     ===== FIGURA DEL HEXÁGONO =====   "<<endl;
                            lado6_a.limpiar();
                            lado6_a.ingresarLado6();
                            cout<<endl;
                            resultadoHex = lado6_a.hexagonoArea(lado6_a);
                            resultadoHex.imprimirArea();
                            cout<<endl;
                            resultadoHex = lado6_a.hexagonoPerimetro(lado6_a);
                            resultadoHex.imprimirPerimetro();
                            cout<<endl;
                            lado6_a.hexagonoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 7: 
                {
                    cout<<"    ===== HEPTÁGONO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasHep;
                    cout<<endl;
            
                    switch (caracteristicasHep) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL HEPTÁGONO =====   "<<endl;
                            lado7_a.limpiar();
                            lado7_a.ingresarLado7();
                            cout<<endl;
                            resultadoHep = lado7_a.heptagonoArea(lado7_a);
                            resultadoHep.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL HEPTÁGONO ====="<<endl;
                            lado7_a.limpiar();
                            lado7_a.ingresarLado7();
                            cout<<endl;
                            resultadoHep = lado7_a.heptagonoPerimetro(lado7_a);
                            resultadoHep.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL HEPTÁGONO =====   "<<endl;
                            lado7_a.limpiar();
                            lado7_a.ingresarLado7();
                            cout<<endl;
                            lado7_a.heptagonoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     ===== FIGURA DEL HEPTÁGONO =====   "<<endl;
                            lado7_a.limpiar();
                            lado7_a.ingresarLado7();
                            cout<<endl;
                            resultadoHep = lado7_a.heptagonoArea(lado7_a);
                            resultadoHep.imprimirArea();
                            cout<<endl;
                            resultadoHep = lado7_a.heptagonoPerimetro(lado7_a);
                            resultadoHep.imprimirPerimetro();
                            cout<<endl;
                            lado7_a.heptagonoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 8:
                {
                    cout<<"    ===== OCTÓGONO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasOcto;
                    cout<<endl;
            
                    switch (caracteristicasOcto) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL OCTÓGONO =====   "<<endl;
                            lado8_a.limpiar();
                            lado8_a.ingresarLado8();
                            cout<<endl;
                            resultadoOcto = lado8_a.octogonoArea(lado8_a);
                            resultadoOcto.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL OCTÓGONO ====="<<endl;
                            lado8_a.limpiar();
                            lado8_a.ingresarLado8();
                            cout<<endl;
                            resultadoOcto = lado8_a.octogonoPerimetro(lado8_a);
                            resultadoOcto.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL OCTÓGONO =====   "<<endl;
                            lado8_a.limpiar();
                            lado8_a.ingresarLado8();
                            cout<<endl;
                            lado8_a.octogonoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     ===== FIGURA DEL OCTÓGONO =====   "<<endl;
                            lado8_a.limpiar();
                            lado8_a.ingresarLado8();
                            cout<<endl;
                            resultadoOcto = lado8_a.octogonoArea(lado8_a);
                            resultadoOcto.imprimirArea();
                            cout<<endl;
                            resultadoOcto = lado8_a.octogonoPerimetro(lado8_a);
                            resultadoOcto.imprimirPerimetro();
                            cout<<endl;
                            lado8_a.octogonoFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 9: 
                {
                    cout<<"    ===== OCTÓGONO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasRomb;
                    cout<<endl;
            
                    switch (caracteristicasRomb) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL ROMBOIDE =====   "<<endl;
                            lado4_a.limpiar();
                            lado4_a.ingresarLadoAltura();
                            cout<<endl;
                            resultadoRomb = lado4_a.romboideArea(lado4_a);
                            resultadoRomb.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL ROMBOIDE ====="<<endl;
                            lado4_a.limpiar();
                            lado4_a.ingresarLadoAltura();
                            cout<<endl;
                            resultadoRomb = lado4_a.romboidePerimetro(lado4_a);
                            resultadoRomb.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL ROMBOIDE =====   "<<endl;
                            lado4_a.limpiar();
                            lado4_a.ingresarLadoAltura();
                            cout<<endl;
                            lado4_a.romboideFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     ===== FIGURA DEL ROMBOIDE =====   "<<endl;
                            lado4_a.limpiar();
                            lado4_a.ingresarLadoAltura();
                            cout<<endl;
                            resultadoRomb = lado4_a.romboideArea(lado4_a);
                            resultadoRomb.imprimirArea();
                            cout<<endl;
                            resultadoRomb = lado4_a.romboidePerimetro(lado4_a);
                            resultadoRomb.imprimirPerimetro();
                            cout<<endl;
                            lado4_a.romboideFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 10: 
                {
                    cout<<"    ===== TRAPECIO ===== "<<endl;
                    lado_a.menuCaractFig();
                    cin>>caracteristicasTrapec;
                    cout<<endl;
            
                    switch (caracteristicasTrapec) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL TRAPECIO =====   "<<endl;
                            baseMayor_a.limpiar();
                            baseMayor_a.ingresarBasesAlturas();
                            cout<<endl;
                            resultadoTrapec = baseMayor_a.trapecioArea(baseMayor_a);
                            resultadoTrapec.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL TRAPECIO ====="<<endl;
                            baseMayor_a.limpiar();
                            baseMayor_a.ingresarBasesAlturas();
                            cout<<endl;
                            resultadoTrapec = baseMayor_a.trapecioPerimetro(baseMayor_a);
                            resultadoTrapec.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== FIGURA DEL TRAPECIO =====   "<<endl;
                            baseMayor_a.limpiar();
                            baseMayor_a.ingresarBasesAlturas();
                            cout<<endl;
                            baseMayor_a.trapecioFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y  ====="<<endl;
                            cout<<"     ===== FIGURA DEL TRAPECIO =====   "<<endl;
                            baseMayor_a.limpiar();
                            baseMayor_a.ingresarBasesAlturas();
                            cout<<endl;
                            resultadoTrapec = baseMayor_a.trapecioArea(baseMayor_a);
                            resultadoTrapec.imprimirArea();
                            cout<<endl;
                            resultadoTrapec = baseMayor_a.trapecioPerimetro(baseMayor_a);
                            resultadoTrapec.imprimirPerimetro();
                            cout<<endl;
                            baseMayor_a.trapecioFigura();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    }
                    break;
                }
                
                case 11: {
                    cout<<"      Saliendo de las figuras 2D..."<<endl;
                    break;
                }
                
                default: 
                {
                    cout<<"Error"<<endl;
                    break;
                }  
            } 
            
            if (figura >= 1 && figura <= 10) {
                cout<<"   Desea continuar con el programa..."<<endl;
                cout<<"   1. Elegir otra figura 2D"<<endl;
                cout<<"   2. Regresar al menu principal"<<endl;
                cout<<"   3. Salir"<<endl;
                cout<<"   ¿Qué desea? ";
                cin>>opcion;
                if(opcion==2) {
                    figura = 11;
                } else if (opcion == 3) {
                    salir = true;
                    puntos = 3;
                }
            }
          } while(figura != 11 & !salir);
            
            break;
        }
        
        
        
        case 2: 
        {
          do 
          {
            cout<<endl;
            cout<<"  ---Seleccionó figuras 3D--- "<<endl;
            cout<<"  1. Hexaedro regular o cubo"<<endl;
            cout<<"  2. Octaedro regular"<<endl;
            cout<<"  3. Paralelepípedo  rectangular"<<endl;
            cout<<"  4. Cilindro"<<endl;
            cout<<"  5. Esfera "<<endl;
            cout<<"  6. Volver al menu principal"<<endl;
            cout<<endl;
            cout<<"  Escoge un sólido geometrico: ";
            cin>>solidoGeo;
            cout<<endl;
            
            switch(solidoGeo) 
            {
                case 1: 
                {
                    cout<<"    ===== HEXAEDRO REGULAR O CUBO ===== "<<endl;
                    ladoCubo_a.menuCaractSolid();
                    cin>>caracteristicasCubo;
                    cout<<endl;
            
                    switch (caracteristicasCubo) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL HEXAEDRO REGULAR =====   "<<endl;
                            ladoCubo_a.limpiar();
                            ladoCubo_a.ingresarladoCubo();
                            cout<<endl;
                            resultadoCubo = ladoCubo_a.cuboArea(ladoCubo_a);
                            resultadoCubo.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL HEXAEDRO REGULAR ====="<<endl;
                            ladoCubo_a.limpiar();
                            ladoCubo_a.ingresarladoCubo();
                            cout<<endl;
                            resultadoCubo = ladoCubo_a.cuboPerimetro(ladoCubo_a);
                            resultadoCubo.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== VOLUMEN DEL HEXAEDRO REGULAR =====   "<<endl;
                            ladoCubo_a.limpiar();
                            ladoCubo_a.ingresarladoCubo();
                            cout<<endl;
                            resultadoCubo = ladoCubo_a.cuboVolumen(ladoCubo_a);
                            resultadoCubo.imprimirVolumen();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     ===== FIGURA DEL HEXAEDRO REGULAR =====   "<<endl;
                            ladoCubo_a.limpiar();
                            ladoCubo_a.ingresarladoCubo();
                            cout<<endl;
                            resultadoCubo = ladoCubo_a.cuboDiagonal(ladoCubo_a);
                            resultadoCubo.imprimirDiagonal();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"     =====   ÁREA, PERÍMETRO, VOLUMEN Y   ====="<<endl;
                            cout<<"     =====  DIAGONAL DEL HEXAEDRO REGULAR ====="<<endl;
                            ladoCubo_a.limpiar();
                            ladoCubo_a.ingresarladoCubo();
                            cout<<endl;
                            resultadoCubo = ladoCubo_a.cuboArea(ladoCubo_a);
                            resultadoCubo.imprimirArea();
                            cout<<endl;
                            resultadoCubo = ladoCubo_a.cuboPerimetro(ladoCubo_a);
                            resultadoCubo.imprimirPerimetro();
                            cout<<endl;
                            resultadoCubo = ladoCubo_a.cuboVolumen(ladoCubo_a);
                            resultadoCubo.imprimirVolumen();
                            cout<<endl;
                            resultadoCubo = ladoCubo_a.cuboDiagonal(ladoCubo_a);
                            resultadoCubo.imprimirDiagonal();
                            cout<<endl;
                            break;
                        }
                        
                        case 6: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                    
                }
                
                
                case 2: 
                {
                    cout<<"    ===== OCTAEDRO REGULAR ===== "<<endl;
                    ladoCubo_a.menuCaractSolid();
                    cin>>caracteristicasOctaedro;
                    cout<<endl;
            
                    switch (caracteristicasOctaedro) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL OCTAEDRO REGULAR =====   "<<endl;
                            ladoOctaedro_a.limpiar();
                            ladoOctaedro_a.ingresarladoOctaedro();
                            cout<<endl;
                            resultadoOctaedro = ladoOctaedro_a.octaedroArea(ladoOctaedro_a);
                            resultadoOctaedro.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL OCTAEDRO REGULAR ====="<<endl;
                            ladoOctaedro_a.limpiar();
                            ladoOctaedro_a.ingresarladoOctaedro();
                            cout<<endl;
                            resultadoOctaedro = ladoOctaedro_a.octaedroPerimetro(ladoOctaedro_a);
                            resultadoOctaedro.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== VOLUMEN DEL OCTAEDRO REGULAR =====   "<<endl;
                            ladoOctaedro_a.limpiar();
                            ladoOctaedro_a.ingresarladoOctaedro();
                            cout<<endl;
                            resultadoOctaedro = ladoOctaedro_a.octaedroVolumen(ladoOctaedro_a);
                            resultadoOctaedro.imprimirVolumen();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     ===== FIGURA DEL OCTAEDRO REGULAR =====   "<<endl;
                            ladoOctaedro_a.limpiar();
                            ladoOctaedro_a.ingresarladoOctaedro();
                            cout<<endl;
                            resultadoOctaedro = ladoOctaedro_a.octaedroDiagonal(ladoOctaedro_a);
                            resultadoOctaedro.imprimirDiagonal();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"     =====   ÁREA, PERÍMETRO, VOLUMEN Y   ====="<<endl;
                            cout<<"     =====  DIAGONAL DEL OCTAEDRO REGULAR ====="<<endl;
                            ladoOctaedro_a.limpiar();
                            ladoOctaedro_a.ingresarladoOctaedro();
                            cout<<endl;
                            resultadoOctaedro = ladoOctaedro_a.octaedroArea(ladoOctaedro_a);
                            resultadoOctaedro.imprimirArea();
                            cout<<endl;
                            resultadoOctaedro = ladoOctaedro_a.octaedroPerimetro(ladoOctaedro_a);
                            resultadoOctaedro.imprimirPerimetro();
                            cout<<endl;
                            resultadoOctaedro = ladoOctaedro_a.octaedroVolumen(ladoOctaedro_a);
                            resultadoOctaedro.imprimirVolumen();
                            cout<<endl;
                            resultadoOctaedro = ladoOctaedro_a.octaedroDiagonal(ladoOctaedro_a);
                            resultadoOctaedro.imprimirDiagonal();
                            cout<<endl;
                            break;
                        }
                        
                        case 6: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 3: 
                {
                    cout<<"    ===== PARALELEPÍPEDO RECTANGULAR ===== "<<endl;
                    ladoCubo_a.menuCaractSolid();
                    cin>>caracteristicasParalelepipedo;
                    cout<<endl;
            
                    switch (caracteristicasParalelepipedo) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL PARALELEPÍPEDO RECTANGULAR =====   "<<endl;
                            largoP_a.limpiar();
                            largoP_a.ingresarladoParalelepipedo();
                            cout<<endl;
                            resultadoP = largoP_a.paralelepipedoArea(largoP_a);
                            resultadoP.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL PARALELEPÍPEDO RECTANGULAR ====="<<endl;
                            largoP_a.limpiar();
                            largoP_a.ingresarladoParalelepipedo();
                            cout<<endl;
                            resultadoP = largoP_a.paralelepipedoPerimetro(largoP_a);
                            resultadoP.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== VOLUMEN DEL PARALELEPÍPEDO RECTANGULAR =====   "<<endl;
                            largoP_a.limpiar();
                            largoP_a.ingresarladoParalelepipedo();
                            cout<<endl;
                            resultadoP = largoP_a.paralelepipedoVolumen(largoP_a);
                            resultadoP.imprimirVolumen();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     ===== FIGURA DEL PARALELEPÍPEDO RECTANGULAR =====   "<<endl;
                            largoP_a.limpiar();
                            largoP_a.ingresarladoParalelepipedo();
                            cout<<endl;
                            resultadoP = largoP_a.paralelepipedoDiagonal(largoP_a);
                            resultadoP.imprimirDiagonal();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"     =====   ÁREA, PERÍMETRO Y DIAGONAL   ====="<<endl;
                            cout<<"     ===== DEL PARALELEPÍPEDO RECTANGULAR ====="<<endl;
                            largoP_a.limpiar();
                            largoP_a.ingresarladoParalelepipedo();
                            cout<<endl;
                            resultadoP = largoP_a.paralelepipedoArea(largoP_a);
                            resultadoP.imprimirArea();
                            cout<<endl;
                            resultadoP = largoP_a.paralelepipedoPerimetro(largoP_a);
                            resultadoP.imprimirPerimetro();
                            cout<<endl;
                            resultadoP = largoP_a.paralelepipedoVolumen(largoP_a);
                            resultadoP.imprimirVolumen();
                            cout<<endl;
                            resultadoP = largoP_a.paralelepipedoDiagonal(largoP_a);
                            resultadoP.imprimirDiagonal();
                            cout<<endl;
                            break;
                        }
                        
                        case 6: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 4: 
                {
                    cout<<"    ===== CILINDRO  ===== "<<endl;
                    cout<<"    1. Área de la superficie total"<<endl;
                    cout<<"    2. Perímetro"<<endl;
                    cout<<"    3. Volumen"<<endl;
                    cout<<"    4. Todos"<<endl;
                    cout<<"    5. Salir"<<endl;
                    cout<<"    ¿Qué desea saber? ";
                    cin>>caracteristicasCilindro;
                    cout<<endl;
            
                    switch (caracteristicasCilindro) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DEL CILINDRO =====   "<<endl;
                            radioCi_a.limpiar();
                            radioCi_a.ingresarladoCilindro();
                            cout<<endl;
                            resultadoCi = radioCi_a.cilindroArea(radioCi_a);
                            resultadoCi.imprimirArea();
                            cout<<endl;
                            break;
                            
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== PERÍMETRO DEL CILINDRO ====="<<endl;
                            radioCi_a.limpiar();
                            radioCi_a.ingresarladoCilindro();
                            cout<<endl;
                            resultadoCi = radioCi_a.cilindroPerimetro(radioCi_a);
                            resultadoCi.imprimirPerimetro();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     ===== VOLUMEN DEL CILINDRO =====   "<<endl;
                            radioCi_a.limpiar();
                            radioCi_a.ingresarladoCilindro();
                            cout<<endl;
                            resultadoCi = radioCi_a.cilindroVolumen(radioCi_a);
                            resultadoCi.imprimirVolumen();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"     =====  ÁREA, PERÍMETRO Y VOLUMEN  ====="<<endl;
                            cout<<"     =====         DEL CILINDRO        ====="<<endl;
                            radioCi_a.limpiar();
                            radioCi_a.ingresarladoCilindro();
                            cout<<endl;
                            resultadoCi = radioCi_a.cilindroArea(radioCi_a);
                            resultadoCi.imprimirArea();
                            cout<<endl;
                            resultadoCi = radioCi_a.cilindroPerimetro(radioCi_a);
                            resultadoCi.imprimirPerimetro();
                            cout<<endl;
                            resultadoCi = radioCi_a.cilindroVolumen(radioCi_a);
                            resultadoCi.imprimirVolumen();
                            cout<<endl;
                            break;
                        }
                        
                        case 5: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 5: 
                {
                    cout<<"    ===== ESFERA ===== "<<endl;
                    cout<<"    1. Área de la superficie total"<<endl;
                    cout<<"    2. Volumen"<<endl;
                    cout<<"    3. Todos"<<endl;
                    cout<<"    4. Salir"<<endl;
                    cout<<"    ¿Qué desea saber? ";
                    cin>>caracteristicasEsfera;
                    cout<<endl;
            
                    switch (caracteristicasEsfera) 
                    {
                        case 1: 
                        { 
                            cout<<"     ===== ÁREA DE LA ESFERA =====   "<<endl;
                            radioEs_a.limpiar();
                            radioEs_a.ingresarladoEsfera();
                            cout<<endl;
                            resultadoEs = radioEs_a.esferaArea(radioEs_a);
                            resultadoEs.imprimirArea();
                            cout<<endl;
                            break;
                        }
                
                        case 2: 
                        {
                            cout<<"     ===== VOLUMEN DE LA ESFERA ====="<<endl;
                            radioEs_a.limpiar();
                            radioEs_a.ingresarladoEsfera();
                            cout<<endl;
                            resultadoEs = radioEs_a.esferaVolumen(radioEs_a);
                            resultadoEs.imprimirVolumen();
                            cout<<endl;
                            break;
                        }
                     
                        case 3: 
                        {
                            cout<<"     =====  ÁREA Y VOLUMEN  ====="<<endl;
                            cout<<"     =====   DE LA ESFERA   ====="<<endl;
                            radioEs_a.limpiar();
                            radioEs_a.ingresarladoEsfera();
                            cout<<endl;
                            resultadoEs = radioEs_a.esferaArea(radioEs_a);
                            resultadoEs.imprimirArea();
                            cout<<endl;
                            resultadoEs = radioEs_a.esferaVolumen(radioEs_a);
                            resultadoEs.imprimirVolumen();
                            cout<<endl;
                            break;
                        }
                        
                        case 4: 
                        {
                            cout<<"   Volviendo..."<<endl;
                            break;
                        }
                        
                        default: 
                        {
                            cout<<"Error"<<endl;
                            break;
                        }
                    } 
                    break;
                }
                
                
                case 6: {
                    cout<<"     Volviendo..."<<endl;
                    break;
                }
            }
            
            if (solidoGeo >= 1 && solidoGeo <= 5) {
                cout<<endl;
                cout<<"   Desea continuar con el programa..."<<endl;
                cout<<"   1. Elegir otra figura 3D"<<endl;
                cout<<"   2. Regresar al menu"<<endl;
                cout<<"   3. Salir"<<endl;
                cout<<"   ¿Qué desea? ";
                cin>>opcion;
                if(opcion==2) {
                    solidoGeo = 6;
                } else if (opcion == 3) {
                    salir = true;
                    puntos = 3;
                }
            }
          } while(solidoGeo != 6 & !salir);
          break;
        }
        
        case 3: 
        {
            cout<<"      Programa finalizado..."<<endl;
            break;
        }
    }

    gener_a.limpiar();

  } while (puntos != 3);
  
    return 0;
}