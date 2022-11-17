/******************************************************************************
 
 autor -> Luis Acosta	
 Carrera -> Ing. Informatica
 seccion -> C611
 
*******************************************************************************/
 
 // Libreria
#include <iostream>

using namespace std; 

int maximoRegistro;
int contador = 1;

string nombre[30];
string apellido[30];
string cedula[30];
float promedioTotal[30];
float edad[30];
float corteUno[30];
float corteDos[30];

// Funciones 

	// Honores o no
	void honores(float promedio){

			float promed;

				promed = promedio;

				if (promed < 18)
				{
					cout << "Sin Honores!!.."<<endl;
				}
				else if (promed >= 18 and promed <= 18.99)
				{
					cout << "Con Honores de -> Cum Laude"<<endl;
				}

				else if (promed >= 19 and promed <= 19.99)
				{
					cout << "Con Honores de -> Summa Cum Laude"<<endl;
				}

				else if (promed == 20)
				{
					cout << "Con Honores de -> Magna Cum Laude"<<endl<<endl;
				}
				else if (promed >=21)
				{
					cout << "Promedio Falso!!.. Xd"<<endl;
				}
		}

	// Registro
	void registro(){

		//Temp
		string nom;
		string ape;
		string cedu;
		float eda;
		float corteUn;
		float corteDo;
		float prome;

		// Datos a solicitar
	    cout << "Numero de registro de estudiante: "<<contador<<endl;
	    cout << "Nombre: "; cin >> nom;
	    cout << "Apellido: "; cin >> ape;
	    cout << "Cedula: "; cin >> cedu;
	    cout << "Edad: "; cin >> eda;
	    cout << "Nota Corte 1: "; cin >> corteUn;
	    cout << "Nota Corte 2: "; cin >> corteDo;
		
		// Datos a ingresar en su respectivo array
		nombre[contador] = nom; // Nombre
		apellido[contador] = ape; // Apellido
		cedula[contador] = cedu; // Cedula
		edad[contador] = eda; // Edad
		corteUno[contador] = corteUn; // Nota corte 1
		corteDos[contador] = corteDo; // Nota corte 2
		promedioTotal[contador] = (corteUn * 0.4) + (corteDo * 0.6); // Promedio

		contador++;
	}

	// Consultas especificas
	void consultas(){


		if (contador >= 2){

			// Temp
			int numeroList;
			int opcion;

			cout << "Numero del estudiante a consultar : " ; cin>> numeroList;

			if (numeroList <= contador and numeroList >= 1){

				cout << "\nDatos a consultar : "<<endl<<endl;

				cout << "Menu:"<<endl;
				cout << "1- Nombre y apellido: "<<endl; 
			    cout << "2- Cedula: "<<endl;
			    cout << "3- Edad: "<<endl; 
			    cout << "4- Notas Corte 1: "<<endl; 
			    cout << "5- Nota Corte 2: "<<endl;
			    cout << "6- Promedio: "<< endl;
			    cout << "opcion: "; cin >> opcion;

			    if (opcion == 1){
			    	cout << "\nconsulta -> Nombre y apellido : "<<nombre[numeroList]<<" "<<apellido[numeroList]<<endl<<endl;
			    }
			    else if (opcion == 2){
			    	cout << "\nconsulta -> Cedula : "<<cedula[numeroList]<<endl<<endl;
			    }
			    else if (opcion == 3){
			    	cout << "\nconsulta -> Edad : "<<edad[numeroList]<<endl<<endl;
			    }
			    else if (opcion == 4){
			    	cout << "\nconsulta -> Notas Corte 1 : "<<corteUno[numeroList]<<endl<<endl;
			    }
			    else if (opcion == 5){
			    	cout << "\nconsulta -> Nota Corte 2 : "<<corteDos[numeroList]<<endl<<endl;
			    }
			    else if (opcion == 6){
			    	cout << "\nconsulta -> Promedio : "<<promedioTotal[numeroList]<<endl;
			    	cout << "Graduacion con honores o sin Honores : ";
			    	 honores(promedioTotal[numeroList]);
			    }
			}

			else{
				cout << "Numero no existente!!.. "<<endl;
			    }
		}
		else{
			cout << "\nNo hay registro de estudiante para hacer una consulta!!.. "<<endl;
		    }
	}
	
	// Modificacion
	void modificacion(){
		if (contador >= 2){
		
			//temp
			int numeroEdi;
			int opcion;
			int opcionDos;
			string nombreNew;
			string apellidoNew;
			string cedulaNew;
			float edadNew;
			float corteUnoNew;
			float corteDosNew;
			float PromedioNwe;

			cout << "Numero de lista del estudiante a editar : "; cin >> numeroEdi;

			if (numeroEdi <= contador){
				
				system("CLS");
				cout << "Informe del estudiante a editar: "<<endl<<endl;

				cout << "numeroLista\t   Nombre y apellido\tCedula\t      Edad\tCorte 1\tCorte2\tPromedio"<<endl;

				cout <<numeroEdi<<"#\t\t   "<<nombre[numeroEdi]<<" "<<apellido[numeroEdi]<<"\t\t"<<cedula[numeroEdi]<<"\t"<<edad[numeroEdi]<<"\t"<<corteUno[numeroEdi]<<"\t"<<corteDos[numeroEdi]<<"\t"<<promedioTotal[numeroEdi]<<endl;

				cout << "\nQue tipo de cambio deseas hacer: "<<endl;
				cout << "1- Cambiar todo "<<endl;
				cout << "2- Dato específicos "<<endl;
				cout << "Opcion : "; cin >> opcionDos; 
				if (opcionDos == 1)
				{
					// Datos a editar

						// Temp
						string nom;
						string ape;
						string cedu;
						int eda;
						int corteUn;
						int corteDo;

				    	cout << "\nNuevo Nombre: "; cin >> nom;
				    	cout << "Nuevo Apellido: "; cin >> ape;
				    	cout << "Nueva Cedula: "; cin >> cedu;
				    	cout << "Nueva Edad: "; cin >> eda;
				    	cout << "Nueva Nota Corte 1: "; cin >> corteUn;
				    	cout << "Nueva Nota Corte 2: "; cin >> corteDo;

				    	// Enviar datos editados
				    	nombre[numeroEdi] = nom;
				    	apellido[numeroEdi] = ape;
				    	cedula[numeroEdi] = cedu;
				    	edad[numeroEdi] = eda;
				    	corteUno[numeroEdi] = corteUn;
				    	corteDos[numeroEdi] = corteDo;

				    	cout << "\nLa Edicion fue Exitozamente!!.."<<endl;
				}

				else if (opcionDos == 2){

					cout << "\nMenu de Edicion: "<<endl;
					cout << "1- Nombre"<<endl;
					cout << "2- Apellido"<<endl;
					cout << "3- Cedula"<<endl;
					cout << "4- Edad"<<endl;
					cout << "5- Nota corte 1"<<endl;
					cout << "6- Nota corte 2"<<endl;
					cout << "7- No Editar"<<endl;
					cout << "opcion : ";
					cin >> opcion;

					if (opcion == 1){
						cout << "Nombre nuevo : "; cin>> nombreNew;
						nombre[numeroEdi] = nombreNew;
						cout << "El Cambio fue exitoso!!.."<<endl;
					}
					else if (opcion == 2){
						cout << "Apellido nuevo : "; cin>> apellidoNew;
						apellido[numeroEdi] = apellidoNew;
						cout << "El Cambio fue exitoso!!.."<<endl;
					}
					else if (opcion == 3){
						cout << "Cedula nueva : "; cin>> cedulaNew;
						cedula[numeroEdi] = cedulaNew;
						cout << "El Cambio fue exitoso!!.."<<endl;
					}
					else if (opcion == 4){
						cout << "Edad nueva : "; cin>> edadNew;
						edad[numeroEdi] = edadNew;
						cout << "El Cambio fue exitoso!!.."<<endl;
					}
					else if (opcion == 5){
						cout << "Nota del corte 1 nuevo : "; cin>> corteUnoNew;
						corteUno[numeroEdi] = corteUnoNew;
						cout << "El Cambio fue exitoso!!.."<<endl;
					}
					else if (opcion == 6){
						cout << "Nota del corte 2 nuevo : "; cin>> corteDosNew;
						corteDos[numeroEdi] = corteDosNew;
						cout << "El Cambio fue exitoso!!.."<<endl;
					}
					else if (opcion == 7){
						cout << "No se edito ningun dato!!.. "<<endl;
						}
						else{
							cout << "Numero Desconocido!!.."<<endl;
						}
				}
				else{
					cout <<"Numero Desconocido!!.."<<endl;
				}
			}
			else{
				cout << "Numero no encontrado!!.."<<endl;
			}
		}
	}

	
	// imprimir alumnos
	void imprimirDatos(){

			if (contador >= 2){

				cout << "Informe de estudiantes: "<<endl<<endl;

			    cout << "Estudiantes["<<contador - 1<<"]:\t     Nombre y apellido\t\tCedula\t\tEdad\t\tCorte1\tCorte2\tPromedio"<<endl;
				for (int i = 1; i < contador; ++i){
					cout <<i<<"#\t\t        "<<nombre[i]<<" "<<apellido[i]<<"\t\t"<<cedula[i]<<"\t  "<<edad[i]<<"\t\t   "<<corteUno[i]<<"\t  "<<corteDos[i]<<"\t"<<promedioTotal[i]<<endl;
				}

			}
			else{
				cout << "\nNo se encuentra ningun estudiante registrado!!.."<<endl;
			}	
		}

	
	// Promedio de edades y promedio de cada estudiantes
	void promedios(){

		if (contador >= 2){

				// Promedio de la edad
				float aux; // Guarda todas las edades
				float promeEdad; // Promedio de las edades
				int cantid = 0;

				for (int i = 1; i < contador; ++i){
					  aux += edad[i];
					  cantid++;
				}

				promeEdad = aux / cantid;

				// promedio del promedio de los estudiantes
				float auxDos; // Guarda todos los promedio
				float promeProme; // Promedio del promedio
				int cantidos = 0;

				for (int j = 1; j < contador; ++j){
					  auxDos += promedioTotal[j];
					  cantidos++;
				}

				promeProme = auxDos / cantidos;


				// Mostrar datos
				cout << "Edad promedio de todos los estudiantes: "<<promeEdad<<endl;
				cout << "Promedio de todo los estudiantes : "<<promeProme<<endl<<endl;

		}
		else{
			cout << "\nPromedio no disponible, debe registrar un estudiante!!.."<<endl;
			}	
	}


	// Eliminar Datos
	void eliminarDatos(){

		if (contador >= 2){

			//	Temp
			int eliminar;

			  cout << "\n Seguro que desea eliminar todos los datos? : "<<endl;
		      cout << "1- Si"<<endl;
		      cout << "2- No"<<endl;
		      cout << "\nOpcion: "; cin >> eliminar;
		        if (eliminar == 1){
			      	for (int i = 0; i < contador; ++i){
			      		nombre[i] = "0";
			      		apellido[i] = "0";
			      		cedula[i] = "0";
			      		edad[i] = 0;
			      		corteUno[i] = 0;
			      		corteDos[i] = 0;
			      		promedioTotal[i] = 0;
			      	}
		      	contador = 1;
		      	cout << "\nDatos eliminados Exitozamente!!.."<<endl;
			    }
		}
		else{
			cout << "\nNo se encontro ningun registro para eliminar!!.."<<endl;
		}
	}


	// pequeño resumen
	void resumen(){

		if (contador >= 2){

		// Temp
		int estudiante;

		cout << "Numero del estudiante que pide un resumen: ";
		cin >> estudiante;

		         cout << "\nEl estudiante "<<nombre[estudiante]<< " "<<apellido[estudiante]<< ", con cedula de identidad "<<cedula[estudiante]<<","<<endl<<"con la edad de :"<<edad[estudiante]<<" de la carrera de informatica";
				 cout << "Desea ver sus notas del trimestre las cuales son: Corte1 : "<<corteUno[estudiante]<<" , corte2 : "<<corteDos[estudiante]<<", tiene un promedio "<<endl;
				 cout << "de "<<promedioTotal[estudiante]<<" , queda en apta que el estudiante acepto el pequeño resumen de sus notas de trimestre"<<endl;
		}
		else(
			cout << "No se encuentran ningun registro para hacer un resumen!!.."<<endl);
}


