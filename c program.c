# include <stdio.h>
int main()
  
       //p = calloc(100, sizeof(double) );  
       //for ( i = 0; i < 100; i++ )
   	  //*(p + i) = i;           
    
      // for ( i = 0; i < 100; i++ )
   	  //printf("*(p + %d) = %lf\n", i, *(p+i) );
   //int *ptr;
   // ptr = (int*) malloc(num * sizeof(int));
	// for(i = 0; i < 100; ++i)
    //{
		//ptr + i=i;
       // scanf("%d", ptr + i);
   // }
    
{

  int a[100]={1,2,3,4,5,6,7,8,9,10,10, 11, 12, 13, 14, 
               15, 16, 17, 18, 19, 
               20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 
               30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 
               40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 
               50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
               60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 
               70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 
               80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 
               90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
  int sum1=0,sum2=0,sum=0,sum3=0,sum4=0;
  int id,i,j,k;
  	double* p; 
  for(i=0;i<2;i++)
  {
	  
	  if(i==0)
	  {
		 id=fork();
        if(id==0) 
        {
        for(j=0;j<=25;j=j++)
        {
           sum1=sum1 + *(p+j);
        }
        printf("Parent Sum : %d\n",sum1);
        }
        else
        {
         for(j=26;j<=50;j=j++)
        {
           sum2=sum2 + *(p+j);   
        }
       printf("Child Sum : %d\n",sum2);
        }
      }
	  if(i==1)
	  {
		if(id==0) 
        {
        for(k=51;k<=75;k=k++)
        {
           sum3=sum3 +*(p+k);
        }
        printf("Parent Sum : %d\n",sum3);
        }
        else
        {
         for(k=75;k<100;k=k++)
        {
           sum4=sum4 +*(p+k);   
        }
       printf("Child Sum : %d\n",sum4);
        }
		  
	  }
  }
  //process_join(2,id);       
  // Sum2=0 after Process Join bcoz Child Process Terminated
  sum=sum1+sum2+sum3+sum4;
   
  printf("Final Sum is : %d\n", sum);
  return 0;    
}
