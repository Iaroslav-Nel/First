#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <TXLib.h>

int main()
{

    setlocale(LC_ALL, ("Russian"));
    float a, b, c, x1, x2, x, d;


    printf(" a = ");
    scanf("%f", &a);

    printf(" b = ");
    scanf("%f", &b);

    printf(" c = ");
    scanf("%f", &c);

    printf(" (%f)*x^2 + (%f)*x + (%f) = 0", a, b, c);

    if ((b*b - 4*a*c) == 0)

    {
        x = (-b)/(2*a);
        printf("\n x = %f", x);

    }

     if ((b*b - 4*a*c) > 0)

    {
        d = b*b - 4*a*c;
        x1 = ((-b) - sqrt(d))/(2*a);
        x2 = ((-b) + sqrt(d))/(2*a);
        printf("\n x1 = %f; x2 = %f", x1, x2);

    }

    if ((b*b - 4*a*c) < 0)

    {

        printf("\n нет решений");

    }


    return 0;
}
