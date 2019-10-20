#include<stdio.h>
void printbits(unsigned int n)
{
    int i, arr[8];
    for(i=0; i<8; i++)
    {
        arr[i] = n%2;
        n = n/2;
    }
    for(i=7; i>=0; i--)
    {
        if(i==3) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
}

unsigned int set(unsigned int a, int pos)
{
    unsigned int i = 1;
    i = i << pos;
    unsigned int ret = a|i;
    return ret;
}

unsigned int reset(unsigned int a, int pos)
{
    unsigned int i = 1;
    i = i << pos;
    i = ~i;
    unsigned int ret = a&i;
    return ret;
}

int main()
{
    printbits(7);
    printbits(set(7,5));
    printbits(reset(7,2));

}
