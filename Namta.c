int main ()
{
    int n,m,s;

    for(n = 1;n <= 10;n++){
        s = 0;
        for(m = 1;m <= 10;m++){
            s = s + n;
            printf("%d x %d = %d\n",n,m,s);
        }
    }

    return 0;
}
