# Computer Systems Organization : Recitation 5

## Strings

Strings are actually one-dimensional array of characters terminated by a null character `'\0'`. Thus a null-terminated string contains the characters that comprise the string followed by a null. Following is an example of how you would initialize strings in C:

```
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char greeting[] = "Hello";
```
In both cases, the length of the char array (or the string) is 6. You index individual characters of the string just like you would do with elements in an array.

```
	printf("First character: %c \n", greeting[0]);

	// prints: "First character: H "
```

### Exercises

* Complete the function `countVowels` in `vowels.c` that counts and returns the number of vowels in a given string.

* Complete the `toLowerCase` function in `lower.c`. It should return the input string with all characters set to lower case. To do this, you may find the ASCII representation of characters useful. Refer to the following:	

[ASCII](http://ascii.cl/)

In C, all the characters are saved as a number sequence that represent the ASCII value (code) of the preferred character. Some important ASCII values are:

0 – character NULL ('\0')

32 – space (' ')

48 – 57 – numbers '0'-'9'

65 – 90 – capital letters 'A' to 'Z'

97 –122 – small letters 'a' to 'z' (97 – 65 = 32 - difference between small and capital letter!)

As an example. Consider the code:

```
	char c = 65;
	printf("%c \n", c);

	// prints: "A"
```

* Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string. If the last word does not exist, return 0. You fill find the function stub in `lastword.c`.

## Make

So far you have used the C compiler, command `gcc`, to compile your C programs.

Typically, we do not directly type `gcc` to compile programs. There are several reasons for why not:
- The gcc command for large software is very long
- We need to compile many source files individually and combine them into a single execuable later.
- We need to obey dependencies during compilation. e.g. First compile x, then compile Y (if Y uses X).
- We only want to compile those source files that have changed.  

To address all above problems, we use a classic tool called `make`, developed by GNU. To use `make`, you write
a Makefile.  The meat of a Makefile consists of a bunch of rules.  Here's what a rule looks like
```
target: dependency1 dependency2
         commands
```

In the make directory, there is a Makefile that compiles the source files therein into and executable called `foo`:  

```
foo: foo.o main.o
    gcc -o foo foo.o main.o
main.o: main.c
    gcc -c main.c
foo.o: foo.c
    gcc -c foo.c
clean:
    rm -f foo.o foo
```
**Question:** type `make`, what is the order of the commands being run? why?

To make writing such rules more succinct, you use variables and do [pattern matching]([https://www.gnu.org/software/make/manual/html_node/Pattern-Match.html)in Makefile.
- Define variables as `FILES:=file1 file2`, use it later as `$FILES`

There are several important [automatic variables](https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html).
- `$@` (target name)
- `$^` (name of all pre-requisites, i.e. dependencies)
- Pattern-matching using `%` and `*`. As an example:
```
  %.b: %.a
       cp  $*.a $*.b
```
  Above rule copies any file with suffix `.a` into another file with the same name except having suffix `.b`

### Exercise

* Rewrite the given Makefile using pattern matching and variables. Make it as clean and re-usable as possible. 

