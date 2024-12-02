#include <iostream>
using namespace std;

void valueChange(int *a,int *b);

int main() {
int a=4,b=3;
cout<<"value of a and b are"<<" "<<a<<" "<<b<<endl;

valueChange(&a,&b);

cout<<"value of a and b are"<<" "<<a<<" "<<b;

    return 0;
}
void valueChange(int *a,int *b)
{
    int c=*a;
    *a=*a+*b;
    *b=c-*b;
}
