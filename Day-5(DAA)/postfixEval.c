#include<stdio.h>
#include<string.h>
int push(int top,int n,int* stack){
    top=top+1;
    stack[top]=n;
    printf("yes");
    printf("%d",top);
    return top;
}
int  pop(int top)
{
    top=top-1;
}
void op(char a,int* stack,int top){
    switch(a){
        int res;
        case '+':
            res=stack[top]+stack[top-1];
            top=pop(top);
            top=pop(top-1);
            printf("%d",top);
            push(top,res,stack);
            break;
    //printf("add");
    }
}

void main(){
    int stck[50];
    int top=-1;
char a[50];
char b='#';
printf("Enter a string:");
scanf("%s",&a);
strncat(a,&b,1);
/*printf("%s",a);
printf("%d",strlen(a));*/
//printf("%d",5(char)(int)'+'9);
for (int i=0;i<strlen(a);i++){
    if(((int)a[i]-48)>0 && ((int)a[i]-48)<=9)
        {
        top=push(top,(int)a[i]-48,stck);
    }
    else if (a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/'){
        op(a[i],stck,top);
    }
    else if (a[i]=='#'){
        break;
    }

}
printf("outside");
}
