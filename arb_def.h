#ifndef ARB_H
#define ARB_H
#include <stdio.h>
#include <iostream>
#include "variables.h"
/* Definicion de la clase base ArbolSintactico */

class ArbolSintactico {
	ArbolSintactico * first;
	public:
		int ident;
		int linea;
		bool is_type;
		ArbolSintactico(): is_type(0){};
		ArbolSintactico(int i): ident(i),is_type(0) {};
		ArbolSintactico(ArbolSintactico * l): first(l),is_type(0) {};
		virtual void imprimir(int i){ if(first != NULL) first->imprimir(i); }; 
		virtual int get_ident(){ return ident; }
		virtual void add_variable(int tipo, bool doble){ return; }
		virtual void check(){;}
		virtual void ejecutar(){if(first != NULL) first->ejecutar();}
		virtual int * get_value(){;}
		virtual bool * get_bool(){;}
		virtual char * get_character(){;}
		virtual void activate(){;}
		virtual void deactivate(){;}
		virtual bool advance(){;}
		virtual void add_comportamiento(ArbolSintactico * comp){;}
		virtual void add_value(variable * value){;}
};


#endif