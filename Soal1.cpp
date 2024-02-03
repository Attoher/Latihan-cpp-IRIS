#include <iostream>
#include <cmath>
#define DegToRad(x) ((x) * M_PI / 180)

using namespace std;

int main(){
    double r,p,y;
    cin >> r >> p >> y;
    r=DegToRad(r);
    p=DegToRad(p);
    y=DegToRad(y);
    double siny=sin(y),cosy=cos(y),tany=tan(y),sinp=sin(p),cosp=cos(p),tanp=tan(p),sinr=sin(r),cosr=cos(r),tanr=tan(r);
    double a,b,c,d,e,f,g,h,i;
    a=cosy*cosp;
    b=-siny*cosr+cosy*sinp*sinr;
    c=siny*sinr+cosy*sinp*cosr;
    d=siny*cosr;
    e=cosy*cosr+siny*sinp*sinr;
    f=-cosy*sinr+siny*sinp*cosr;
    g=-sinp;
    h=cosp*sinr;
    i=cosp*cosr;
    int ceka=a,cekb=b,cekc=c,cekd=d,ceke=r,cekf=f,cekg=g,cekh=h,ceki=i;
    if(a==ceka)printf("%d",ceka);
    else cout << a;
    if(b==cekb)printf(" %d",cekb);
    else cout << " " << b;
    if(c==cekc)printf(" %d",cekc);
    else cout << " " << c;
    cout << endl;
    if(d==cekd)printf("%d",cekd);
    else cout << d;
    if(e==ceke)printf(" %d",ceke);
    else cout << " " << e;
    if(f==cekf)printf(" %d",cekf);
    else cout << " " << f;
    cout << endl;
    if(g==cekg)printf("%d",cekg);
    else cout << g;
    if(h==cekh)printf(" %d",cekh);
    else cout << " " << h;
    if(i==ceki)printf(" %d",ceki);
    else cout << " " << i;
    cout << endl;
}