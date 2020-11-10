void bin(int n)
{

    if (n > 1)
        bin(n >> 1);

    cout << (n & 1);
    /* because i devide the number each time 2 meaning i remove one bit from it
           e.g bin(5)    5-> first call stack  101 check the current bit if it one or off
                                              &001

                         2-> second call stack 10 check the seond bit
                                             &01

                         1-> third call stack 01
                                             &01
                         0-> 00 &01
                */

}
_________________________________________________________________________________________
void bin1(unsigned n)
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i / 2)
    {
        (n & i) ? printf("1") : printf("0");
        cout << endl;
    }
}
