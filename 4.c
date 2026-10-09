#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 1000

void counter(char str[])
{   int counter=0;
    int inword=0;//0表示不在word中，1表示在word中
    for(int i=0;str[i]!='\0';i++)
    {
        if(isalnum(str[i]))
        {if(inword==0){
            counter++;
            }
        inword=1;
        }
        else{inword=0;}
        
       
        
    }
     printf("string's word number is%d\n",counter);
}

void change1(char str[], char find[], char change[])
{
    char reput[MAX]={0};
    int len1,len2,i=0,j=0;
    len1=strlen(find);
    len2=strlen(change);

        while(str[i]!='\0')
    {   
           
        if(strncmp(&str[i],find,len1)==0)
        {
         strncpy(&reput[j],change,len2);
            i+=len1;
            j+=len2;

        }
        else{
            reput[j]=str[i];
            i++;
            j++;
        }

    }

    reput[j]='\0';


   
    
    printf("result: %s", reput);
    
}


void number(char str[])
{






}


int main(void){
    printf("please input a string:\n");
    char str[MAX];
    fgets(str, MAX, stdin);
    str[strcspn(str,"\n")] = '\0'; // Remove the newline character from the input string
    printf("please input what word you want to find:\n");
    char find[MAX];
    fgets(find, MAX, stdin);
    find[strcspn(find,"\n")] = '\0'; // Remove the newline character from the input string
    printf("the word you want to change is:\n");
    char change[MAX];
    fgets(change, MAX, stdin);
    change[strcspn(change,"\n")] = '\0'; // Remove the newline character from the input string

    counter(str);

    change1(str, find, change);
    number(str);

return 0;
}