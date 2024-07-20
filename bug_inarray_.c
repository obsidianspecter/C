int myArray[5] = {1, 2, 3, 4, 5};
int index = 4; // or any valid index between 0 and 4

printf("%d\n", myArray[index]);

//but if a index of 5 is given it gives rise to a bug termed as out of bounds issue which arises since there is only from 0 ot 4 there it will throw an error or result in defined behavior
