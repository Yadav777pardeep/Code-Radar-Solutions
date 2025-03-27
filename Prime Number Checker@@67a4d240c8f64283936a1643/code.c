int isPrime(int num){
    if(num==0 || num==1){
        printf("0");
    }if(num==2){
        printf("1");
    }else{
        for(int i=2;i<=(num/2)+1;i++){
            if(num%i==0){
                printf(0);
                return 0;
            }
        }
        printf("1");
    }
}