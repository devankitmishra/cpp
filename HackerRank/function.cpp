#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d){
    int biggest;
    if (a>b && a>c && a>d)
    {
        biggest = a;
    }
    else if (b>c && b>a && b>d)
    {
        biggest = b;
    }
    else if (c>b && c>a && c>d)
    {
        biggest = c;
    }
    else if (d>c && d>a && d>b)
    {
        biggest = d;
    }
    return biggest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
}
