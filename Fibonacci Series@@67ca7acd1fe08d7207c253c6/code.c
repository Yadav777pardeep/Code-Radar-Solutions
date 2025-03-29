int fibonacciSeries(int n){
    int a=0;
    int b=1;
    int c;

    if(n==1){
        printf("%d",a);
    }

    if(n>1){
        printf("%d ",a);
        printf("%d ",b);

    }
    for(int i=2;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }



}