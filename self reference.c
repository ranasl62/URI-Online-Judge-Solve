#include<stdio.h>
struct self_ref
{
    int a;
    struct self_ref *next;
};
void print(struct self_ref pr)
{
    if(pr.a==0)
        return;
    printf("%d\n",pr.a);
    print(*pr.next);

}
int main ()
{
    struct self_ref val1,val2,val3,val4;
    val1.a=5;
    val1.next=&val2;
    val2.a=6;
    val2.next=&val3;
    val3.a=9;
    val3.next=&val4;
    val4.a=0;
    print(val1);

    return  0;
}
