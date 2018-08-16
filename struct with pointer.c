#include<stdio.h>
#include<string.h>
struct Struct
{
    char name[50];
    int value;
};
void swap( struct Struct *a, struct Struct *b )
{
    struct Struct temp;
    strcpy(temp.name,a->name);
    temp.value=a->value;
    strcpy(a->name,b->name);
    a->value=b->value;
    strcpy(b->name,temp.name);
    b->value=temp.value;
}
int main()
{
    struct Struct val1,val2;
    printf("Enter the name of val1\t");
    scanf("%s",val1.name);
    printf("Enter the value of val1\t");
    scanf("%d",&val1.value);
    printf("Enter the name of val2\t");
    scanf("%s",val2.name);
    printf("Enter the value of val2\t");
    scanf("%d",&val2.value);
    if(val1.value>val2.value)
        swap(&val1,&val2);
    printf("\nVal1 (%d) %s\n",val1.value,val1.name);
    printf("Val2 (%d) %s\n",val2.value,val2.name);
    return 0;
}
