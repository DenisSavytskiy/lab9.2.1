#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

#define Z 4
#define SQR(x) ((x)*(x))
#define MAX(y,z) ((y)>(z))?(y):(z)
#define PRINTI(w) puts("control output"); \
    printf(#w"=%d\n",w)
#define PRINTR(w) puts ("rezult :"); \
    printf (#w"=%f\n",(float)w)

#if Z>3
#define CALC_W(x, y) MAX(SQR(x - Z), x - y)
#else
#define CALC_W(x, y) (MAX(x* y, y* Z) + MAX(Z * x, y * Z))
#endif

void main()
{
    puts("Lab 9.2. Using macros and preprocessing directive");
    int x, y;
    float w;
    char ch;

    do
    {
        puts("Input x, y, z:");
        scanf_s("%d%d%d", &x, &y);
        PRINTI(x);
        PRINTI(y);

        w = CALC_W(x, y);
        PRINTR(w);

        puts("Repeat? y/n ");
        ch = _getch();
    } while (ch == 'y');
}
