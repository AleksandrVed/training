#include <stdio.h>
#include <math.h>
float cosinu (float chislo) {
    return (cos(chislo));
}
struct tovar {
    char NameOf;
    float Price;
};
float printt (int i2, int j2, float array[i2][j2]) {
    for (int k = 0; k < i2; k++) {
        for (int j = 0; j < j2; j++) {
            printf("%.2f ", array[k][j]);
        }
        printf("\n");
    }
}
void zamena (int i2, int j2, float chisl[i2][j2]) {
    for (int j = 0; j <j2; j++) {
        chisl[0][j] = 0;
    }
}
int main() {
    int aa;
    float bb;
    float cc;
    
    scanf("%i", &aa);
    if (aa>10) {
        switch (aa) {
            case 11 : 
                printf("yes .11\n");
                break;
            case 22 :
                printf("yes. 22\n");
                break;
            default:
                printf("no, not 11, not 22\n");
                break;
        }
    }
    else if (aa<8) {
        printf("aa is low, aa = %i\n", aa);
    } 
    else if ((aa == 9) || (aa == 10)) {
            printf("to chto nado, aa = %i\n", aa);
    }
    else {
        printf("vvedeno chislo c==%i \n", aa);
    }    
    bb = cosinu (aa);
    printf("cosinus etogo chisla = %.3f", bb);
    
    printf("\nWrite new digit: ");
    scanf("%f", &cc);
    float dd = cc;
    int dd1;
    for (int i=10; i>0; i--) {
        printf("%f\n", dd);
        dd = sqrt(dd);
    }
    while (dd<cc) {
        dd+=0.01;
        dd1=dd;
        if (dd1>(cc-5)) {
            printf("well.. just a little more (%f)\n", dd);
        }
    }
    int i1, j1;
    printf("write the length of the array: \n");
    scanf("%i", &i1);
    printf("write the length of the 2array: \n");
    scanf("%i", &j1);
    float array [i1][j1];
    for (int k = 0; k < i1; k++) {
        for (int j = 0; j < j1; j++) {
            printf("\nEnter element : ");
            scanf("%f", &array[k][j]);
            printf("element is save\n");
        }
    }
    printt(i1, j1, array);
    zamena(i1, j1, array);
    printf("\nFirst string is 0:\n");
    printt(i1, j1, array);
    
    
    struct tovar canabis1;
    canabis1.NameOf = 'i';
    canabis1.Price = 100.95;
    
    struct tovar canabis2;
    canabis2.NameOf = 'r';
    canabis2.Price = 120.25;
    
    printf("\ncanabis indica\ncanabis ruderalis\n");
    getchar();
    
    char variable[7];
    fgets(variable, 7, stdin);
//    puts(variable);
    
    if (variable=="indica") {
        printf("Name of product - %c\nPrice of product - %f", canabis2.NameOf, canabis2.Price);
    }
}
