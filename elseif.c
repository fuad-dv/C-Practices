/*Ques: Take input percentage of a student and
print the Grade according to marks:
90-100 Excellent
80-90 Very Good
70-80 Good
60-70 Can do better
50-60 Average
40-50 Below Average
< 40 Fail*/

#include<stdio.h>
int main(){
    int m;
    printf("Enter your marks : ");
    scanf("%d",&m);
    if(m>=91 && m<=100){
        printf("Excellent");
    }
    else if(m>=81 && m<=90){
        printf("Very Good");
    }
    else if(m>=71 && m<=80){
        printf("Good");
    }
    else if(m>=61 && m<=70){
        printf("Can do better");
    }
    else if(m>=51 && m<=60){
        printf("Average");
    }
    else if(m>=40 && m<=50){
        printf("Below Average");
    }
    else{
        printf("Failed");
    }
    return 0;
}