#include "../inc/MathHelper.h"
#include <math.h>

int MathHelper::nod(int a, int b) {
    if (b == 0) {
        return a;
    }
    return abs(nod(b, a % b));
}

int MathHelper::nok(int a, int b) {
    return (a * b) / nod(a, b);
}