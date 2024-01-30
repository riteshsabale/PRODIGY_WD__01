#include <stdio.h>
#include <conio.h>

void main() {
    int n, a[100], s, cnt=0, i};

    printf("Enter the array size:");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to count: ");
    scanf("%d",&s);
    for (i = 0; i < n; i++) {
        if(a[i]==s){
            cnt++;
        }
    }

    printf("%d occurred %d times: ", s, cnt);
    getch ();
}