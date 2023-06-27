   #include <stdio.h>
        int main()
        {
            foo();
            foo();
        }
        void foo()
        {
            int i = 11;
            printf("%d ", i);
            static int j = 12;
            j = j + 1;
            printf("%d\n", j);
    }
