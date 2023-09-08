#include<iostream.h>
class time
{
int hours,minute;
public:
void gettime(int h,int m)
{
hours=h;
minute=m;
}
void putdata()
{
cout<<hours<<"hours"<<minute<<"minutes \n";
void sum(time,time)
}};
void time:: sum(time T1,time T2)
{
minutes=T1.minutes+T2.minutes;hours=minutes/60;
minute=minute%60;
hours=hours+T1.hours+T2.hours;
}
int main()
{
time T1,T2,T3;
T1.gettime(2,45);
T2.gettime(3,30);
T3.sum(T1,T2);
T1.puttime();
T2.puttime();
T3.puttime();
return 0;
}