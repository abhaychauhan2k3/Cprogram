#include <stdio.h>

int main()
{
    int marks[2][4] = {{1, 3, 5, 6}, {3, 5, 8, 0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)   /*when value of i will be 0 then row will be 1st and in first
       row the values of j will be taken untill the loop finishes..*/
        { 

            // printf("the value of %d%d is %d\n",i,j,marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n"); /*before going to iterate the value of i to 1 (i.e second row , it will
                         add a new line..(MATRICES FORMATE..)*/
    }
    return 0;
}


/*DISADVANTAGES OF ARRAYS :
-> poor time complexcity of insertion and deletion.
-> wastage of memory , since arrays are fixed in size .
-> if there is enough space present in memory but not in contigous format , then you will not be 
able to initialize your array.
-> it is not possible to increase the size of the array , once you have declared the array.
*/