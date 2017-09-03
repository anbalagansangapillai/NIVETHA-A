 #include<stdio.h>
int main(){
  int m1,m2,x,y;
  printf("\nEnter:");
  scanf("%d %d",&m1,&nm2);
  x=m1,y=m2;
  while(m1!=m2){
      if(m1>m2)
           m1=m1-m2;
      else
      m2=m2-m1;
  }
  printf("LCM=%d",x*y/m1);
  return 0;
}
