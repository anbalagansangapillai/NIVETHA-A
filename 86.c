#include<string.h>
void main()
{
    char l[20]="amma";
    int i,j,flag=0;
    for(i=0;l[i]!='\0';i++)
    {
        for(j=i+1;l[j]!='\0';j++)
        {
            if(l[i]==l[j])
            {
                flag++;
            }
        }
    }
    if(flag==0)
    {
        printf("yes it is isogram");
    }
    else
    {
        printf("no it is not isogram");
    }
    
}
