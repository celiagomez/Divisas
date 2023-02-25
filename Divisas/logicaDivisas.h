#pragma once

#include<iostream> //Incluye la biblioteca de entrada y salida estándar de C++

namespace Divisas {
    using namespace std;

    /*Se define una clase base abstracta llamada Conversor que tiene una función virtual pura llamada convertir() y un miembro de datos llamado amount.
    También se define un destructor virtual predeterminado.*/

    class Conversor {
    public:
        virtual double convertir() = 0;
        double amount;
        virtual ~Conversor() = default; //destructor
    };
    /*Se define una clase derivada llamada USDConversion que hereda de Conversor y proporciona una implementación concreta de la función convertir().
    En este caso, la implementación establece el valor de amount en 1.07 y devuelve el valor.*/
    class USDConversion : public Conversor {
    public:
        double convertir() {
            amount = 1.07;
            return amount;
        }
    };
    /*Se define otra clase derivada llamada JPYConversion que también hereda de Conversor y proporciona una implementación concreta de la función convertir().
    En este caso, la implementación establece el valor de amount en 147.77 y devuelve el valor.*/
    class JPYConversion : public Conversor {
    public:
        double convertir() {
            amount = 147.77;
            return amount;
        }
    };
    /*Se define una tercera clase derivada llamada GBPConversion que también hereda de Conversor y proporciona una implementación concreta de la función convertir().
    En este caso, la implementación establece el valor de amount en 0.89 y devuelve el valor.*/
    class GBPConversion : public Conversor {
    public:
        double convertir() {
            amount = 0.89;
            return amount;
        }
    };

};

