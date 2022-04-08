int palindorm(char inputstr[], int length){
    int l = 0;
    int r = length-1;
    while(l <= r){
        if(inputstr[l] != inputstr[r]) 
            return 0;
        
        l++;r--;
    }
    return 1;
}