#include<stdio.h>
int main() {
    int vulnerability, malware;
    float risk;
    printf("Enter system vulnerability score (1-10): ");
    scanf("%d", &vulnerability);
    printf("Enter malware strength score (1-10): ");
    scanf("%d", &malware);
    risk = (vulnerability * vulnerability + malware * malware) / 20;
    (risk > 5) ? printf("High Infection Probability") : printf("Low Infection Probability");
    return 0;
}

