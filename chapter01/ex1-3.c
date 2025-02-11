// ex1-3.c
// Modify the temp conversion program to print a heading above the table. 

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%5s%9s\n", "fahr", "celsius");
    while(fahr <= upper)
    {
        celsius= (5.0 / 9.0) * (fahr - 32.0);
        printf("%5.0f%6.1f\n", fahr, celsius);
        fahr = fahr + step;


    }
    printf("\n");
}