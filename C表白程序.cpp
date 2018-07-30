#include<stdio.h> 
int n;
char str[100];
void draw(int n, char str[100])
{
int i,j;
for (i=1-(n>>1);i<=n;i++) 
if (i>=0) 
{ 
for (j=0;j<i;j++) printf("  "); 
for (j=1;j<=2*(n-i)+1;j++) printf("爱"); 

if(i==0){
printf("》》》》》》》》》》》》》》》》》");printf(str);}

printf("\n"); 
} 

else 
{ 
for (j=i;j<0;j++) printf("  "); 
for (j=1;j<=n+2*i+1;j++) printf("爱"); 
for (j=1;j<=-1-2*i;j++) printf("  ");  
for (j=1;j<=n+2*i+1;j++) printf("爱"); 

printf("\n"); 
}
}
int strcmp (const char *str1,const char *str2)  
{  
    while (*str1 && *str2 && (*str1 == *str2))  
    {  
        str1++;  
    str2++;  
    }  
    return *str1 - *str2;  
} 
int main() 
{ 
printf("请输入你的名字："); 
int n=10; 
char s[2];
gets(str);
if(strcmp(str,"zsy")!=0)
{printf("你输入不对哦！");gets(s);
return (0);
}
draw(n,str);

gets(s);
return 0; 
} 
