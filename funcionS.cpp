gcc suma.c -o suma
./suma
git init
git add suma.c
  git commit -m "primer comando"
git add suma.c
git commit -m "Mejorar el programa para manejar números negativos y positivos"
echo '#include <stdio.h>

int main() {
    int num1, num2, suma;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    suma = num1 + num2;
    
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);
    
    return 0;
}' > suma.c

gcc suma.c -o suma
./suma

git init
git add suma.c
git commit -m "Agregar archivo suma.c con el código de suma"
