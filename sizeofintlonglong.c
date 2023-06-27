int main(void)
{

    #define LITERAL (-9223372036854775808)
    _Generic(LITERAL, struct {char x;}/*can't ever match*/: "");

}
