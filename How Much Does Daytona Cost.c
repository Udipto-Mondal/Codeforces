#include <stdio.h>

int main() {
    int A,B,a,k,t,n;
    scanf("%d", &t);
    while (t--) {

        scanf("%d %d", &n, &k);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
         A = 0;
         B = 0;
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                B++;
            } else {
                if (B > A) {
                    A = B;
                }
                B = 0;
            }
            if (B > A) {
                A =B;
            }

            if (A > 0) {
                found = 1;
                break;
            }
        }
        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

