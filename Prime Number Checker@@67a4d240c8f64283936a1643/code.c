int isPrime(int num){
    if(n==0 || n==1){
        printf("1");
    }if(n==2){
        printf("2");
    }else{
        for(int i=2;i<=(n/2)+1;i++){
            if(n%i==0){
                printf("0");
                return 0;
            }
        }
        printf("1");
    }
}