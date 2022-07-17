#include <vector>
#include <cstdio>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    for (volatile int i = 10000; i--; ) {
        volatile std::vector < int > v(10101010);
    }
    printf("%d\n", a + b + c);
    return 0;
}