#pragma once

class Bateria{
    // Para cada bateria se registra el número de bateria, el nombre, el tipo de bateria y la cantidad de unidades en stock.
    // El tipo define a qué clase de batería pertenece (1: auto; 2: moto; 3: camion; 4: lancha). 

private:
    int numBateria; // Identificador ind de cada bateria
    char nombreBateria[50];
    short tipoBateria;
    int cantStock;


public:

    ///getters y setters
    void setNumBateria(int _num);
    void setNombreBateria(char* _nomb);
    void setTipoBateria(short _tipo);
    void setCantStock(int _cant);

    int getNumBateria();
    char getNombreBateria();
    short getTipoBateria();
    int getCantStock();

    ///metodos:
    bool Cargar(int _cod=0);
    void Mostrar();

};

