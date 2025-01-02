#include <stdio.h>

int F = 0, R = 0;
int Q[20];
int ms = 20;

void enqueue(int item) {
    if ((F == 1 && R == ms) || (F == R + 1)) {
        printf("Overflow\n");
    } else if (F == 0) {
        F = 1;
        R = 1;
    } else if (R == ms) {
        R = 1;
    } else {
        R = R + 1;
    }
    Q[R] = item;
    printf("%d is inserted in Q\n", item);
}

int dequeue() {
    if (F == 0) {
        printf("Underflow\n");
        if (F == R) {
            F = 0;
            R = 0;
        } else {
            F = F + 1;
        }
        return -1; // Return a special value indicating underflow
    } else {
        int t = Q[F];
        printf("%d is deleted\n", t);
        if (F == R) {
            F = 0;
            R = 0;
        } else if (F == ms) {
            F = 1;
        } else {
            F = F + 1;
        }
        return t;
    }
}

int main() {
    int var, x, v2, y;
    scanf("%d", &var);
    enqueue(var);

    // You can test dequeue here if needed.
    y = dequeue();
    return 0;
}
