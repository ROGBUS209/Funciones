#include <stdio.h>
#include <stdlib.h>

//definición
void checar(int);
void caf();
void fac();
void cak();
void fak();
void kaf();
void kac();

int main(int argc, char** argv) {
    int x;
    
    do{
   x = 0; 
   system("cmd /c cls");
   printf("\n--seleccione la opcion deseada:\n");
   printf("1 - la temperatura de c a f es \n");
   printf("2 - la temperatura de f a c es \n");
   printf("3 - la temperatura de c a k es \n");
   printf("4 - la temperatura de f a k es \n");
   printf("5 - la temperatura de k a f es \n ");
   printf("6 - la temperatura de k a c es \n ");
   printf("7 - salir \n");
   printf("seleccione: ");
   scanf("%d",&x);
   checar(x);
    }
    //Mostramos el menú hasta que la opción sea cero
    while(x != 7);
    return (EXIT_SUCCESS);
}
//funcion ya esta implementada ()

void checar (int x){
switch(x){
case 1:{
caf();
break;
    } 
case 2:{
fac();
break;
    }
case 3:{
cak();
break;
    } 
case 4:{
fak();
break;
    } 
case 5:{
kaf();
break;
    } 
case 6:{
kac();
break;
    } 
case 7:{
printf("salir\n");
break;
    } 
default:{
printf("defecto\n");
break;
    } 
}    
}
 void caf(){
    printf("\n ingrese los grados c: ");
    float c = 0; 
    scanf("%f",&c);
    float f = c * 1.8 + 32;
    printf("los grados f son : %f \n",f);
    system("cmd /c pause");
}
void fac(){
    printf("\nDeme la temperatura deseada: ");
    float f = 0; 
    scanf("%f",&f);
    float celsius = (f-32)*5/9;
    printf("los grados  celsius son : %f\n", celsius);
    system("cmd /c pause");
}
void cak(){
    printf("\nDeme la temperatura deseada: ");
    float c = 0; 
    scanf("%f",&c);
    float kelvin = c+273.15;
    printf("los grados kelvin son : %f \n", kelvin);
    system("cmd /c pause");
}
void fak(){
    printf("\nDame la temperatura deseada: ");
    float f = 0;
    scanf("%f",&f);
    float kelvin = (f-32)*5/9+273.15;
    printf(" los grados kelvin son: %f \n", kelvin);
    system("cmd /c pause");
}
void kaf(){
    printf("\nDeme la temperatura deseada: ");
    float k = 0; 
    scanf("%f",&k);
    float fahrenheit = (k-273.15)*9/5+32;
    printf("los grados farenheit son : %f \n", fahrenheit);
    system("cmd /c pause");
}

void kac(){
    printf("\nDeme la temperatura deseada: ");
    float k = 0; 
    scanf("%f",&k);
    float celsius = k-273.15;
    printf("los grados celsius son : %f\n ", celsius);
    system("cmd /c pause");
}


