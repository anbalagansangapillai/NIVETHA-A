 #include<stdio.h>
 #include<conio.h>
 void main()
 {
    char n[20];
    int i,n;
    clrscr();
    printf("HELLO\n");
    gets(n);
    printf("How many time\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
printf("%3d\t%s\n",i,n);
    }
    getch();
    }
