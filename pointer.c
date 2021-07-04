
#include <malloc.h>
#include <stdio.h>


//Pointers for structures
//
//int main() {
//  struct data {
//    int i;
//    char c;
//    int j;
//  };
//  struct data v1;
//  struct data * dsptr;
//  printf("Size of structure data = %d\n", sizeof(struct data));
//  dsptr = (struct data * ) malloc(sizeof(struct data));
//  printf("Address of member int i = %u\n", & (dsptr -> i));
//  printf("Address of member char c = %u\n", & (dsptr -> c));
//  printf("Address of member int j = %u\n", & (dsptr -> j));
//  return 0;
//}



//
//
//
//int main() {
//    struct data {
//      int i;
//      char c;
//      int j;
//      int arr[2];
//    };
//    struct datawptr
//    {
//        int i;
//        char *c;
//    };
//    struct datawptr dptr1;
//    struct datawptr dptr2;
//    struct data svar1; // a normal variable of type struct data
//    struct data svar2;// a normal variable of type struct data
//
//    svar1.c = 'a';
//    svar1.i = 1;
//    svar1.j = 2;
//    svar1.arr[0] = 10;
//    svar1.arr[1] = 20;
//    svar2 = svar1;
//    printf("Value of second variable \n");
//    printf("Member c = %c\n", svar2.c);
//    printf("Member i = %d\n", svar2.i);
//    printf("Member j = %d\n", svar2.j);
//    printf("Member arr0th = %d\n", svar2.arr[0]);
//    printf("Member arr1st = %d\n", svar2.arr[1]);
//    dptr1.i = 10;
//    dptr1.c = (char*)malloc(sizeof(char));
//    *(dptr1.c) = 'c';
//    dptr2.c = (char*)malloc(sizeof(char));
//    dptr2 = dptr1;
//    printf("int member = %d\n", dptr2.i);
//    printf("char ptr member = %c\n", *(dptr2.c));
//    return 0;
//}
//
//









//Pointer arithmetic with array
//


//Pointer to an array
//
//int main() {
//    int arr[4] = {1,2,3,4};
//    int( * ptr2arr)[4];
//    int i;
//    int * ptr = arr;
//    ptr2arr = & arr;
//
//    for (i = 0; i < 4; i++) {
//      printf("address of array = %p\n", arr + i);
//    }
//
//
//    printf("Value at = %d\n",*(ptr2arr[0] + 1));
//
//    for(i = 0; i<4; i++)
//    {
//        printf("Value at %p = %d\n",(ptr2arr[0] + i),*(ptr2arr[0] + i));
//    }
//    return 0;
//}



//In the code snippet above, ptr2arr is a pointer to array, where the array that it is pointing to is capable of
//storing four data elements of integer type.





//Pointer to multidimensional array

//In case of a 2D array, specifying the name of an array will yield the address of the 0th row (which is a 1D array).
//And, adding an offset to the variable name will yield the starting address of the i th row.


//
//
//int main() {
//  int data[5][5];
//  int i, j;
//  int count = 0;
//  for (i = 0; i < 5; i++) {
//    for (j = 0; j < 5; j++) {
//      data[i][j] = count++;
//    }
//  }
//
//  printf("Starting address of the array % p \n", data);
//  for (i = 0; i < 5; i++) {
//    printf(" %dth row location = %p\n", i, data[i]);
//    printf("Loc % d, 1 = % p\n",i, & data[i][0]);
//  }
//  return 0;
//}


//In the code above, each row (which is itself a 1D array) is accessed with the help of a variable name and the 1 st
//index (i.e., data[i]).Therefore, the expression <variable_name> + index == < variable_name >[index] will yield
//the starting address of the ith row.












//Array of pointers by definition is meant to store pointer variables in its consecutive location.
// Every location in this array will contain memory address of some data in memory.



// int main() {
//    int arr[4] = {1,2,3,4};

//    int * arr_ptr[4];

//    int i;

