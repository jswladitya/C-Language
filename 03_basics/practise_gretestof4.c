#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the four numbers\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    if(a>b && a>c &&a>d){
        printf("%d is greater",a);
    }
    if(b>a && b>c && b>d){
        printf("%d is greater",b);
    }
    if(c>a && c>b && c>d){
        printf("%d is greater",c);
    }
    if(d>a && d>b && d>c){
        printf("%d is greater",d);
    }
    

    return 0;
}