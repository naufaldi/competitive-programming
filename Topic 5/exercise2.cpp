
#include <stdio.h>
#include <cstring>
int counter=0;
using namespace std;
int memo [1000];

int fibo(int n)
    {
        int ans;
        printf("fibo(%d)and this function recur: %d \n", n,counter++);
        if (memo[n] != -1) 
            return memo[n];
        else if (n==0)
            return 0;
        else if (n==1)
            return 1;
        else {
            ans = fibo(n-2) + fibo(n-1); /*DP*/
            return( memo[n]=ans ); /*DP*/
        }
    }

int main ()
    {
    int number, n = 5;
    memset(memo,-1,sizeof memo); /*DP*/
    number= fibo(n);
    printf("Solution of the problem %d", number);
    return 0;
    }