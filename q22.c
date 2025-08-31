//Write a program to find profit or loss percentage given cost price and selling price
#include<stdio.h>
int main(){
    int cp;
    int sp;
    float profit,loss;
    int no;
    float difference;
    printf("The cost price is \n");
    scanf("%d",&cp);
    printf("The selling price is :\n");
    scanf("%d",&sp);
    
    if(sp>cp){
    difference=sp-cp;
    profit=(difference/cp)*100;
    printf("profit %d",profit);
    }
    else if(cp>sp){
        loss=sp-cp/cp*100;
        printf("loss");
    }
    else
    {printf("no profit");

    }
        return 0;
}

