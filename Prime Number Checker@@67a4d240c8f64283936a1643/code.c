int isPrime(int num){
    if(num<=1){
        printf("0\n");
        return 0;
    }if(num==2){
        printf("1\n");
        return 0;
    }else{
        for(int i=2;i<=(num/2)+1;i++){
            if(num%i==0){
                printf("0\n");
                return 0;
            }
        }
        printf("1\n");
    }
}