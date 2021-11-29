int NumeriPrimi (int a){
    int boolean;
    if(a==1){
        boolean=true;}
    else if (a==2){
        boolean=true;
    }
    else {
        for (int i=2; i<a; i++)
        {if ((a%i)==0){
                boolean = false;
        return boolean;}
        else {boolean = true;}
        }
    }
    return boolean;
}
