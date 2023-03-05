#include "Menu_JD.cpp"
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include<fstream>

using namespace std;
int Num_Unit(int unit);

void Basic_Op(){
	cout<<"-----Operaciones Basicas-----"<<endl;
	int num1=0, num2=0;
	double div=0;
	cout<<"Ing. El Primer Numero: ";
	cin>>num1;
	cout<<"Ing. El Segundo Numero: ";
	cin>>num2;
	div=num1/num2;
	cout<<"Suma de "<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
	cout<<"Resta de "<<num1<<" - "<<num2<<" = "<<(num1-num2)<<endl;
	cout<<"Multiplicacion de "<<num1<<" * "<<num2<<" = "<<(num1*num2)<<endl;
	cout<<"Divisionde "<<num1<<" / "<<num2<<" = "<<div<<endl;
}

void Det_Par_in(){
	cout<<"-----Numeros Pares e Impares-----"<<endl;
	int num=0;
	cout<<"Ing. un numero: ";
	cin>>num;
	if (num==0){
		cout<<num<<" es neutro. "<<endl;
	}else{
	if ((num%2)==0){
		cout<<num<<" es par."<<endl;
	}else{
		cout<<num<<" es impar. "<<endl;
	}}
	
}

void Con_K_m_l(){
	cout<<"-----Conversiones de Longitud-----"<<endl;
	int select=0,cant=0;
	cout<<"1. Conversion Kilometros a millas <--> Viceversa 4."<<endl;
	cout<<"2. Conversion Metros a pulgadas   <--> Viceversa 5."<<endl;
	cout<<"3. Conversion Libras a Kilos      <--> Viceversa 6."<<endl;
	
	cout<<"Ing. el numero de conversion que desea realizar: ";
	cin>>select;
	switch (select){
		case 1:
			cout<<"Kilometros a millas"<<endl;
			cout<<"Ing. Cantidad en Km...";
			cin>>cant;
			cout<<cant<<" equivalen a "<<(cant*0.621371)<<" millas"<<endl;
			
			break;
		case 2:
			cout<<"Metros a pulgadas"<<endl;
			cout<<"Ing. Cantidad en Metros...";
			cin>>cant;
			cout<<cant<<" equivalen a "<<(cant*39.3701)<<" pulgadas"<<endl;
			break;
		case 3:
			cout<<"Libras a Kilos"<<endl;
			cout<<"Ing. magnitud en libras...";
			cin>>cant;
			cout<<cant<<" equivalen a "<<(cant*0.454)<<" Kilos"<<endl;
			break;
		case 4:
			cout<<"Millas a Kilometros"<<endl;
			cout<<"Ing. Cantidad en millas...";
			cin>>cant;
			cout<<cant<<" mill equivalen a "<<(cant/0.621371)<<" km"<<endl;
			break;
		case 5:
			cout<<"Pulgadas a metros"<<endl;
			cout<<"Ing. Cantidad en pulgadas...";
			cin>>cant;
			cout<<cant<<" equivalen a "<<(cant/39.3701)<<" m"<<endl;
			break;
		case 6:
			cout<<"Kilo a libras"<<endl;
			cout<<"Ing. magnitud en Kilos...";
			cin>>cant;
			cout<<cant<<" equivalen a "<<(cant/0.454)<<" libras"<<endl;
			default:
				cout<<" !!!Regresando al menu principal!!! "<<endl;
	}
}

