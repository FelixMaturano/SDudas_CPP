///* Ejercicio 1: Comprobar si un numero es par o impar, y senalar la pocision de la memoria
//donde se esta guardando el numero. Con punteros.*/
//
//#include<iostream>
//using namespace std;
//
//
//int main() {
//
//    int numero, * dir_numero;
//    cout << "Digite un numero :";
//    cin >> numero; // Pedimos el numero al usuario
//
//    dir_numero = &numero;
//
//    if (*dir_numero % 2 == 0)
//    {
//        cout << "El  numero : " << *dir_numero << "es par" << endl;
//        cout << "Pocision: " << dir_numero << endl;
//    }
//    else {
//        cout << "El numero:" << *dir_numero << "es impar" << endl;
//        cout << "Pocision: " << dir_numero << endl;
//    }
//  
//    return 0;
//}



// Fig. 3.3: fig03_03.cpp
 // Define la clase LibroCalificaciones con una funci�n miembro que recibe un par�metro;
 // Crea un objeto LibroCalificaciones y llama a su funci�n mostrarMensaje.
 #include <iostream>
using namespace std;

 #include <string> // el programa usa la clase string est�ndar de C++
 using std::string;
 using std::getline;

 // definici�n de la clase LibroCalificaciones
 class LibroCalificaciones
 {
 public:
 // funci�n que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
		 void mostrarMensaje(string nombreCurso)
		 {
		 cout << "Bienvenido al libro de calificaciones para\n" << nombreCurso << "!"
		 << endl;
		 } // fin de la funci�n mostrarMensaje
	 }; // fin de la clase LibroCalificaciones

 // la funci�n main empieza la ejecuci�n del programa
 int main()
 {
	 string nombreDelCurso; // cadena de caracteres que almacena el nombre del curso
	LibroCalificaciones miLibroCalificaciones; // crea un objeto LibroCalificacionesllamado mi
	LibroCalificaciones;
		
		 // pide y recibe el nombre del curso como entrada
		 cout << "Escriba el nombre del curso:" << endl;
	 getline(cin, nombreDelCurso); // lee el nombre de un curso con espacios en blanco
	 cout << endl; // imprime una l�nea en blanco
	
		 // llama a la funci�n mostrarMensaje de miLibroCalificaciones
		 // y pasa nombreDelCurso como argumento
		 miLibroCalificaciones.mostrarMensaje(nombreDelCurso);
	 return 0; // indica que termin� correctamente
	 } // fin de main

#include<iostream>
#include<string>
 using namespace std;


 class LibroCalificaciones
 {
 public:
	 // funci�n que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
	 void mostrarMensaje(string nombreCurso)
	 {
		 cout << "Bienvenido al libro de calificaciones para\n" << nombreCurso << "!"  << endl;
	 } 
 }; 
