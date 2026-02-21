#include <stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
    int a=1, b=2, c=3, d=4, e=5;
    double r=1.5, s=2.5, t=0.0, u, v=0.5;

    functionM();
    a = (int)functionM();
    b = functionN(a, b);
    r = functionO(r, a, s, b);
    s = functionP(a, b, c, d);
    u = functionM();
    c = d + functionN(a, s);
    t = s * functionO(r, a, r, a);
    a = (int)(v + functionP(a, b, c, d));
    printf("%d\n", functionN(a, a));
    printf("%lf\n", s);
    printf("%lf\n", t + t*r);
    v = functionP(functionN(a, a), b, c, d);
    printf("%lf\n", v);

    return 0;
}

double functionM(void) {
    printf("Hello from M\n");
    return 3.14;
}

int functionN(int n, double x) {
    return n + (int)x;
}

double functionO(double x1, int y1, double x2, int y2) {
    return x1 + y1 + x2 + y2;
}

double functionP(int a, int n, int b, int c) {
    return a + n + b + c;
}