/*void Palin(){
	char word[100];
	char wordsnspace[100];
	cout"Ing. Una frase o Palabra: "<<endl;
	gets(word);
	
}*/
void Con_ara_rom(){
	/*
	M=1000 D=500 C=100 l=50 x+10 V=5 I=1 */
	cout<<"--Conversion de Numeros arabigos a romanos--"<<endl;
	int num=0, unidades,decenas,centenas,millar ;
	
	cout<<"Ing. Un Numero:"<<endl;
	cin>>num;
	
	// numero = desglozar en unidades	
	unidades = num%10; num/=10;
	decenas = num%10; num/=10;
	centenas = num%10; num/=10;
	millar = num%10; num/=10;
	
	switch (millar){
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM"; break;
	}
	
	switch (centenas){
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CCC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCCC"; break;
		case 9: cout<<"CM"; break;


	}	
		switch (decenas){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break;

	}	
		switch (unidades){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IV"; break;

	}			
}
void con_int_words(){
	cout<<"---Conversion de numeros a letras---"<<endl;
	int num, unit, decena, cent, unmil;
	cout<<"Ing. un Numero de 0 a 9999: ";
	cin>>num;
	
	unit = num%10; num/=10;
	decena = num%10; num/=10;
	cent = num%10; num/=10;
	unmil = num%10; num/=10;
	
	switch (unmil){
		case 0: cout<<" "; break;
		case 1: cout<<"mil "; break;
		case 2: cout<<"Dos mil "; break;
		case 3: cout<<"Tres mil "; break;
		case 4: cout<<"Cuatro mil "; break;
		case 5: cout<<"Cinco mil "; break;
		case 6: cout<<"Seis mil "; break;
		case 7: cout<<"Siete mil "; break;
		case 8: cout<<"Ocho mil  "; break;
		case 9: cout<<"Nueve mil "; break;
		
	}
	
	switch (cent){
		case 0: cout<<" "; break;
		case 1: if (decena == 0 && unit == 0){
					cout<<"Cien ";
				}else{
					cout<<"Ciento ";
				} 
		break;
		case 2: cout<<"Docientos "; break;
		case 3: cout<<"Trescientos "; break;
		case 4: cout<<"Cuatrocientos "; break;
		case 5: cout<<"Quinientos "; break;
		case 6: cout<<"Seiscientos"; break;
		case 7: cout<<"Setecientos "; break;
		case 8: cout<<"Ochocientos "; break;
		case 9: cout<<"Novecientos "; break;
	}	
		switch (decena){
			
		case 1:	switch(unit){
				case 0: cout<<"Diez "; break;
				case 1: cout<<"Once "; break;
				case 2: cout<<"Doce "; break;
				case 3: cout<<"Trece "; break;
				case 4: cout<<"Catorce "; break;
				case 5: cout<<"Quince "; break;
				case 6: cout<<"Dieciseis "; break;
				case 7: cout<<"Diecisiete "; break;
				case 8: cout<<"Dieciocho "; break;
				case 9: cout<<"Diecinueve "; break;
			}
			break;
			
		case 2:  if (unit==0){ cout<<"Veinte "; }else{
			cout<<"Veinti";
			Num_Unit(unit);
			}
			break;
			
		case 3:  if (unit==0){ cout<<"Treinta "; }else{
			cout<<"Treinta y ";
			Num_Unit(unit);
			}
			break;
			
		case 4:  if (unit==0){ cout<<"Cuarenta "; }else{
			cout<<"Cuarenta y ";
			Num_Unit(unit);
			}
			break;
			
		case 5:  if (unit==0){ cout<<"Cincuenta "; }else{
			cout<<"Cincuenta y ";
			Num_Unit(unit);
			}
			break;
			
		case 6:  if (unit==0){ cout<<"Sesenta "; }else{
			cout<<"Sesenta y ";
			Num_Unit(unit);
			}
			break;
		
		case 7:  if (unit==0){ cout<<"Setenta "; }else{
			cout<<"Setenta y ";
			Num_Unit(unit);
			}
			break;
			
		case 8:  if (unit==0){ cout<<"Ochenta "; }else{
			cout<<"Ochenta y ";
			Num_Unit(unit);
			}
			break;
			
		case 9:  if (unit==0){ cout<<"Noventa "; }else{
			cout<<"Noventa y ";
			Num_Unit(unit);
			}
			break;
}
	if ((unmil==0 && cent==0 && decena==0) || (unmil<=0 && cent<=0 && decena<=0)){
	Num_Unit(unit);
	}else{
		cout<<"";
	}

}

int Num_Unit(int unit){
			switch(unit){
				case 0: cout<<""; break;
				case 1: cout<<"uno "; break;
				case 2: cout<<"dos "; break;
				case 3: cout<<"tres "; break;
				case 4: cout<<"cuatro "; break;
				case 5: cout<<"cinco "; break;
				case 6: cout<<"seis "; break;
				case 7: cout<<"siete "; break;
				case 8: cout<<"ocho "; break;
				case 9: cout<<"nueve "; break;
}
}

void Tab_Mult_Select (){
	cout<<"---Tablas de multiplicar a eleccion---"<<endl;
	int num=0, var=0;
	cout<<"Ing. el Numero de la tabla que desea desplegar: ";
	cin>>num;
	while (var!=11){
		cout<<var<<" x "<<num<<" = "<<(var*num)<<endl;
		var++;
	}
	
}

void All_Table(){
	cout<<"------Tablas de Multiplicar------"<<endl;
	for (int i=1; i<11; i++){
		cout<<"Tabla del "<<i<<": "<<endl;
		for (int a=0 ; a<11; a++){
			cout<<i<<" x "<<a<<"= "<<(i*a)<<endl;
		}
	}
}

