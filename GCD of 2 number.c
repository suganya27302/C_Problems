#include<stdio.h>
int main(){
    int n,m,temp,i,lcm;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n && i<=m;i++){
    if(n%i==0 && m%i==0){
        temp=i;
    }
    }
    printf("%d",temp);
    return 0;
}
