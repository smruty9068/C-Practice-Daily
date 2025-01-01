/* Draw the node connectivity of the structure s1 and determine the output of the code snippet that
 simulates the array of structures and also the self-referential structure*/
 int main(){
 struct s1{
 char *z;//pointer to a char (string)
 int i;
 struct s1 *p;//Pointer to another struct s1
 };
 struct s1 a[]={
 {"SOA",1,a+1},//a[0]: {z="SOA", i=1, p=&a[1]}
 {"ITER",2,a+2},//a[1]: {z="ITER", i=2, p=&a[2]}
 {"CSE",3,a}//a[2]: {z="CSE", i=3, p=&a[0]}
 };
 struct s1 *ptr=a;//ptr starts pointing to a[0]
 printf("%s\n", ++(ptr->z));//ptr initially points to a[0], so ptr->z points to "SOA"
 //++(ptr->z) increments the pointer z to point to "OA" (skips the first character)
 printf("%s\n", a[(++ptr)->i].z);
 /*
 ++ptr increments ptr to point to a[1]
ptr->i (value of i in a[1]) is 2
a[2].z is "CSE"
 */
 printf("%s\n",a[--(ptr->p->i)].z);
 /*
 ptr initially points to a[1] (set by the second printf when ++ptr was executed).
ptr->p is a[1].p, which points to a[2].
ptr->p->i:
ptr->p points to a[2].
a[2].i is 3.
The -- operator decrements the value of a[2].i by 1.
Use Decremented Value in a[--(ptr->p->i)]:

The decremented value of a[2].i is 2.
Therefore, the expression a[--(ptr->p->i)] becomes a[2].
Access a[2].z:

a[2].z is "CSE".
Output:

The printf prints "CSE
 */
 printf("%d\n",--a[2].i);//1
 /*
 a[2].i is 2 (after previous decrement).
--a[2].i decrements i in a[2] to 1.
Output: 1.
 */
 return 0;
 }