int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[80];
        scanf("%s", s);
        int c = 0, r = 0;

        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == 'O')
            {
                c++;
                r += c;
            }
            else
                c = 0;

        }
        printf("%d\n", r);
    }

    return 0;
}