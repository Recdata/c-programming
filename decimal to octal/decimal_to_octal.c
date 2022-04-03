#include<stdio.h>

int three_digits(int n)
{
    int r, d=0, p=1;

    for(int i=0; i<3; i++)
    {
        r= n%10;
        d = d + r*p;
        p = p*10;
        n = n/10;
    }
    return d;
}

int main(void)
{
    int binary_num, d=0, base=1,reminder, td , res=0, ord=1 ;

    printf("Enter Binary Num: ");
    scanf("%d", &binary_num);

    while(binary_num >0)
    {
        if (binary_num>111)
        {
            td = three_digits(binary_num);
        }
        else
        {
            td = binary_num;
        }
        binary_num = binary_num/1000;

        while(td>0)
        {
            reminder= td%10;
            td=td/10;
            d = d+ (base + reminder);
            base *= 2;
        }
        res = res+ d*ord;
        ord = ord*10;
    }
    printf("\n Octal equivalent is: %d", res);
    return 0;
}
