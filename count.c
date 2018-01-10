 #include<stdio.h>
            int main()
            {
            	int n=4897,count=0,s;
            	while(n>0)
            	{
            		s=n%10;
            		n=n/10;
            		count++;
            	}
            	return count;
            }
     
