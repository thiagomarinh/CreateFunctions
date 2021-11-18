#include <iostream> 
using namespace std;

int media( int x, int y);
int converteTemperatura(int x);

int main(){
    int a = 10, b = 20, c = 19;
    
    cout << ("A media é \n");
    cout << (media(a,b));
    cout << "\n";
    cout << "A temperatura em Gruas F é \n";
    cout << (converteTemperatura(c));

}

//Calcula a média entre dois numeros
int media(int x, int y){
    int resultado;
    resultado = (x+y)/2;
    return resultado;
}

//converte temperatura de Celsius para Fahrenheit
int converteTemperatura(int x){
    int converte;
    converte = (x * 9/5) + 32;
    return converte;
}



