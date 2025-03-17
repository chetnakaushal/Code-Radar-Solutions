// Your code here...
void fibonacciSeries(int n)
{ int t1 = 1;
    int t2 = 0;
    int t3;
     for (int i = 1; i <= n; i++) 
     {
        if(i>2)
        {}
   // int t1=0,t2=1, t3;
    
     t3=t1+t2;
    t1=t2;
    t2=t3;
   printf("%d",t3);
     }
 else if (i == 1)
            printf("%d ", t1);
        else if (i == 2)
            printf("%d ", t2);
}

