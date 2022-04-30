#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include <string.h>
 
using namespace std;
 
 	int menu  (void){
 		cout<<endl;
		cout<<"        BIENVENIDO AL HOTEL SANTA BARBARA    "<<endl;
		cout<<"------------------------------------------------------"<<endl;
		cout<<"\t1-Registrar Informacion del Clientes"<<endl;
		cout<<"\t2-Ver Clientes Registrados"<<endl;
		cout<<"\t3-Registrar informacion de Habitacion"<<endl;
		cout<<"\t4-Salir"<<endl;
		cout<<"------------------------------------------------------";
		cout<<endl;
		cout<<"             Opcion:  ";
		
	}
	
int main()
{
	int opcion, opc2, i=0, max=0, a=0; 
	float ID[50], telefono[50], tiempo[50];
	string nom[50], ape[50],tipoHabi[50];
	int anio,dd,mm,aa;

	
	do{
		menu();
		cin>>opcion;
		system("cls");
		switch (opcion){
			case 1:
				i++;
				cout<<"*****************************************"<<endl;
				cout<<"ID:  ";
		       	cin>>ID[i];
		       	cout<<endl;
		       	cout<<"Nombre:  ";
				cin>>nom[i];
				cout<<endl;
				cout<<"Apellido: ";
				cin>>ape[i];
				cout<<endl;
				cout<<"Numero de Celular:  ";
				cin>>telefono[i];
				cout<<endl;
				cout<<"Tiempo de Hospedaje (En Dias): ";
				cin>>tiempo[i];
				cout<<endl;
				cout<<"*****************************************"<<endl;
				cout<<"1-Regresar\n";
				cin>>opc2;
				system("cls");
				break;
				
				
			case 2 :
			anio = 20220429;
            dd = anio % 100;
            mm = (anio / 100) % 100;
            aa = (anio / 100) / 100;
            
            cout<<"          BIENVENIDO AL HOTEL SANTA BARBARA    "<<endl;
            cout<"****************************************************************************";
			cout<<setprecision(0)<<fixed<<"   Nombre de cliente: "<<nom[i]<<endl;
			cout<<setprecision(0)<<fixed<<"   Apellido: "<<ape[i]<<endl;
			cout<<setprecision(0)<<fixed<<"   Numero de ID de cliente: "<<ID[i]<<endl;
			cout<<setprecision(0)<<fixed<<"   Numero de telefono de cliente: "<<telefono[i]<<endl;
			cout<<setprecision(0)<<fixed<<"   Tipo de Habitacion: "<<tipoHabi[a]<<endl;
			cout << "  Fecha de Reservacion:  "<<dd << " del " << mm << " del " << aa << endl;
			cout<"****************************************************************************";

			cout<<"1-Regresar\n";
			cin>>opc2;
			system("cls");
		    break;
		
		case 3:
			a++;
			    cout<<"        BIENVENIDO AL HOTEL SANTA BARBARA    "<<endl;
			    cout<<"------------------------------------"<<endl;
				cout<<"Habitaciones Disponibles "<<endl;
				cout<<"|"<<10<<"|"<<"Estandar (1 Persona) "<<endl;
				cout<<"|"<<10<<"|"<<"Mediana (2 o mas personas) "<<endl;
				cout<<"|"<<10<<"|"<<"Grande (Mas de 5 Personas"<<endl;
				cout<<"--------------------------------------"<<endl;
				cin>>tipoHabi[a];
					system("cls");
					break;
		}
			
		}while(opc2 == 1);
}

		
		
