#include <iostream>
using namespace std;

int media( int x, int y);
int main(){
    int a = 10, b = 20;
    cout << (media(a,b));
    

}

int media(int x, int y){
    int resultado;
    resultado = (x+y)/2;
    return resultado;
}



