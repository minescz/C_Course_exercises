void Swap(int *a, int *b)
{
    int tmp = *a; 
    *a = *b;
    b = tmp; 
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Initial values: \n x = %d; y = %d \n\n", x, y);
    Swap(&x, &y);
    printf("Values after calling swap \n x = %d; y = %d \n",x, y);
    return 0;
    }
