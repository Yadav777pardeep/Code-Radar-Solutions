int isPrime(int num){
    if(num<=1){
        return 0;
    }if(num==2){
        return 1;
    }else{
        for(int i=2;i<=(num/2)+1;i++){
            if(num%i==0){
                return 0;
            }
        }
        return 1;
    }
}