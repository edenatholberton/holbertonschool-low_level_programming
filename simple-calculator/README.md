# Eden's Simple Calculator

- A calculator that runs in the terminal. 
- It is written in C
- It keeps asking for a choice until you quit.

## Compile

To compile, type: 
- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

To run, type:
- ./calculator

You will see a welcome line and a menu. Type a number to pick a choice, then press Enter.

## What it can do

- 1: add
- 2: subtract
- 3: multiply
- 4: divide
- 0: quit

For 1 to 4 it asks for A, then B, then shows the result. After that the menu comes back. 
	- If the number is not on the menu it says Invalid Choice and shows the menu again.
	- If you try to divide by zero it says Error: division by zero.

## Numbers

It uses decimals (double), so you can type numbers like 5.5 or -100. The result is printed with %g, which drops extra zeros. So 10 + 25 shows 35 (instead of 35.000000 from %f)

## Known limitations

- If you type a letter instead of a number, the program loops forever. Press Ctrl+C to stop it.
- %g only shows about 6 digits, so a long result gets rounded. Big or small results can show a result like 1e+06.

