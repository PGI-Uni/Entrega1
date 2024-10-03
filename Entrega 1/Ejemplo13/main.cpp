#include <Persona.hpp>
using namespace std;

int main(int argc, char **argv)
{
	//Crear 10 personas
    srand(time(NULL)); //Necesario para generación aleatoria
    for(int i = 0; i<10; i++){
        Persona* persona = new Persona(i+18);
        persona->Mostrar();
    }
    
    return 0;
}
