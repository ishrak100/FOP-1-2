void stat(void);
main()
{
    int i;
    for (i = 1; i <= 3; i++)
        stat();
}
void stat(void)
{
     int x = 0; //auto
    x = x + 1;
    printf("x = %d\n", x);
}