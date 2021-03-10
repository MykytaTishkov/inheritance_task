#include <stdio.h>

typedef struct
{
    char Name_index;
} Parent;

typedef struct
{
    Parent P;
} Child;

void ShowParentName(Parent *pParent)
{
    printf("I`m %c\n", pParent->Name_index);
}

int main()
{
    Parent *A;
    Child *B;
    B = calloc(1, sizeof(Parent));
    B->P.Name_index = 'C';
    A = (Child*)B;
    ShowParentName(&A);
}