#ifndef BALA_H
#define BALA_H
#include "general.h"

#endif // BALA_H

class bala{
    private:
        double radian = PI / 180;
        double distancia,altura,angulo,analizador,time;
        vector <double> cad;
        int num = 0, cont = 0;
        vector <double> punto;
        double grados, velocidad;
        bool salir = false;
        float ataque = 0;


    public:
        bala(double distancia, double altura);

        void validez (double velocidad, double angulo);
        void disparo_simple (double velocidad, double angulo);
        void disparo_sin_colateral (double velocidad, double angulo);


        ~bala();

};