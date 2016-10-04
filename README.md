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

* Complete the `toLowerCase` function in `lower.c`. It should return the input string with all characters set to lower case. To do this, you may find the ASCII representation of characters useful. Refer to this table:	

[ASCII](http://www.asciitable.com/)

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