void Graphic_Form(){
	cout<<"---Multiplicacion en forma grafica/manual---"<<endl;
	int a=45, b=32, c=0, d=0, f=0, g, unit, decena, mult, multi, multo, multos,multis, result;
	result=a*b;
	cout<<"   "<<a<<endl;
	cout<<" x "<<b<<endl;
	cout<<"________"<<endl;
	
	unit = a%10; a/=10;
	decena = a%10;
	c=unit;
	d=decena;
	unit = b%10; b/=10;
	decena = b%10;
	f=unit;
	g=decena;
	
	mult=(c*f)%10; multo=(c*f)/10;
	multi=(f*d)+multo;
	
	multos=(g*c)%10; multo=(g*c)/10;
	multis=(g*d)+multo;


	cout<<"   "<<multi<<mult<<endl;
	cout<<" "<<multis<<multos<<endl;
	cout<<"__________"<<endl;
	cout<<" "<<result<<endl;
	
}

void con_deci_bi(){
	cout<<"-Conversion de numeros decimales a binarios-"<<endl;
	int num=0,aux=0, mu1=1, a;
	cout<<"Ing. un Numero: ";
	cin>>num;
	a=num;
	while(num>1){
		int mod=num%2;
		aux+=mu1*mod;
		mu1=mu1*10;
		num=num/2;	
	}
	aux+=mu1;
	
	cout<<"Numero: "<<a<<" es en binario: "<<aux<<endl;
	
}

void Con_Deci_Hexa(){
	cout<<"-Conversion de numeros decimales a hexadecimales-"<<endl;
	int digitoex[20];
	int deci, resi, resul, i=0, a;
	cout<<"Ing. un numero decimal: "<<endl;
	cin>>deci;
	a=deci;
	do{
		resi= deci%16;
		resul = deci/16;
		digitoex[i] = resi;
		deci = resul;
		i++;
		
	}while(resul>15);
	
	digitoex[i] = resul;
	cout<<"El No. "<<a<<" equivale en hexadecimal ";
	for (int j=i; j>=0; j--){
		if (digitoex[j]==10){
			cout<<"A";
		}else if(digitoex[j]==11){
			cout<<"B";
		}else if (digitoex[j]==12){
			cout<<"C";
		}else if (digitoex[j]==13){
			cout<<"D";
		}else if (digitoex[j]==14){
			cout<<"E";
		}else if(digitoex[j]==15){
			cout<<"F";
		}else {
			cout<<digitoex[j];
		}
		cout<<endl;
	}
}

void fig_Geo(){
	cout<<"--------Figuras Geometricas-------"<<endl;

	cout<<"----Figuras en C++: "<<endl;
	int i,j,fil,n=0;
	
	cout<<"Ing. No. de Filas de la dfigura: ";
	cin>>fil;
	cout<<"\n\n";
	cout<<"Triangulo: "<<endl;
	
	for (i=0; i < fil; i++){
		
		for(j=0; j< fil-i; j++){
			cout<<" ";
		}
		
		for (j=0; j<i*2+1; j++){
			cout<<"*";
		}
		cout<<"\n";
		}
		cout<<"_________________________________"<<endl;
		cout<<"Cuadrado: "<<endl;
	
	for (i=0; i<fil; i++)
	{
		for(j=0; j<fil; j++){
			cout<<"* ";
		}
		cout<<"\n";
		}
	
		cout<<"_________________________________"<<endl;
		cout<<"Escalera : "<<endl;
		
		for(i=0; i<fil; i++){
			for (j=0; j<i; j++){
				cout<<"*";
			}
			cout<<"\n";
		}
	
	/*	cout<<"_________________________________"<<endl;
		cout<<"Circulo : "<<endl;
	for (int j=0; j<=fil*2; j++){
		for (int i=0; i<=fil*2; i++){
			
			if (Pow(i-fil,2.0)+Pow(j-fil,2.0))<= _Pow_int(fil,2) {
				cout<<"*";
			}else{
				cout<<(" ");
			}
		}
		cout<<"\n";
	}
	*/
	
}


/*void gotoxy (short a, short b);
void Mov_Scre(){
	gotoxy(15,25);
	printf("x");
	getch();
}
void gotoxy (short a, short b){
	COORD coordinates; //Data type of co-ordinates
    coordinates.X = a; //Assign value to X- Co-ordinate
    coordinates.Y = b; //Assign value to Y Co-ordinate
 
SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	
}*/

void sim_cajero(){
	int sal_init=1000, Op;
	float acre, saldo=0, retiro;
	
	cout<<"------------------Cajero-----------------"<<endl;
	cout<<"------Bienvenido a Banco Industrial------"<<endl;
	cout<<"1. Acreditar a su cuenta."<<endl;
	cout<<"2. Retirar efectivo de su cuenta."<<endl;
	cout<<"3. Salir..."<<endl;
	cout<<"_________________________________________"<<endl;
	cout<<"Ing. su Opcion"<<endl;
	cin>>Op;
	
	switch (Op){
		case 1:
			cout<<"Digite la cantidad de direno a acreditar"<<endl;
			cin>>acre;
			saldo = sal_init + acre;
			cout<<"Saldo Inicial:"<<sal_init<<endl;
			cout<<"Saldo a acreditar +"<<acre<<endl;
			cout<<"______________________"<<endl;
			cout<<"Total Credito:__"<<saldo<<endl;
			break;
		case 2:
			cout<<"Digite la cantidad de direno a retirar"<<endl;
			cin>>retiro;
			if (retiro>sal_init){
				cout<<"!!Saldo Insuficiente!!"<<endl;
				
			}else {
			saldo = sal_init - retiro;
			cout<<"Saldo Inicial:      "<<sal_init<<endl;
			cout<<"Cantidad a retirar -"<<acre<<endl;
			cout<<"________________________________"<<endl;
			cout<<"Saldo Total:__"<<saldo<<endl;
				
			}

			break;
			
		case 3: break;
	}
}

