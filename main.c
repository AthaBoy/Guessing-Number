#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    char lagi;

    printf("PIKIRKAN ANGKA DARI 0-15 \n\n\n");

    do{

    printf("1 3 5 7\n9 11 13 15\n");
    printf("Apakah dari angka ini ada angka yang anda pikirkan (jika YA ketik '1' / jika TIDAK ketik '0': ");
    scanf("%i", &a);

    printf("\n2 3 6 7\n10 11 14 15\n");
    printf("Apakah dari angka ini ada angka yang anda pikirkan (jika YA ketik '1' / jika TIDAK ketik '0': ");
    scanf("%i", &b);

    printf("\n4 5 6 7\n12 13 14 15\n");
    printf("Apakah dari angka ini ada angka yang anda pikirkan (jika YA ketik '1' / jika TIDAK ketik '0': ");
    scanf("%i", &c);

    printf("\n8 9 10 11\n12 13 14 15\n");
    printf("Apakah dari angka ini ada angka yang anda pikirkan (jika YA ketik '1' / jika TIDAK ketik '0': ");
    scanf("%i", &d);

    printf("\n");

    if (a==0 && b==0 && c==0 && d==0)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 0");
    }
    else if (a==1 && b==0 && c==0 && d==0)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 1");
    }
    else if (a==0 && b==1 && c==0 && d==0)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 2");
    }
    else if (a==1 && b==1 && c==0 && d==0)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 3");
    }
    else if (a==0 && b==0 && c==1 && d==0)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 4");
    }
    else if (a==1 && b==0 && c==1 && d==0)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 5");
    }
    else if (a==0 && b==1 && c==1 && d==0)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 6");
    }
    else if (a==1 && b==1 && c==1 && d==0)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 7");
    }
    else if (a==0 && b==0 && c==0 && d==1)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 8");
    }
    else if (a==1 && b==0 && c==0 && d==1)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 9");
    }
    else if (a==0 && b==1 && c==0 && d==1)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 10");
    }
    else if (a==1 && b==1 && c==0 && d==1)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 11");
    }
    else if (a==0 && b==0 && c==1 && d==1)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 12");
    }
    else if (a==1 && b==0 && c==1 && d==1)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 13");
    }
    else if (a==0 && b==1 && c==1 && d==1)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 14");
    }
     else if (a==1 && b==1 && c==1 && d==1)
    {
        printf("ANGKA YANG ANDA PIKIRKAN ADALAH 15");
    }
    else
    {
        printf("INPUTAN SALAH !");
    }

        printf("\n\nApakah Mau Coba Lagi?[y/t}: ");
        scanf("%s",&lagi);
        printf("\n");
    }while (lagi =='y');




}
