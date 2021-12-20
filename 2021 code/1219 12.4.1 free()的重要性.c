int main()
{
    double glad[2000];
    int i;
    ... 
    for (i = 0; i < 1000; i++)
        gobble(glad, 2000);
    ...
}
void gobble(double ar[], int n)
{
    double *temp = (double *)malloc(n * sizeof(double));
    ... // free(temp);   //假设忘记使用free()
}