void Cal_Hipo(){
	cout<<"Calculo de la Hipotenusa"<<endl;
	
	double hipo;
	int ady, op;
	
	cout<<"Ing. la base del triangulo: ";
	cin>>ady;
	cout<<"Inge la altura del triangulo: ";
	cin>>op;
	hipo= sqrt (pow(ady,2)+pow(op,2));
	cout<<"La hipotenusa es: "<<hipo<<endl;
	
}

void Order_Num(){
	cout<<"Ordenar Numeros de Menor a Mayor:"<<endl;
	int vec [100],num,reo=0,b=0,i;
	int order ();
	
	cout<<"Ing. la cantidad de numeros que desea ingresar"<<endl;
    cin>>num;
    for (int i=0;i<num;i++)
    {
        cout<<"Digite el numero No. "<<i+1<<" : ";
        cin>>vec[i];
    }
    
    for (int i=0;i<num;i++)
    {
        for (int a=0;a<num;a++)
        {
            if (vec[i] < vec[a])
            {

            reo = vec[i];
            vec[i] = vec[a];
            vec[a]= reo;
        }
    }
    }

        for (int i=0;i<num;i++)
            cout<<vec[i]<<endl;
}


void Ord_Matriz(){
	cout<<"----Orden de Matriz Metodo Burbuja----"<<endl;
	int mat [3][3];
	int vec [16];
	int cont=0,aux=0;
	cout << "------Bienvenido------" << endl;
    cout<<endl;
    cout<<"Ingrese 16 numeros"<<endl;

    for (int a=0;a<4;a++)
    {
        for (int b=0;b<4;b++)
        {
            cout<<"Numero "<<a<<" , "<<b<<": ";
            cin>>mat[a][b];
        }
    }
    //Ordenamiento de Matriz Metodo Burbuaja//
    aux=0;
    for (int c=0;c<4;c++)
    {
        for (int d=0;d<4;d++)
        {
            vec[cont]=mat[c][d];
            cont++;

        }
    }


    for (int c=0;c<16;c++)
    {
        for (int d=1;d<16;d++)
        {
            if (vec[d]>vec[d+1])
            {
                aux=vec[d];
                vec[d]=vec[d+1];
                vec[d+1]=aux;
            }

        }
    }

    // Imprimir matriz//
    cont=0;

    for (int c=0;c<4;c++)
    {
        for (int d=0;d<4;d++)
        {
            mat[c][d]=vec[cont];
            cont++;

        }
    }

    for (int i=0;i<4;i++)
        {
            for (int h=0;h<4;h++)
            {
                cout<<mat[i][h]<<" ";
            }
            cout<<endl;
        }	
}

void Read_File(){
	cout<<"Apertura de Archivo .txt "<<endl;
	
	string namebss,codbss1;
	char codbss;
	int a=-1,b=0;
    cout<<endl;
    cout<<"Ing. Codigo de la Empresa ";
    cin>>codbss;
    codbss1=codbss;

    ifstream fi;
    fi.open(codbss + ".txt");
    if (!fi)
    {
        cout <<  "Error al encontrar el archivo!!!"<< endl;
    }
    else
    {
		cout<<"Archivo encontrado..."<<endl;
    	fi.close();
	}
}

int vec [100];
int m(int x, int y) {

			if (x==0){
			return y;
			}
			return m(y%x,x);
			}
int Alg_Uclides(){
	cout<<"---------Algoritmo de Euclides----------"<<endl;
	int x,y,a;

    cout<<"Ingrese la cantidad de numeros a evaluar"<<endl;
    cin>>a;
    for (int i=0;i<a;i++)
        {
          cout<<"ingrese numero" << i+1<< ": ";
         cin>>vec[i];
        }

	/*cout<<"ingrese primer numero: ";
	cin>>x;
	cout<<"Ingrese segundo numero: ";
	cin>>y;*/
	cout<<"";

				cout<<"\n El maximo comun divisor de: ("<<x<<","<<y<<") = "<< m( x, y)<<endl;

	return 0;
	
}




