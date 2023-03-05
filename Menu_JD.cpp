#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>
using namespace std;

	void Menu_Select();
	int Menu_Write();
	void Basic_Op();
	void Det_Par_in();
	void Con_K_m_l();
	void Con_ara_rom();
	void con_int_words();
	void Tab_Mult_Select ();
	void All_Table();
	void Graphic_Form();
	void con_deci_bi();
	void Con_Deci_Hexa();
	void fig_Geo();
	void sim_cajero();
	void Cal_Hipo();
	void Order_Num();
	void Ord_Matriz();
	void Read_File();
	int Alg_Uclides();

	
	main(){
		
		cout<<"-------------------------------------Bienvenido Programas Basicos en C++--------------------------------------"<<endl;
		cout<<" "<<endl;
		Menu_Write();
		Menu_Select();
		

		system("pause");
	}
	void Menu_Select(){
		int select;
		cout<<"Ing. el numero del programa que desea seleccionar: ";
		cin>>select;
			switch (select){
				case 1:
					Basic_Op();
					break;
				case 2:
					Det_Par_in();
					break;
				case 3:
					Con_K_m_l();
					break;
				case 4:
				cout<<" No lo pude realizar ";
					break;
				case 5:
					Con_ara_rom();
					break;
				case 6:
					con_int_words();
					break;
				case 7:
				cout<<" No lo pude realizar";
					break;
				case 8:
					Tab_Mult_Select ();
					break;
				case 9:
					All_Table();
					break;
				case 10:
					Graphic_Form();
					break;
				case 11 :
					con_deci_bi();
					break;
				case 12:
					Con_Deci_Hexa();
					break;
				case 13:
					fig_Geo();
					break;
				case 14:
					cout<<"No lo pude Realizar:";
        			break;
				case 15:
					sim_cajero();
					break;
				case 16:
					Cal_Hipo();
					break;
				case 17:
					Order_Num();
					break;
				case 18:
					Ord_Matriz();
					break;
				case 19:
					Read_File();
					break;
				case 20:
					Alg_Uclides();
					break;

			default:
				cout<<" "<<endl;
				cout<<"!!Ingrese otra opcion!!"<<endl;
			}
}
int Menu_Write(){
	
	cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros. "<<"11. Conversion de numeros decimas a binario. "<<endl;
	cout<<"2. Derterminar si un numero es par o impar.               "<<"12. Conversion de numeros decimales a hexadecimales."<<endl;
	cout<<"3. Convertir de Kilometros a millas, metros a pulgadas,   "<<"13. Crear figuras geometricas basicas."<<endl;
	cout<<"   de libras a kilos y viceversa."<<endl;
	cout<<"4. Determinar si una palabra o un numero es palindromo.   "<<"14. Mover un punto en toda la pantalla."<<endl;
	cout<<"5. Conversion de numeros arabigos a romanos.              "<<"15. Simulacion de un cajero (Automata)."<<endl;
	cout<<"6. Conversion de numeros enteros a letras.                "<<"16. Calcular la hipotenusa."<<endl;
	cout<<"7. Conversion de numeros enteros con decimal a letras.    "<<"17. Ordenar numeros de menor a mayor."<<endl;
	cout<<"8.Una tabla de multiplicar.                               "<<"18. Ordenar una Matriz."<<endl;
	cout<<"9. Todas las tablas de multiplicar del 1 al 10.           "<<"19. Apertura de archito tipo .txt."<<endl;
	cout<<"10. Crear de forma grafica la multiplicacion manual.      "<<"20. Algoritmo de Euclides."<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
}
