#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    const int T1 = 145;  
    const int T2 = 180; 
    const int T3 = 900; 

    for (int tc = 0; tc < T; ++tc) {
        long long N, M, K;
        scanf("%lld %lld %lld", &N, &M, &K);

        int ok = 1;
        if (N > T1) ok = 0;
        if (M > T2 - N) ok = 0;
        if (K > T3 - N - M) ok = 0;

        if (ok) printf("YES");
        else printf("NO");

        if (tc < T-1) printf(" ");
    }
    return 0;
}