//    for (i = 0; i < 4; i++) {
//        arr_ptr[i] = arr + i;
//    }
//    printf("Address of (arr) array element\n");


//    for (i = 0; i < 4; i++)
//    {
//        printf("Address of %d index = %p\n", i, arr + i);
//    }

//    printf("Value of (arr_ptr) array of pointer element \n");

//    for (i = 0; i < 4; i++)
//    {
//        printf("Value of %d index = %p\n", i, arr_ptr[i]);
//    }

//    return 0;
// }

























//
//int main()
//{
//    int arr[4] = {1,2,3,4};
//    printf("Address of 0th index = %p\n", arr);
//    printf("Address of 0th index = %p\n", &arr[0]);
//    return 0;
//}
//













//
//int main()
//{
//    int arr[4] = {1,2,3,4};
//    int *iptr;
//    iptr = &arr[0] + 2; //pointing to the 2nd element
//    printf("Address of 2nd index = %p\n", iptr);
//    iptr = &arr[2]; //pointing to the 2nd element
//    printf("Address of 2nd index = %p\n", iptr);
//    return 0;
//}
//
//




//Pointer to a constant



//int main()
//{
//    int num = 10;
//    int* const ptr1 = &num; //Initialization of const ptr
//    printf("Value stored at pointer = %d\n",*ptr1);
//}

//Once initialized, the const pointer should not point to any other memory address.




//
//int main()
//{
//    int num1 = 10;
//    int num2 = 20;
//    int* const ptr1 = &num1;
//    //Initialization of const ptr // can’t do this
//    ptr1 = &num2;
//    printf("Value stored at pointer = %d\n",*ptr1);
// }














//pointers for pass by value
/*
  struct data
    {
        int x;
        int y;
    };
    void func(struct data v1)
    {
        struct data v2 = v1;
        printf("The parameters are %d and %d", v2.x, v2.y);
    }
    int main()
    {
        struct data var;
        var.x = 10;
        var.y = 20;
        func( var );
        return 0;
    }
*/
//=================================================================================================================
//=================================================================================================================




//Case 2: Pass by pointers

/*
        struct data
        {
            int x;
            int y;
        };
        void func(struct data* v1)
        {
            struct data *v2 = v1;
            printf("The parameters are %d and %d", v2->x, v2->y);
        }
        int main()
        {
            struct data var;
            var.x = 10;
            var.y = 20;
            func(& var );
            return 0;
        }


*/

/*In the example above, the size of the parameter is 4 bytes since we passed the pointer to the structure variable.
2.
Accessibility of variables: The pass by reference technique makes it possible to
manipulate the local variables of a function from a different function.*/


//=================================================================================================================
//=================================================================================================================


//
/*


int main()
{
    int num = 10;
    int *ptr = &num;
    int **mptr = &ptr;
    printf("Value of var num = %d\n", num);
    printf("Value of var num = %d\n", *ptr);
    printf("Value of var num = %d\n", **mptr);

    printf("Address of var num = %p\n", &num);
    printf("Address of var num = %p\n", ptr);
    printf("Address of var num = %p\n", *mptr);

    printf("Address of pointer var ptr = %p\n",&ptr);
    printf("Address of pointer var ptr = %p\n",mptr);
    printf("Address of pointer var mptr = %p\n",&mptr);
    return 0;
}


*/







//======================================================================================================
//======================================================================================================

//Pointer to a function

void mesg(int num) {
  printf("Mesg no. %d\n", num);
}
int main() {
  int * t;
  void( * fpmsg1)(int); //function pointer
  void( * fpmsg2)(int); //function pointer
  fpmsg1 = mesg;
  fpmsg2 = mesg;
  fpmsg1(10);
  // implicit method
  ( * ) fpmsg2(20);
  // explicit way of
  return 0;
}
// fpmsg1(10);
// // implicit method
// ( * ) fpmsg2(20);


// explicit way of variable to point to the function "mesg" variable to point to the function "mesg" of invoking a function invoking a function of invoking a function invoking a function

