#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

//using namespace std;

int Triangulos();

int main(){
    int opcion;
    cout << "Menu" << endl;
    cout << "1) Triangulos" << endl;
    cout << "2) Circulos" << endl;
    cout << "3) Recursivo"<< endl;
    cout << "Ingrese Opcion: " << endl; 
    cin >> opcion;
    switch(opcion) {
	case 1:
	     Triangulos();
	break;
	case 2: 
	break;
	case 3:
	break;
    }
   return 0;

}

int Triangulos(){
   cout << "Ingrese datos del Primer Triangulo" <<endl;

   char dim1_1,dim1_2,dim1_3,dim2_1,dim2_2,dim2_3;
   char ang1_1,ang1_2,ang1_3,ang2_1,ang2_2,ang2_3;

   cout << "Ingrese primer lado del Primer Triangulo"<<endl;
   cin >> dim1_1;
   cout << "Ingrese segundo lado del Primer Triangulo"<<endl;
   cin >> dim1_2;
   cout << "Ingrese tercer lado del Primer Triangulo"<<endl;
   cin >> dim1_3;
   cout << "Ingrese primer angulo del Primer Triangulo"<<endl;
   cin >> ang1_1;
   cout << "Ingrese segundo angulo del Primer Triangulo"<<endl;
   cin >> ang1_2;
   cout << "Ingrese tercer angulo del Primer Triangulo"<<endl;
   cin >> ang1_3;

   cout << "Ingrese primer lado del Segundo Triangulo"<<endl;
   cin >> dim2_1;
   cout << "Ingrese segundo lado del Segundo Triangulo"<<endl;
   cin >> dim2_2;
   cout << "Ingrese tercer lado del Segundo Triangulo"<<endl;
   cin >> dim2_3;
   cout << "Ingrese primer angulo del Segundo Triangulo"<<endl;
   cin >> ang2_1;
   cout << "Ingrese segundo angulo del Segundo Triangulo"<<endl;
   cin >> ang2_2;
   cout << "Ingrese tercer angulo del Segundo Triangulo"<<endl;

   cin >> ang2_3;   
   char Cdim1_1,Cdim1_2,Cdim1_3,Cdim2_1,Cdim2_2,Cdim2_3;
   char Cang1_1,Cang1_2,Cang1_3,Cang2_1,Cang2_2,Cang2_3;

   if((dim1_1 >= 65 && dim1_1 <= 90) || dim1_1 >= 97 && dim1_1 <= 122){
     Cdim1_1 = dim1_1;
   }
   if((dim1_2 >= 65 && dim1_2 <= 90) || dim1_2 >= 97 && dim1_2 <= 122){
     Cdim1_2 = dim1_2;
   }
   if((dim1_3 >= 65 && dim1_3 <= 90) || dim1_3 >= 97 && dim1_3 <= 122){
     Cdim1_3 = dim1_3;
   }
   if((dim2_1 >= 65 && dim2_1 <= 90) || dim2_1 >= 97 && dim2_1 <= 122){
     Cdim2_1 = dim2_1;
   }
   if((dim2_2 >= 65 && dim2_2 <= 90) || dim2_2 >= 97 && dim2_2 <= 122){
     Cdim2_2 = dim2_2;
   }
   if((dim2_3 >= 65 && dim2_3 <= 90) || dim2_3 >= 97 && dim2_3 <= 122){
     Cdim2_3 = dim2_3;
   }

//anguloooooooooos

   if((ang1_1 >= 65 && ang1_1 <= 90) || ang1_1 >= 97 && ang1_1 <= 122){
     Cang1_1 = ang1_1;
   }
   if((ang1_2 >= 65 && ang1_2 <= 90) || ang1_2 >= 97 && ang1_2 <= 122){
     Cang1_2 = ang1_2;
   }
   if((ang1_3 >= 65 && ang1_3 <= 90) || ang1_3 >= 97 && ang1_3 <= 122){
     Cang1_3 = ang1_3;
   }
   if((ang2_1 >= 65 && ang2_1 <= 90) || ang2_1 >= 97 && ang2_1 <= 122){
     Cang2_1 = ang2_1;
   }
   if((ang2_2 >= 65 && ang2_2 <= 90) || ang2_2 >= 97 && ang2_2 <= 122){
     Cang2_2 = ang2_2;
   }
   if((ang2_3 >= 65 && ang2_3 <= 90) || ang2_3 >= 97 && ang2_3 <= 122){
     Cang2_3 = ang2_3;
   }  

   
   return 0;
}
   if( Cang1_1== null || Cang1_2==null){

   }
