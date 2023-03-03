#include <iostream>
#include <string>
#include<Math.h>

using namespace std;

int main()

{
    cout<<"\n"<<"-----MENU DE OPCIONES-----: ";
   
    "\n";
    
    cout<<"\n"<<" OP-----1:-------Suma, Resta, Multiplicacion y Division de dos numeros ";
    cout<<"\n"<<" OP-----2:-------Determinar si un numero es par o impar: ";
    cout<<"\n"<<" OP-----3:-------Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa";
    cout<<"\n"<<" OP-----4:-------Determinar si una palabra o un numero es palindromo";
    cout<<"\n"<<" OP-----5:-------Conversion de numeros arábigos a romanos (minimo 1,000)";
    cout<<"\n"<<" OP-----6:-------Conversion de numeros enteros a letras";
    cout<<"\n"<<" OP-----7:-------Conversion de numeros enteros con decimal a letras";
    cout<<"\n"<<" OP-----8:-------TABLA DE MULTIPLICAR";
    cout<<"\n"<<" OP-----9:-------Todas las tablas de multiplicar del 1 al 10";
    cout<<"\n"<<" OP-----A = 10:------Crear de forma grafica la multiplicacion manual"; // nota: puse letra porque el case no me reconocio el numero a partir del 10..//
    cout<<"\n"<<" OP-----B = 11:------Conversion numero decimal a binario";
    cout<<"\n"<<" OP-----C = 12:------Conversion de números decimales a hexadecimales";
    cout<<"\n"<<" OP-----D = 13:------Crear Figuras Geometricas Basicas";
    cout<<"\n"<<" OP-----E = 14:------Mover un punto en toda la pantalla";
    cout<<"\n"<<" OP-----F = 15:------Simulacion de un Cajero (Automata)";
    cout<<"\n"<<" OP-----G = 16:------Muestre la hipotenusa";
    cout<<"\n"<<" OP-----H = 17:------Muestre el codigo de area de cada pais de centroamerica";
    cout<<"\n"<<" OP-----I = 18:------Muestre el promedio de las notas";
    cout<<"\n"<<" OP-----J = 19:------Conversion numeros pares e impares";
    cout<<"\n"<<" OP-----K = 20:------Hallar el area del triangulo";
    cout<<"\n"<<" OP-----S------SALIR DEL MENU";
    
    cout<<"\n"<<"  ";
     cout<<"\n"<<"Ingrese la Opcion a ejecutar: ";
    char opcion;

    cin >> opcion;

 

    switch(opcion)

    {

        case '1': cout<<"\n"<< "Usted ha seleccionado la opcion 1";
        
        int a,b, suma,resta,multi,divi;
		cout<<"\n"<<"ingrese primer numero:     ";
		cin>>a;
		cout<<"\n"<<"ingrese segundo numero:    ";
		cin>>b;
		suma= a+b;
		resta= a-b;
		multi= a*b;
		divi= a/b;
		cout<<"\n"<<"la suma es " <<suma;
		cout<<"\n"<<"la resta es " <<resta;
		cout<<"\n"<<"la la multiplicacion es " <<multi;
		cout<<"\n"<<"la division es " <<divi;

        break;



        case '2': cout<<"\n"<< "Usted ha seleccionado la opcion 2";
        int n;
		cout<<"\n"<<"ingrese un numero";
		cout<<"\n";
		cin>>n;

				if ( n % 2 == 0 )
				{
				cout<<"el numero es par ";
				}

				else
				cout<<"el numero es impar ";


        break;
        
        

        case '3': cout<<"\n"<< "Usted ha seleccionado la opcion 3";
         float km,mi,m,in,lb,kg;
         
    		cout<<"\n"<<"ingrese cantidad en kilometros";
			cin>>km;

			mi=km*0.621;
			cout<<"\n"<<"las Millas son " <<mi;
			
			cout<<"\n"<<"    ";
			
			cout<<"\n"<<"ingrese cantidad en metros";
			cin>>m;

			in=m*39.37;
			cout<<"\n"<<"las pulgadas son " <<in;
			
			cout<<"\n"<<"    ";
			
			
			cout<<"\n"<<"ingrese cantidad en libras";
			cin>>lb;

			kg=lb*0.454;
			cout<<"\n"<<"los kilos son " <<kg;
			

        break;
        
        case '4': 	cout<<"\n"<< "Usted ha seleccionado la opcion 4";
        {
		
        string palabra;
        int i,numeros;
   			cout<<"\n"<<  "Ingrese una palabra: ";
   		cin >> palabra;
   			cout<<"\n"<<"INGRESE NUMERO PARA SABER SI SON PALINDROMOS O NO";
   			cin>>numeros;
  		    
			cout<<"\n";

   		int longitud = palabra.length();
   		bool esPalindromo = true;

			for (int i = 0; i < longitud / 2; i++) {
      		if (palabra[i] != palabra[longitud - 1 - i]) {
         	esPalindromo = false;
         	break;
      			}
   				}

   				if (esPalindromo) {
      			cout<<"\n"<<  "La palabra " << palabra << " es un palindromo." << endl;
   			    } else {
      	        cout<<"\n"<<  "La palabra " << palabra << " no es un palindromo." << endl;
                }	
				
		
			
			if (numeros <=9)
			cout<<"el numero es palindromo";

			if((numeros>=10)&&(numeros<100))
 			{
 			 if  (numeros% 11==0)
   			{
    		cout<<"el numero es palindromo";
   			}		   
    		else
    		cout<<"el numero es no palindromo";
 			}  
 			if((numeros>=100)&&(numeros<1000))
 			{
  			if  (numeros% 111==0)
   			{
    		cout<<"el numero es palindromo";
   			}   
    		else
    		cout<<"el numero es No palindromo";
 			}	  		
    return 0;
	}
		
        system("pause");
        break;
        
        

       case '5': cout<<"\n"<< "Usted ha seleccionado la opcion 5";
        {
	 int c;
	 int d;
	 int m;
	 float n;
	 int u;
	 cout<<"\n"<< "Escribe un numero" << endl;
	 cin >> n;
	 m = int(n/1000)%10;
	 c = int(n/100)%10;
	 d = int(n/10)%10;
	 u = int(n/1)%10;
	 if (m>3) {
		cout<<"\n"<< "El numero no se puede calcular" << endl;
	 } else {
		switch (m) {
		case 1:
			cout << "M";
			break;
		case 2:
			cout << "MM";
			break;
		case 3:
			cout << "MMM";
			break;
		}
		switch (c) {
		case 1:
			cout << "C";
			break;
		case 2:
			cout << "CC";
			break;
		case 3:
			cout << "CCC";
			break;
		case 4:
			cout << "CD";
			break;
		case 5:
			cout << "D";
			break;
		case 6:
			cout << "DC";
			break;
		case 7:
			cout << "DCC";
			break;
		case 8:
			cout << "DCCC";
			break;
		case 9:
			cout << "CM";
			break;
		}
		switch (d) {
		case 1:
			cout << "X";
			break;
		case 2:
			cout << "XX";
			break;
		case 3:
			cout << "XXX";
			break;
		case 4:
			cout << "XL";
			break;
		case 5:
			cout << "L";
			break;
		case 6:
			cout << "LX";
			break;
		case 7:
			cout << "LXX";
			break;
		case 8:
			cout << "LXXX";
			break;
		case 9:
			cout << "XC";
			break;
		}
		switch (u) {
		case 1:
			cout << "I" << endl;
			break;
		case 2:
			cout << "II" << endl;
			break;
		case 3:
			cout << "III" << endl;
			break;
		case 4:
			cout << "IV" << endl;
			break;
		case 5:
			cout << "V" << endl;
			break;
		case 6:
			cout << "VI" << endl;
			break;
		case 7:
			cout << "VII" << endl;
			break;
		case 8:
			cout << "VIII" << endl;
			break;
		case 9:
			cout << "IX" << endl;
			break;
		}
 	}
	 return 0;
	 }
        break;
        
       
 case '6': cout<<"\n"<< "Usted ha seleccionado la opcion 6";
        {

int x;
	 cout<<"\n"<<"ingrese un numero"<<endl;
	 cin>>x;
     if((x<1)||(x>999)) cout<<"\n"<<"INGRESA UN NUMERO DEL 1 AL 999\n";
     else

    	{
		if(x>=900)	{cout<<"NOVECIENTOS "	;x=x-900;}
   	   else if(x>=800)	{cout<<"OCHOCIENTOS "	;x=x-800;}
	   else if(x>=700)	{cout<<"SETECIENTOS "	;x=x-700;}
	   else if(x>=600)	{cout<<"SEISCIENTOS "	;x=x-600;}
	   else if(x>=500)	{cout<<"QUINIENTOS "	;x=x-500;}
	   else if(x>=400)	{cout<<"CUATROCIENTOS "	;x=x-400;}
	   else if(x>=300)	{cout<<"TRESCIENTOS "	;x=x-300;}
	   else if(x>=200)	{cout<<"DOSCIENTOS "	;x=x-200;}
	   else if(x>100)	{cout<<"CIENTO "	;x=x-100;}
	   else if(x==100)	{cout<<"CIEN"		;x=x-100;}
		if(x>90)	{cout<<"NOVENTA Y "	;x=x-90; }
	    	if(x==90)	{cout<<"NOVENTA"	;x=x-90; }  
	    	if(x>80)	{cout<<"OCHENTA Y "	;x=x-80; }
	    	if(x==80)	{cout<<"OCHENTA"	;x=x-80; }
	    	if(x>70)	{cout<<"SETENTA Y "	;x=x-70; }
	    	if(x==70)	{cout<<"SETENTA"	;x=x-70; }
	    	if(x>60)	{cout<<"SESENTA Y "	;x=x-60; }
	    	if(x==60)	{cout<<"SESENTA"	;x=x-60; }
	    	if(x>50)	{cout<<"CINCUENTA Y "	;x=x-50; }
	    	if(x==50)	{cout<<"CINCUENTA"	;x=x-50; }
	    	if(x>40)	{cout<<"CUARENTA Y "	;x=x-40; }
	    	if(x==40)	{cout<<"CUARENTA"	;x=x-40; }
	    	if(x>30)	{cout<<"TREINTA Y "	;x=x-30; }
	    	if(x==30)	{cout<<"TREINTA"	;x=x-30; }
	    	if(x>20)	{cout<<"VEINTI"		;x=x-20; }
	    	if(x==20)	{cout<<"VEINTE"		;x=x-20; }
		if(x>=16)	{cout<<"DIECI"		;x=x-10; }
	   else if(x==15)	{cout<<"QUINCE"		;x=x-15; }
	   else if(x==14)	{cout<<"CATORCE"	;x=x-14; }
	   else if(x==13)	{cout<<"TRECE"		;x=x-13; } 
	   else if(x==12)	{cout<<"DOCE"		;x=x-12; }
	   else if(x==11)	{cout<<"ONCE"		;x=x-11; }
	   else if(x==10)	{cout<<"DIEZ"		;x=x-10; }		
		if(x==9)	{cout<<"NUEVE"		;x=x-9;  }
		if(x==8)	{cout<<"OCHO"		;x=x-8;  }
		if(x==7)	{cout<<"SIETE"		;x=x-7;  }
	    	if(x==6)	{cout<<"SEIS"		;x=x-6;  }
	   else if(x==5)	{cout<<"CINCO"		;x=x-5;  }
	   else if(x==4)	{cout<<"CUATRO"		;x=x-4;	 }
	   else if(x==3)	{cout<<"TRES"		;x=x-3;	 }
	   else if(x==2)	{cout<<"DOS"		;x=x-2;	 }
	   else if(x==1)	{cout<<"UNO"		;x=x-1;	 }
	   }
      cout<<endl;
	  cin.ignore();return 0;
	  }

  
  
  case '7': cout<<"\n"<< "Usted ha seleccionado la opcion 7";
  {
  
        
{
     double valor;
     int miles,cientos,unidades,decimales;
     char numeros[100][20] = 
     {
     {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
     {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
     {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
     {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
     {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
     {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
     {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
     {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
     {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
     {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
      };
     char centenas[10][20] = 
     {
     {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
     };
     std::cout<<"\n"<<"Ingrese numero a convertir: ";
     std::cin >> valor;
     miles = ((int)valor)/1000;
     cientos = (((int)valor)%1000)/100;
     unidades = ((int)valor)%100;
     decimales = ((int) (valor*100.0))%100 ;
     if (miles)
     std::cout << numeros[miles] << " mil ";
     if (cientos)
     std::cout << centenas[cientos] << " ";
     if (unidades) 
     std::cout << numeros[unidades];
     if (decimales)
      {
     if(miles || cientos || unidades)
     {
     std::cout << " con ";
     }
     std::cout << numeros[decimales] << " ";
     }
     std::cout << std::endl;
     system("pause");
			return 0;
    }
	case '8': cout<<"\n"<< "Usted ha seleccionado la opcion 8";
  {
  	int n;
	int i;
	cout<<"\n"<<"ingrese Numero  de tabla de multiplicar";
	cout<<"\n";
	cin>>n;


	for (i=1; i<=10; i++)
		{
	cout<<"\n";
	cout<<n<<"*"<<i<<"="<<n*i;

		}
  	
  	return 0;
  	}
  	
	case '9': cout<<"\n"<< "Usted ha seleccionado la opcion 9";
  {
  	  int n;
	int i;
	cout<<"\n"<<"TABLAS DE MULTIPLICAR 1 AL 10";
	cout<<"\n";
   
    for (int i = 1; i <= 10; i++) {
        cout << "Tabla de multiplicar del " << i << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i*j << endl;
        }
        cout << endl;
    }

	
  return 0;	 
  }
  
    	case 'A': cout<<"\n"<< "Usted ha seleccionado la opcion 10";
  {
  	
  	float num1, num2, resultado,espacio;
  	
  	cout<<"\n"<<"Ingrese primer numero";
  	cin>>num1;
  	cout<<"\n"<<"Ingrese segundo numero";
  	cin>>num2;
  	
     cout<<"\n"<< "  " << num1 << endl;
     cout<<"\n"<< "x " << num2 << endl;
     cout<<"\n"<< "-----" << endl;
     while (num2 > 0.0) {
        resultado = num1 * (num2 - int(num2));
        num2 = int(num2);
        espacio += 1.0;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << resultado << endl;
        resultado = num1 * num2;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << resultado << endl;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << "-----" << endl;
        num2 /= 10.0;
     }
     resultado = num1 * int(num2);
     for (float i = 0.0; i < espacio; i += 1.0) {
        cout << " ";
     }
     cout << resultado << endl;
     cout << "-----" << endl;
     cout << " " << num1 * num2 << endl;
  	
  	return 0;
  }
  
      	case 'B': cout<<"\n"<< "Usted ha seleccionado la opcion 11";
  {
  	    float binario;
 	int n;
 	float x;
 	cout<<"\n"<<"Escribe un numero" << endl;
 	cin >> n;
 	cout<<"\n"<<"El numero " << n << " convertido a binario es: " << endl;
 	x = 1;
 	binario = 0;
 	while (n>=1) {
		if (n%2==1) {
			binario = binario+x;
		}
		n = int(n/2);
		x = x*10;
 	}
 	cout<<"\n"<< binario << endl;
  	
  
  	
  	return 0;
  } 
      
         case 'C': cout<<"\n"<< "Usted ha seleccionado la opcion 12";
  {
  	    int decimal;
    std::cout<<"\n" "Ingrese un numero decimal: ";
    std::cin >> decimal;

    char hex[9];
    sprintf(hex, "%X", decimal);

    std::cout<<"\n""El numero decimal " << decimal << " en hexadecimal es: " << hex << std::endl;

  	
  	
  	
  	
  		return 0;
  } 
  
  
  
  
  
  
      	case 'D': cout<<"\n"<< "Usted ha seleccionado la opcion 13";
  {
  
        std::cout << "Triangulo:\n\n";
    std::cout << "     *     \n";
    std::cout << "    ***    \n";
    std::cout << "   *****   \n";
    std::cout << "  *******  \n";
    std::cout << " ********* \n\n";

    std::cout << "Cuadrado:\n\n";
    std::cout << " ********* \n";
    std::cout << " *       * \n";
    std::cout << " *       * \n";
    std::cout << " *       * \n";
    std::cout << " ********* \n\n";
     
    std::cout << "Rombo:\n\n";
    std::cout << "     *     \n";
    std::cout << "          \n";
    std::cout << " *   *   * \n";
    std::cout << "         \n";
    std::cout << "     *      \n\n"; 
     
  
  
  	return 0;
  } 
  
  
        	case 'E': cout<<"\n"<< "Usted ha seleccionado la opcion 14";
         {
         	int x = 0, y = 0; // Coordenadas iniciales del punto
    int dx = 1, dy = 1; // Incrementos para mover el punto

    while (true)
    {
        // Borrar la pantalla
        system("cls");

        // Imprimir el punto en las coordenadas x,y
        for (int i = 0; i < y; i++)
            std::cout << std::endl;
        for (int i = 0; i < x; i++)
            std::cout << " ";
        std::cout << "o" << std::endl;

        // Mover el punto
        x += dx;
        y += dy;

        // Cambiar la dirección del movimiento si el punto alcanza los bordes de la pantalla
        if (x == 0 || x == 79) // 79 es el ancho máximo de la pantalla en caracteres
            dx = -dx;
        if (y == 0 || y == 24) // 24 es la altura máxima de la pantalla en caracteres
            dy = -dy;

        break;
    }
}
return 0;
    
    
    	case 'F': cout<<"\n"<< "Usted ha seleccionado la opcion 15";
       {
		 float contador;
	 string contrasena;
	 float deposito;
	 int respuesta;
	 float retiro;
	 float saldo;
	 saldo = 1000;
	 contador = 1;
 	while (contador<=3) {
		cout<<"\n"<< "Escribe la contraseña" << endl;
		cin >> contrasena;
		if (contrasena=="12345") {
			contador = 4;
			respuesta = 0;
			while (respuesta!=4) {
				cout<<"\n"<<  "1: = Consultar saldo" << endl;
				cout<<"\n"<< "2: = Ingresar saldo" << endl;
				cout<<"\n"<< "3: = Retirar saldo" << endl;
				cout<<"\n"<< "4: = Salir" << endl;
				cin >> respuesta;
				switch (respuesta) {
				case 1:
					cout<<"\n"<< "Tu saldo actual es: $" << saldo << endl;
					break;
				case 2:
					cout << "Ingresa la cantidad a depositar" << endl;
					cin >> deposito;
					saldo = saldo+deposito;
					cout<<"\n"<< "Tu saldo actual es es: $" << saldo << endl;
					break;
				case 3:
					cout<<"\n"<< "Ingresa la cantidad a retirar" << endl;
					cin >> retiro;
					if (retiro>saldo) {
						cout<<"\n"<< "La cantidad supera el saldo" << endl;
						cout<<"\n"<< "Tu saldo actual es: $" << saldo << endl;
					} else {
						saldo = saldo-retiro;
						cout<<"\n"<<  "Tu saldo actual es: $" << saldo << endl;
					}
					break;
				}
			}
		} else {
			contador = contador+1;
			if (contador==4) {
				cout<<"\n"<< "Has fallado los 3 intentos" << endl;
			} else {
				cout<<"\n"<<  "La contrasena es incorrecta" << endl;
			}
		}
	 }
         
    }
    return 0;
    
   case 'G': cout<<"\n"<< "Usted ha seleccionado la opcion 16";
     {
     
    float a, b, c; // Lados del triángulo rectángulo

    std::cout<<"\n"<< "Ingrese la longitud del primer cateto: ";
    std::cin >> a;

    std::cout<<"\n"<<"Ingrese la longitud del segundo cateto: ";
    std::cin >> b;

    c = sqrt(a*a + b*b); // Calcular la hipotenusa utilizando la fórmula de Pitágoras

    std::cout<<"\n"<< "La longitud de la hipotenusa es: " << c << std::endl;

	 }
return 0;

     
        case 'H': cout<<"\n"<< "Usted ha seleccionado la opcion 17";
     {

          int pais;

    cout<<"\n"<<"Ingrese el codigo de area";
   
    
    cin >> pais;

    switch(pais) {
        case 501:
            cout << "Belice";
            break;
        case 506:
            cout << "Costa Rica";
            break;
        case 503:
            cout << "El Salvador";
            break;
        case 502:
            cout << "Guatemala";
            break;
        case 504:
            cout << "Honduras";
            break;
        case 505:
            cout << "Nicaragua";
            break;
        case 507:
            cout << "Panama";
            break;
        default:
            cout << "El número de país ingresado no es válido.\n";
            break;
    }

    
     }
   
     return 0;
     
     
     
       case 'I': cout<<"\n"<< "Usted ha seleccionado la opcion 18";
     {
       int n1=0,n2=0,n3=0;	
		float promedio =0;
		string mensaje="";
		cout<<"\n"<<"Ingrese Nota1:";
		cin>>n1;
		cout<<"Ingrese Nota2:";
		cin>>n2;
		cout<<"Ingrese Nota3:";
		cin>>n3;
		promedio = (n1+n2+n3)/3;
		mensaje = promedio >60 ?"Aprobado" : "Reprobado";
		cout<<"El Promedio es: "<<promedio<<" Por lo tanto esta "<<mensaje<<endl;

		if(promedio>=0 && promedio<61){
		cout<<"Mala nota";
		}

		if(promedio>=61 && promedio<81){
		cout<<"Buena nota";
		}

		if(promedio>=81){
		cout<<"Excelente nota";
		}

		system("pause");	
		}
     
     
     
      }
   
     return 0;
     
       case 'J': cout<<"\n"<< "Usted ha seleccionado la opcion 19";
     {
    int num=0;	
	cout<<"\n"<<"Ingrese Numero:";
		cin>>num;

	if ((num%2)==0){
		cout<<"Par"<<endl;
		
	}
	else
	{
			cout<<"Impar"<<endl;
		}
      }
   
     return 0;
     
     
     case 'K': cout<<"\n"<< "Usted ha seleccionado la opcion 20";
     {
     	
     
     float base;
     float altura;
     
     cout<<"\n"<< "ingrese base";
     cin>>base;
     
     cout<<"\n"<< "ingrese altura";
     cin>>altura;
     
     float area = (base * altura) / 2;
     std::cout << "El area del triangulo es: " << area << std::endl;
     return 0;
     
     
    
      }
   
     return 0;
     
     
      case 'S': cout<<"\n"<< "Usted ha seleccionado la opcion SALIR";
     {
       cout<<"\n"<<"YA NO HAY NADA QUE MOSTRAR"<<endl;{
  	 return 0;
	 }
     default: cout<<"\n"<<"EL VALOR ES NULO"<<endl;
     
	 
}
   
     return 0;
     
     
     
     

  return 0;
}
}











