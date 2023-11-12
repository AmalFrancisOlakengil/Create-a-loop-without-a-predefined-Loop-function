#include <stdio.h>
void num1(int y){
    int x = y;
    if(x>1){
        printf("%d", x);
        num2(x);
    }
}
void num2(int x){
    int z = x;
    if(z>1){
        printf("%d", z);
        num1(z);
    }
}


int main() {
    int y =3;
    num1(y);
}
