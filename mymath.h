// It is not recommended to put function definitions 
// in a header file. Ideally there should be only 
// function declarations. Purpose of this code is 
// to only demonstrate working of header files. 
void add(int a, int b) 
{ 
	printf("Added value=%d\n", a + b); 
} 

void subtraction(int a, int b)
{
	printf("Subtracted value=%d\n", a - b);
}

void multiply(int a, int b) 
{ 
	printf("Multiplied value=%d\n", a * b); 
} 

void division(int a, int b)
{
	printf("Divided value=%d\n", a / b);
}

void square(int x)
{
	printf("Squared value=%d\n", x * x);
}