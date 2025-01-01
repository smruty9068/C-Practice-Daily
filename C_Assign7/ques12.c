 /*An initialization of array of structures given in the following code snippet. Find the output with
 pointer manipulation and operator precedence rules.*/
 int main(){
 struct test{
 int i;
 char *c;
 };
 struct test st[]={
 5, "Cse-Engg",//st[0],i=5,c=Cse-Engg
 4, "computer",
 6, "Electrical",
 8, "Mechnical",
 7, "All-Engg"
 };
 struct test *p=st; //p points to st[0]
 printf("%s\n", ++(p++ ->c));//se-Engg
 /*
 The p++ increments p to point to st[1] (after accessing st[0]).
p++ -> c is st[0].c (i.e., "Cse-Engg")
++(p++ -> c) increments the c pointer of st[0] to skip the first character.
"Cse-Engg" becomes "se-Engg"
 */
 printf("%c\n",*p++ ->c);//c
 /*
 p points to st[1].
p++ increments p to point to st[2] (after accessing st[1]).
p++ -> c is st[1].c (i.e., "computer").
*p++ -> c dereferences the first character of "computer".
Output: 'c'.
 */
 printf("%d\n",++p->i);//7
 /*
 p points to st[2].
p->i is 6 (value of i in st[2]).
++p->i increments i to 7
 */
 printf("%s\n",p[0].c);//Electrical
 /*
 p still points to st[2] after the previous operation.
p[0].c accesses st[2].c, which is "Electrical".
 */
 printf("%s\n",p->c);//Electrica
 /*
 p points to st[2].
p->c is st[2].c (i.e., "Electrical").
Output: "Electrical".
 */
 return 0;}