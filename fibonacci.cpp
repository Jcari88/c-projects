/*
Author:Jason Cariolano
*/
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>


void *fibo(void *p);


int sequence[100]; //only can generate 100 fib numbers 
int n; //number entered

int main(){
      
    pthread_t tid; // thread identifier
    pthread_attr_t attr;  //thread attributes
    
    pthread_attr_init(&attr); //get default attributes
    pthread_create(&tid,&attr,fibo,NULL); //create thread
    
    pthread_join(tid,NULL); //wait for thread to exit 
    
    printf("Fibonacci series: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", sequence[i]);
    }
    return(0);

}

void *fibo( void *p){

    printf("Enter how many Fibonacci numbers to generate: ");
    scanf("%d",&n);
    
    sequence[1]=1;
    for( int i=2;i<n;i++){
        sequence[i] = sequence[i-1] + sequence[i-2];
    }
    
    pthread_exit(0);

    }

