#include<stdio.h>

int main()
{
    int x = 25;
    int y, i;
    int mat[5], mat2[3];
    int *pont, *pont2;
    pont = &x;
    printf("Valor da variavel x = %d\n", x);
    printf("Endereço da variavel x = %p\n", (void*)&x);
    printf("Endereço contido no ponteiro pont = %p\n", (void*)pont);
    printf("Valor apontado pelo ponteiro pont = %d\n", *pont);
    printf("Endereço do ponteiro pont = %p\n", (void*)&pont);
    printf("Digite o valor da variavel y = ");
    scanf("%d", &y);
    pont2 = &y;
    printf("Valor da variavel y = %d\n", y);
    printf("Endereço da variavel y = %p\n", (void*)pont2);
    printf("Endereço do ponteiro de y = %p\n", &pont2);

    for(i=0;i<5;i++)
    {
        printf("Insira o valor da componente da matriz[%i]\n", i);
        scanf("%d",&mat[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("Valores das componentes = %d\n", mat[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("Insira o valor da componente da matriz2[%i]\n", i);
        scanf("%d",(mat2 + i));
    }
    for(i=0;i<5;i++)
    {
        printf("Valores das componentes = %d\n", *(mat2 + i));
    }
    return 0;
    system("pause");
}
