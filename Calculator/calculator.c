# include <stdio.h>
#include<stlib.h>
int main() {

    int  op;
    int n1,n2;
    printf("1.add\n 2. subtract\n 3. multiply\n 4.divide\n");
    printf("Enter an choice ");
    scanf("%d",&op);
    printf("Enter two numbers ");
    scanf("%d%d",&n1,&n2);

    switch(op)
    {
        case 1:
            printf("%d+ %d = %d\n",n1, n2, n1 + n2);
            break;

        case 2:
            printf("%d - %d = %d\n",n1, n2, n1 - n2);
            break;

        case 3:
            printf("%d * %d = %d\n",n1, n2, n1 * n2);
            break;

        case 4:
            printf("%d/ %d = %d\n",n1, n2, n1 / n2);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct\n");
    }
    printf("the whole code ran sucessfully congrats");
    
    return 0;
}


