#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long ways[100];
    
    ways[1] = 1;
    if (n >= 2) {
        ways[2] = 2;
    }
    
    for (int i = 3; i <= n; i++) {
        ways[i] = ways[i-1] + ways[i-2];
    }
    
    printf("method = %lld", ways[n]);
    
    return 0;
}