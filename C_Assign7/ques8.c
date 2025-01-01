 int main(){
 struct student{
 int h;
 int w;
 int m;
 };
 struct student s1={20,40,50};//structure initialization {h=20, w=40, m=50}
 struct student *ptr=&s1;//pointer ptr is initialized to point to the memory address of s1.
 printf("%d\n",*((int *)ptr+2));// 50
 //The value of m in s1 is 50.
 
 /*
 (int *)ptr:
The pointer ptr (of type struct student *) is cast to an int *.
This means that the compiler now treats the memory address as pointing to an array of integers.
 */

/*
*((int *)ptr + 2):
Pointer arithmetic is performed on the cast pointer.
+2 skips the first two int values (h and w) and points to the third int value (m).
* dereferences the pointer to retrieve the value stored at the computed address, which is m.
*/
 return 0;
 }