#include <bits/stdc++.h>
using namespace std;
class Fraction{
public:
    int num;
    int den;
    Fraction(int num,int den){
        this->num=num;
        this->den=den;
    }
    void properFrac(){ //Turning every fraction to its proper form
        int a=1;
        for (int i=2;i<=min(num,den);i++){
            if (num%i==0 && den%i==0){
                a = i;
            }
        }
        if(a!=0){
            num=num/a;
            den=den/a;
        }
    }
    void display(){ //Displaying output of fraction
        properFrac();
        cout<<num<<"/"<<den<<endl;
    }
    Fraction sum(Fraction a,Fraction b){
        Fraction c(num,den);
        c.num = a.num*b.den+a.den*b.num;
        c.den = a.den*b.den;
        return c;
    }
    Fraction divide(Fraction f){
        int newNum = this->num*f.den;
        int newDen = this->den*f.num;
        Fraction ans(newNum,newDen);
        return ans;
    }
    Fraction operator+(Fraction f){
        int newNum = this->num*f.den+this->den*f.num;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
    Fraction operator-(Fraction f){
        int newNum = this->num*f.den-this->den*f.num;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
    Fraction operator*(Fraction f){
        int newNum = this->num*f.num;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
};
int main()
{
    Fraction f1(1,2);
    Fraction f2(1,4);
    f1.display();
    f2.display();
    
    Fraction f3 = f1+f2;
    f3.display();
    Fraction f4 = f1-f2;
    f4.display();
    Fraction f5 = f1*f2;
    f5.display();
    
    Fraction f6 = f1.divide(f2);
    f6.display();
    return 0;
}