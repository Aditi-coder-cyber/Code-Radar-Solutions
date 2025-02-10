#include <stdio.h>
int main(){
    int num,n;
int getNthBit(num,n) {
    return (num >> n) & 1;  // Right shift 'num' by 'n' and mask with 1
}
int num,n;
    scanf("%d %d", &num,&n);
    int bit = getNthBit(num, n);
    printf("%d\n", n, bit);
    return 0;
}
