#include<stdio.h>

int main() {
    int A[9], B[9], C[9], D[9], E[9], i, j, k, l, n, m,G[9];
    printf("Enter two decimal numbers: ");
    scanf("%d %d", &n, &m);

    for (i = 0; i < 8; i++) {
        A[i] = n % 2;
        n = n / 2;
    }
    
    for (j = 0; j < 8; j++) {
        B[j] = m % 2;
        m = m / 2;
    }
    
    for (i = 7, k = 0; i >= 0, k < 8; i--, k++) {
        C[k] = A[i];
    }
    
    for (j = 7, l = 0; j >= 0, l < 8; j--, l++) {
        D[l] = B[j];
    }
    
    printf("The 1st decimal number will be: ");
    for (i = 0; i < 8; i++) {
        printf("%d", C[i]);
    }
    
    printf("\nThe 2nd decimal number will be: ");
    for (j = 0; j < 8; j++) {
        printf("%d", D[j]);
    }
    for(i=0;i<8;)
    {
        if(D[i]==0)
        {
            D[i]=1;
            i++;
        }
        else
        {
        D[i]=0;
        i++;
        }
    }
    printf("the modification decimal will be: ");
    for(i=0;i<8;i++)
    {
        printf("%d",D[i]);
    }
    
    int carry = 0;
    for (i = 7; i >= 0; i--) {
        if (C[i] == 0 && D[i] == 0 && carry == 0) {
            E[i] = 0;
            carry = 0;
        } else if (C[i] == 0 && D[i] == 1 && carry == 0) {
            E[i] = 1;
            carry = 0;
        } else if (C[i] == 1 && D[i] == 0 && carry == 0) {
            E[i] = 1;
            carry = 0;
        } else if (C[i] == 1 && D[i] == 1 && carry == 0) {
            E[i] = 0;
            carry = 1;
        } else if (C[i] == 0 && D[i] == 0 && carry == 1) {
            E[i] = 1;
            carry = 0;
        } else if (C[i] == 1 && D[i] == 0 && carry == 1) {
            E[i] = 0;
            carry = 1;
        } else if (C[i] == 0 && D[i] == 1 && carry == 1) {
            E[i] = 0;
            carry = 1;
        } else {
            E[i] = 1;
            carry = 1;
        }
    }
    
    printf("\nThe result will be: ");
    for (i = 0; i < 8; i++) {
        printf("%d", E[i]);
    }
    for(i=0;i<7;i++)
    {
        G[i]=0;
    }
    G[8]==1;
    printf("then the carry value will be :");
    for(i=0;i<7;i++)
    {
        printf("%d\n",G[i]);
    }
    int H[9];
    for (i = 7; i >= 0; i--)
    {
    if (carry==1)
    {
      if (E[i] == 0 && G[i] == 0 && carry == 0) {
            H[i] = 0;
            carry = 0;
        } else if (E[i] == 0 && G[i] == 1 && carry == 0) {
            H[i] = 1;
            carry = 0;
        } else if (E[i] == 1 && G[i] == 0 && carry == 0) {
            H[i] = 1;
            carry = 0;
        } else if (E[i] == 1 && G[i] == 1 && carry == 0) {
            H[i] = 0;
            carry = 1;
        } else if (E[i] == 0 && G[i] == 0 && carry == 1) {
            H[i] = 1;
            carry = 0;
        } else if (E[i] == 1 && G[i] == 0 && carry == 1) {
            H[i] = 0;
            carry = 1;
        } else if (E[i] == 0 && G[i] == 1 && carry == 1) {
            H[i] = 0;
            carry = 1;
        } else {
            H[i] = 1;
            carry = 1;
        }
    }
    else
    {
         (E[i])=-(H[i]);
    }
    }
    printf("the One's complement will be: ");
    for(i=0;i<8;i++)
    {
        printf("%d\n",H[i]);
    }
    return 0;
}