#include<stdio.h>
int main(){
    int c;
    char str[50];
    char str2[50];
    int i,j;
    printf("Choose the operation\n");
    printf("1. Read file\n2. Edit file");
    printf("\n\nEnter your choice: ");
    scanf("%d",&c);
        getchar(); 
    FILE* f;
    switch(c){
        case 1: 
        int d;
        f= fopen("text.txt","r");
        while ((d=getc(f))!=EOF){
            putchar(d);
            
        }
        
        fclose(f);
        break;
        case 2:
        int k;
        f=fopen("text.txt","w");
        printf("\n\nEnter your text: ");
        fgets(str2, sizeof(str2), stdin);
        fputs(str2, f);
        fclose(f);
        printf("Text updated successfully!");
        break;
        default: 
        printf("Enter valid input");
        break;
    }
    
}
