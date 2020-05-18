#include<stdio.h>

int main() {  
    int num,rev;
    int revint(int num);

   
    printf("Enter a number: ");
    scanf("%d",&num);

    rev = revint(num);
    
    if(num == rev){
        printf("%d is palindrom\n",num);
    }else{
        printf("%d is not palindrom\n",num);
    }
  
  return 0;
}

int revint(int num){
    int rev=0,temp,r;
    temp = num;

    while(temp>0){
        r = temp%10;
        rev = rev*10 + r;
        temp = temp/10;
    }
    return rev;
}

