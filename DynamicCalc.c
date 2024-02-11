#include<stdio.h>
// int dynamicCalc(int numbers[], )
int main() {
    double numbers[] = {};
    char operators[] = {};
    double result[] = {};
    int i = 0, iop = 0, itr, r = 1;

    printf("Enter numbers and operator : \n");

    do{
        if(i == 0 && iop == 0) {
            scanf("%lf %c %lf", &numbers[i], &operators[iop], &numbers[i+1]);

            switch (operators[iop])
            {
            case '+': result[r] = numbers[i] + numbers[i+1];
                    break;
            case '-': result[r] = numbers[i] - numbers[i+1];
                    break;
            case '*': result[r] = numbers[i] * numbers[i+1];
                    break;
            case '/': result[r] = numbers[i] / numbers[i+1];
                    break;
            default:
                break;
            }
            i = 2;
            iop++;
            r++;
            
        } else {
                scanf("%lf", &numbers[i]);

                switch (operators[iop])
                {
                case '+': result[r] = result[r-1] + numbers[i];
                    break;
                case '-': result[r] = result[r-1] - numbers[i];
                    break;
                case '*': result[r] = result[r-1] * numbers[i];
                    break;
                case '/': result[r] = result[r-1] / numbers[i];
                    break;
                default:
                    break;
                }
            i++;
            iop++;
            r++;
        }
        scanf("%c", &operators[iop]);

    } while(operators[iop] != '=');

    operators[iop] == '\0';
    // numbers[i] == '\0';
    // result[r] == '\0';

    printf("The result is %.2lf.\n", result);
    
    for(itr = 0; itr < i; itr++) {
        printf("%lf, ", numbers[itr]);
    }
    for(itr = 0; itr < i; itr++) {
        printf("%c, ", operators[itr]);
    }
    for(itr = 1; itr < i; itr++) {
        printf("%lf, ", result[itr]);
    }
    
    return 0;
}