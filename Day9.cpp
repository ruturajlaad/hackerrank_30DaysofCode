//Here we use simple Recursion for calculating the factorial of a number(n)

int factorial(int n) {
//This the base case that checks if number is smaller or equal to 1
    if(n<=1){
        return 1;
    }else{
    return n * factorial(n-1);
    }
}
