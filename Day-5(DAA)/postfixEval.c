#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int push(int top,int n,int* stack){
    top=top+1;
    stack[top]=n;
    return top;
}
int  pop(int top)
{
    top=top-1;
    return top;
}
int op(char a,int* stack,int top){
    int res;
    switch(a){
        case '+':
            res=stack[top]+stack[top-1];
            break;
        case '-':
            res=stack[top-1]-stack[top];
            break;
        case '*':
            res=stack[top]*stack[top-1];
            break;
        case '/':
            res=stack[top-1]/stack[top];
            break;
        case '^':
            res=stack[top-1]^stack[top];
            break;
        case '%':
            res=stack[top-1]%stack[top];
            break;
        default:
            exit(1);
    }
            top=pop(top);
            top=pop(top);
            top=push(top,res,stack);
    return top;
}
void main(){
    int stck[50];
    int top=-1;
    int res;
    char a[50];
    char b='#';
    printf("Enter a string:");
    scanf("%s",&a);
    strncat(a,&b,1);
    for (int i=0;i<strlen(a);i++){
        if(((int)a[i]-48)>0 && ((int)a[i]-48)<=9)
        {
            top=push(top,(int)a[i]-48,stck);
        }
        else if (a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='^' || a[i]=='%' )
            {
            top=op(a[i],stck,top);
            }
        else if (a[i]=='#')
        {
        printf("\n\tRESULT:%d",stck[top]);
        break;
        }
}
}
