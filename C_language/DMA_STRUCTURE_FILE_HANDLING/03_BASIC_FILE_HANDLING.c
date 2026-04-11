/*Read "n"character and write into file named Data.txt ,
 read this file and display content of this file on the screen, 
 Also sort them into three file as alphabet,number and special character and display them.*/


 #include<stdio.h>
 int main()
 {  FILE *pf1 , *pf2 , *pf3 , *pf4 ;
    int n,i;
    char ch ;

    pf1 = fopen("Data.txt","w");
    printf("how many character you want to write?\n");
    scanf("%d", &n);
    printf("Enter the characters: ");

    for(i=0; i<n; i++){

        scanf(" %c",&ch);
        putc(ch,pf1);

                    }
    fclose(pf1);

    pf1 = fopen("Data.txt","r");
    pf2 = fopen("Alphabet.txt","w");
    pf3 = fopen("Number.txt","w");
    pf4 = fopen("special.txt","w");

                    printf("\nFile contents:\n");

    while((ch=getc(pf1))!=EOF)
    {
        printf("%c ",ch);

        if(ch >= 48 && ch <= 57)
        putc(ch,pf3);

        else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        putc(ch,pf2);
        else
        putc(ch,pf4);
    }

    fclose(pf2);
    fclose(pf3);
    fclose(pf4);

    pf2 = fopen("Alphabet.txt","r");
    pf3 = fopen("Number.txt","r");
    pf4 = fopen("special.txt","r");

    printf("\nAlphabets:\n");

    while((ch=getc(pf2))!=EOF)
    {
        printf("%c ",ch);

    }
     
    printf("\nNumbers:\n");

     while((ch=getc(pf3))!=EOF)
    {
        printf("%c ",ch);

    }
     
    printf("\nSpecial character:\n");

     while((ch=getc(pf4))!=EOF)
    {
        printf("%c ",ch);

    }
    
    fclose(pf1);
    fclose(pf2);
    fclose(pf3);
    fclose(pf4);
    
    return 0;}