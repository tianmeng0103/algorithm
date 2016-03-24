
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int table[10] = {0x77 , 0x24 , 0x5D , 0X6D , 0X2E , 0X6B , 0X7B , 0X25 , 0X7F , 0X6F};

int strtodig(char * buffer)
{
    int result=0;
    while(*buffer)
    {
        if(*buffer!=' ')
        {
            result |= 1 << (*buffer-'1');
        }
        buffer++;
    }
    return result;
}

int helper(int * N_piece , int * digits , int index , int K)
{
    int base=0;
    int iter = 0;
    for(; iter < N_piece[index] ; ++iter)
    {
        if((table[iter] & digits[index]) == digits[index])
        {
            base++;
        }
    }
   iter = index+1;
    for( ; iter < K ; ++iter)
    {
        int possible = 0;
        int inner = 0;
        for(; inner != 10 ;++inner)
        {
            if( (table[inner] & digits[iter]) == digits[iter])
            {
                possible++;
            }
        }
        base *= possible;
    }
    return base;
}


int deal()
{
    int K , N;
    scanf("%d %d\n" , &K , &N);

    char buffer[128];
    int * digits = (int*)malloc(sizeof(int) * K);
    int * N_piece = (int*)malloc(sizeof(int) * K);
    int iter=0;
    for( ; iter != K ; ++iter)
    {
        gets(buffer);
        digits[iter] = strtodig(buffer);
        N_piece[K-iter-1]  = N%10;
        N /= 10;
    }
    int result=0;
    int index=0;
    while(1)
    {
        if(index == K)
        {
            return result;
        }
        int iter = 0 ;
        while(1)
        {
            if((table[iter] & digits[index]) == digits[index])
            {
                break;
            }
            iter++;
        }
        if(iter > N_piece[index])
        {
            return result;
        }
        else if(iter == N_piece[index])
        {
            index++;
            continue;
        }
        else
        {
           // printf("%d %d\n" , index ,iter);
            result += helper(N_piece , digits , index , K);
            if((table[N_piece[index]] & digits[index]) == digits[index])
            {
                index++;
            }
            else
            {
                return result;
            }
        }
    }
return 0;
}

int main(){
    int n;
    scanf("%d" , &n);
    while(n--)
    {
        printf("%d\n",deal());
    }
    return 0;
}*/
