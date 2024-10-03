#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <time.h>
#include <iostream>

class Persona{
    
    public:
        Persona(int edad);
        ~Persona();
        int getEdad();
        bool esMujer();
        void setEdad(int edad);
        void Mostrar();
    
    private:
        bool genero;
        int edad;
        char dni[10];
        
};

#endif