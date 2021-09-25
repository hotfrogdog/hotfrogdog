#include <cstdio>

int main(){
    int a, f = 1, s = 1, cnt = 1, t; //f-first s-second
    
    printf("Input deximical a >= 0: ");
    scanf("%d", &a);
    
    while(s <= a){
        t = s;
        s += f;
        f = t;
        ++cnt;
    }

    printf("Fib %d'n number %d greater then %d", cnt, s, a);
    
    return 0;
}
