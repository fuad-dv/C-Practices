#include<stdio.h>
void greet(){   // User function
    printf("Good Morning !\n");
    printf("How are you?\n");
    return;   // etar mane hoilo khatam, tata-bye bye, Gya!
}
int main(){
    greet(); // Function calling
    greet();
    greet();
    return 0;
}

/*Some important points :
  1) main() ekbar e thakbe 
  2) starts with main
  3) Unlimited function allowed*/