#include <cs50.h>
#include <stdio.h>

int main(void)

{
    string answer = get_string("What´s your name? ");
    printf("Hello, %s\n", answer);

}

//help50 make yourcode
//check50 cs50/problems/hello
// rm hello
//rm: remove regular file 'hello'? y
//~/pset1/hello/ $ ls
//hello.c
//~/pset1/hello/ $ mkdir lecture
//~/pset1/hello/ $ mv hello.c lecture/

~/pset1/hello/ $ cd lecture/
~/pset1/hello/lecture/ $ ls
hello.c
~/pset1/hello/lecture/ $ mv hello.c  ..
~/pset1/hello/lecture/ $ ls
~/pset1/hello/lecture/ $ cd ..
~/pset1/hello/ $ ls
hello.c  lecture/
~/pset1/hello/ $ rmdir lecture/
~/pset1/hello/ $ ls
hello.c
~/pset1/hello/ $ 

get_char
get_double
get_float
get_int
get_long
get_string

printf

%c char
%f float,double
%i int
%li long
%s string

//Addition

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i \n", x + y);
}

//AdditionLong

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");
    printf("%li \n", x + y);
}

1:32:44 17/06/2022