int main(){	

int entradaDos = 1; 
int entrada = 1;
int opcion = 0;
int aux;
int eliminar = 0;

	while(entradaDos == 1){

		cout << "Ingrese el número de estudiantes a registrar, rango permitidos es, entre 1 y 30 maximos: ";
		cin >>aux;

		if (aux >= 1 and aux <=30){
			maximoRegistro = aux;
			entradaDos = entradaDos + 1;
		}
		else{
			system("CLS");
			cout << "Cantidad incorrecta!!, vuelve intertarlo.."<<endl;
		}
	}

while(entrada == 1){ // menu

	system("CLS");
    cout << "Menu: "<<endl;
    cout << "1-  Registrar a un alumno."<<endl;
    cout << "2-  Consultar datos específicos de un alumno"<<endl;
    cout << "3-  Modificar los datos de un alumno"<<endl;
    cout << "4-  Imprimir un resumen de todos los datos del estudiante"<<endl;
    cout << "5-  Imprimir el promedio de la edad del salon mas el promedio de las notas"<<endl;
    cout << "6-  Borrar a todos los estudiantes del registro."<<endl;
    cout << "7-  Tabla completa de los estudiantes registrados."<<endl;
    cout << "8-  salir"<<endl;
    
    cout <<"Opcion: "; cin >> opcion;

    if (opcion == 1){ // Registrar a un alumno.
    	if(contador <= maximoRegistro){    
		    system("CLS");
		    registro();
		}
		
		else{
			cout << "\nA alcanzado el registro maximo permitido!!"<<endl;
			system("Pause");
		}
    } 

    else if (opcion == 2){ // Consultar datos específicos de un alumno (seleccionar un alumno, y luego seleccionar qué dato en particular imprimir).
       consultas();
       system("Pause");
    } 
    
    else if (opcion == 3){ // Modificar los datos de un alumno
    	modificacion();
    	system("Pause");
    } 
    
    else if (opcion == 4){ // Imprimir un resumen de todos los datos del estudiante
       resumen();
       system("Pause");
    } 
    
    else if (opcion == 5){ // Imprimir el promedio de la edad del salon mas el promedio de las notas
      promedios();
      system("Pause");
    } 
    
    else if (opcion == 6){ // Borrar a todos los estudiantes del registro.
      eliminarDatos();
      system("Pause");
    }

    else if (opcion == 7){ // Extra Tabla completa de los registros
      imprimirDatos();
      system("Pause");
    }  
    
    else if (opcion == 8){ // Salir
    	entrada++;
    } 
    
    else{
    	system("CLS");
    	cout << "Numero no identificado!!!\n"<<endl;
	}

}

cout << "\nFin del Programa Vuelve pronto!!\n";

    return 0; // Fin
}
/******************************************************************************
 
 autor -> Luis Acosta	
 Carrera -> Ing. Informatica
 seccion -> C611
 
*******************************************************************************/