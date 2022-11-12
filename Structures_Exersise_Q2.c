#include <stdio.h>

struct distance1
{
    float distance1InFeet;
    float distance1Inches;
} d1;

struct distance2
{
    float distance2InFeet;
    float distance2Inches;
} d2;

void getDetails();
int main()
{

    getDetails();
    return 0;
}

void getDetails()
{

    float totalFeet = 0;
    float totalInches = 0;
    int remainInches = 0;

    printf("Enter information for 1st distance\nEnter feet: ");
    scanf("%f", &d1.distance1InFeet);
    printf("Enter inch: ");
    scanf("%f", &d1.distance1Inches);

    printf("\nEnter information for 2nd distance\nEnter feet: ");
    scanf("%f", &d2.distance2InFeet);
    printf("Enter inch: ");
    scanf("%f", &d2.distance2Inches);

    totalFeet = d1.distance1InFeet + d2.distance2InFeet;
    totalInches = d1.distance1Inches + d2.distance2Inches;

    if (totalInches >= 12.0)
    {
        remainInches = totalInches / 12.0;
        totalFeet = totalFeet + remainInches;
        totalInches = totalInches - (remainInches * 12);
        printf("\nSum of distances=%.f' - %.1f''", totalFeet, totalInches);
    }
    else
    {
        printf("\nSum of distances=%.f' - %.1f", totalFeet, totalInches);
    }
}