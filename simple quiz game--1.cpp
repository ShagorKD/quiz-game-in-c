#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i,j,co;
    char name[100];
    printf("\n");
    printf("\n");
    printf("\t\tPlease Enter You Name Please::: ");
    scanf("%[^\n]%*c",name);
    printf("\n");

    int count=0;
    printf("\t\t WELCOME %s TO THE GAME\n\n",name);
    printf("_________________________________________________________________________________\n");
    printf("\n");
    printf("\t1. To Start The game Press 1\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\t");
        printf("\tSolve The Equation First \n\n");
        printf("\tIf a=1 Then What will be The Final Answer Of the Math(a^2+2a+1)=?\n");
        scanf("%d",&co);
        if(co==4){
            printf("Your Answer Is Correct\n Now You can play the game.\n\n");
            {
                printf("\t %s Your Questions are \n\n",name);
                printf("_________________________________________________________________________");printf("\t");
                printf("\n#In which continent Bangladesh is situated.?\n\n");
                printf("\t1. Asia  2.Europe  3. America 4. Australia.\n\n");
                scanf("%d",&a);
                if(a==1)count++;
                printf("\n");
                printf("#How many Upazilas in Bangladesh.?\n\n");
                printf("\t1. 433  2.483 3.492 4.560.\n\n");
                scanf("%d",&b);
                if(b==3)count++;
                printf("\n");
                printf("#How many main rivers are there in Bangladesh?\n\n");
                printf("\t1. 400 2.830 3.200 4.700.\n\n");
                scanf("%d",&c);
                if(c==4)count++;
                printf("\n");
                printf("#Which of the following is a perfect number?\n\n");
                printf("\t1.( 4 )2. (3 ) 3.(6) 4.(7).\n\n");
                scanf("%d",&d);
                if(d==3)count++;
                printf("\n");
                printf("#What is the national sport of Bangladesh?\n\n");
                printf("\t1. Ha-Du-Du 2. Kabaddi 3. Cricket 4.Football.\n\n");
                scanf("%d",&e);
                if(e==1)count++;
                printf("\n");
                printf("# Who was the Commander-in-chief of Bangladesh Forces during the 1971 Bangladesh War of Independence.?\n\n");
                printf("\t1. M. A. G. Osmani 2. Ziaur Rahman 3. Rao Farman Ali 4.Jagjit Singh Aurora.\n\n");
                scanf("%d",&f);
                if(f==1)count++;
                printf("\n");
                printf("# Which is the largest  district in Bangladesh?\n\n");
                printf("\t1. Chittagong 2. Rangamati 3. Dhaka 4.Khulna.\n\n");
                scanf("%d",&g);
                if(g==2)count++;
                printf("\n");
                printf("# Which is the first district in Bangladesh??\n\n");
                printf("\t1. Chittagong 2. Bagerhat 3.Jessore 4.Khulna.\n\n");
                scanf("%d",&h);
                if(h==3)count++;
                printf("\n");
                printf("# Which is the cleanest city in Bangladesh??\n\n");
                printf("\t1. Noakhali 2. Bagerhat 3.Mymensingh 4.Rajshahi.\n\n");
                scanf("%d",&i);
                if(i==4)count++;
                printf("\n");
                printf("# What is the national vagetable of Bangladesh?\n\n");
                printf("\t1.Carrot 2. Tomato 3.Potato 4.Chili pepper.\n\n");
                scanf("%d",&j);
                if(j==4)count++;
                printf("\n");

            }
        }
        else{
            printf("Your Answe is wrong. try again\n\n");
        }


    }
    printf(" \n\n");
    printf("\t__________________________________________________________________________________________");
    printf("\n\n");
    printf("\tcongratulation %s You have completed the game \n\n",name);
    printf("\t\tYour score is %d out of 10.\n\n",count);
    printf("\t\t\t!!! Thank You !!!");
    printf("\n");
    return 0;


}
