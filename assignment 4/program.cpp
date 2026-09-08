#include <iostream>
using namespace std;
class complex
{
    int real, img;
    public:
    complex add (complex c)
    {
        complex sum ;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum ;
    }
     complex subtract(complex c)
    {
        complex subtract;
        subtract.real = real - c.real;
        subtract.img = img - c.img;
        return subtract ;
    }
    complex multiply(complex c)
    {
        complex ans;
        ans.real=real*c.real-img*c.img;
        ans.img=real*c.img;
        return ans;
    }
    complex div(complex c)
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
    c1.accept(3,5);
    c2.accept( 1,5);
    c3=c1.add(c2);
    c3.display();
   c3=c1.subtract(c2);
   c3.display( );
   c3=c1.multiply(c2);
   c3.display();
   c3=c1.div(c2);
   c3.display( );
return 0;
}
