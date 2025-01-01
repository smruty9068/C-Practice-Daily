/* Draw the node connectivity of the structure s1 and determine the output of the code snippet that
 simulates the array of structures and also the self-referential structure*/
  int main(){
 struct s1{
 char *z;
 int i;
 struct s1 *p;//A pointer to another structure of the same type (struct s1).
 };
 struct s1 a[]={
 {"SOA",1,a+1}, //a[0] {z,i,p}, a+1 points to a[1]
 {"ITER",4,a+2},//a[1], points to a[2]
 {"CSE",5,a}//a[2], a points to a[0]
 };
 struct s1 *ptr=a; //involves an array of structures (a) of type struct s1
 //ptr is initialized to point to the first element of the array (a[0])
 printf("%s%s%s\n",a[0].z,a[1].z,a[2].z);//SOAITERCSE
 /*
a[0].z: "SOA"
a[1].z: "ITER"
a[2].z: "CSE"
 */
 printf("%s%s%s",(*ptr).z, ptr->z,a[2].p->z);//SOASOASOA
 /*
 (*ptr).z: "SOA" (dereferencing ptr, which points to a[0])
ptr->z: "SOA" (equivalent to (*ptr).z)
a[2].p->z: "SOA" (from a[2].p, which points to a[0], accessing a[0].z)
 */
 return 0;
  }