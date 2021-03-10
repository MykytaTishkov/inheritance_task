#include <stdio.h>

typedef struct
{
    char Name_index;
} Parent;

typedef struct
{
    Parent P;
} Child;

int main()
{
    Parent *A;
    Child *B;
    B = calloc(1, sizeof(Parent));
    B->P.Name_index = 'C';
    A = (Child*)B;
    printf("I`m %c\n", A->Name_index);
}