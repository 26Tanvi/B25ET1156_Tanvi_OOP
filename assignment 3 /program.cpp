#include <iostream>
using namespace std;
class complex
{
    int real, img;
    public:
    complex operator+ (complex c)
    {
        complex sum ;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum ;
    }
    complex operator-(complex c)
    {
        complex subtract;
        subtract.real = real - c.real;
        subtract.img = img - c.img;
        return subtract ;
    }
    complex operator*(complex c)
    {
        complex ans;
        ans.real=real*c.real-img*c.img;
        ans.img=real*c.img;
        return ans;
    }
      complex operator/ (complex c)
    {
        complex result;
         float denominator = (c.real * c.real) + (c.img * c.img);

        result.real = ((real * c.real) + (img * c.img)) ;
        result.img = ((img * c.real) - (real * c.img)) ;
        return result;
    }
    void accept(int r,int i)
    {
        real=r; img=i;
    }
    void display()
    {
        cout << "\n" <<real<<"+i\t" <<img;
    }
};
int main()
{
    complex c1,c2,c3;
    cout<<"1st complex number is:";
    c1.accept(3,5);
    c1.display();
    cout<<"\n2nd complex number is:";
    c2.accept( 1,5);
    c2.display();
    cout<<"\n sum of two complex number";
    c3=c1+c2;
    c3.display();
    cout<<"\n substraction  of two complex number";
   c3=c1-c2;
   c3.display( );
   cout<<"\n multiplication of two complex number";
   c3=c1*c2;
   c3.display();
   cout<<"\n division of two complex number";
   c3=c1/c2;
   c3.display();

return 0;
}
