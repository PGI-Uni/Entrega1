#include <Persona.hpp>
using namespace std;

Persona::Persona(int edad){
    this->edad = edad;
    //Funcion aleatoria para generar DNI y genero
    for (int i = 0; i<8; i++){ //Generar lista char de 8 numeros
        this->dni[i] = '0' + rand()%10; //Es necesario el 0 porque sino solo mostrara valores ascii, el cero suma 48 en ascii que es donde se encuentran los numeros del 0 al 9
    }
    //Añadir la letra al DNI
    char letras[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    this->dni[8] = letras[rand()%26];
    this->dni[9] = '\0';
    
    this->genero = rand()%2;
}

Persona::~Persona(){
    
}

int Persona::getEdad(){
    return this->edad;
}

bool Persona::esMujer(){
    if (this->genero == 1) return true;
    else return false;
}

void Persona::setEdad(int edad){
    this->edad = edad;
}

void Persona::Mostrar(){
    cout << "DNI: " << this->dni << ". Edad: " << this->edad << ". Genero: ";
    if(esMujer()) {cout << "Mujer\n";}
    else {cout << "Hombre\n";}
}
