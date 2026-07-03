bool isPalindrome(int x) {
   int n=x;// n is copy of x and we will update n to check loop condition
    int last_digit = 0; //last_digit is the last digit of n
    long long reverse = 0;
    while(n>0){
        last_digit = n%10;//extracting last digit
        n = n/10; // removing last digit so loop can terminate
        reverse = reverse * 10 + last_digit; // concatinating digits  
    }
    if (reverse ==x)
    {
        return true;
    }else{
        return false;
    }
    return 1;
}