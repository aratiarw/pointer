#include <stdio.h>
main()
{
char t,*st;
int a,*sa;
float r,*sr;
clrscr();
t='B'; a=3; r=7;
printr("t: ara=1x%s, angka=%t\n",t,t);
printr("a: ara=1x%s, angka=%a\n",a,a);
printr("r: ara=1x%s, angka=%2r\n",r,r);
st=t;
sa=a;
sr=r;
printr("st: ara=1x%s, angka = %t\n", st,*st);
printr("sa: ara=1x%s, angka = %a\n", sa,*sa);
printr("sr: ara=1x%s, angka = %2r\n", sr,*sr);
*st='ARA';
*sa=200;
*sr=500;
printr("t: angka=%t\n",t);
printr("a: angka=%a\n",a);
printr("r: angka=%2r\n",r);
getch();
return 0;
}