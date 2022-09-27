0. memset
mandatory
Write a function that fills memory with a constant byte.

1. memcpy
mandatory
Write a function that copies memory area.

2. strchr
mandatory
Write a function that locates a character in a

3. strspn
mandatory
Write a function that gets the length of a prefix substring.

4. strpbrk
mandatory
Write a function that searches a string for any of a set of bytes.

Prototype: char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

5. strstr
mandatory
Write a function that locates a substring.

Prototype: char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.