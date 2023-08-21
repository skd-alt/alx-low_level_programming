#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - add two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - sub two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - mul two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - div two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - mod two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int mod(int a, int b)
{
	return (a % b);
}
