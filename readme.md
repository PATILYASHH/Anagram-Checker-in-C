# Anagram Checker

This C program checks if two input strings are anagrams of each other.

## Requirements
- C compiler (e.g., GCC)

## Usage
1. Clone the repository or download the source code file.
2. Compile the program using the C compiler.
    ```bash
    gcc -o anagram_checker anagram_checker.c
    ```
3. Run the compiled executable, providing two strings as arguments.
    ```bash
    ./anagram_checker listen silent
    ```

## How it Works
The program takes two strings as input, removes spaces and converts all characters to lowercase to handle case-insensitivity. It then counts the occurrences of each character in both strings and compares the counts. If the counts are the same for all characters, the strings are considered anagrams.

## Example
Input:

```
./anagram_checker listen silent
```

Output:
```
'listen' and 'silent' are anagrams.

```

Feel free to modify and improve the program as needed.