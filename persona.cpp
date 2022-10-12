#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected :string nombre,apellido,direccion;
	           int telefono;
	//constructor           
	protected:
		Persona(){
		}
	Persona(string nom,string ape,string dir,int tel){
		nombre = nom;
		apellido = ape;
		direccion = dir;
		telefono = tel;
			}
	//metodos
	void mostrar();				    
};