#include <iostream>
#include <cmath>
#include <map>
class  caluclator {
     int a;
     float b;

public:
     //setter fxn
     void set(int m, float n){
          a=m;
          b= n;
     }
     //getter fxn
     int geta(){
          return this->a;
     }
    float getb(){
          return this->b;
     }
};
// acceable to everywhere
caluclator clc;

int add(){
     return  clc.geta()+clc.getb();
}

int mul(){
     return clc.geta()*clc.getb();
}

float divv(){
     return (float)clc.geta()/clc.getb();
}
float pw(){
     // for sqrt value 2^0.5;
     return pow(clc.geta(), clc.getb());
}
int sub(){
     return clc.geta()-clc.getb();
}

int main(){
     // ~map<int , int> mp;
     int a;
     float b;
     char c;
     while (true) {
          std::cout<<"enter\n";
          std::cin>>a>>c>>b;
          clc.set(a, b);
          switch (c) {
               case '+':
                    std::cout<<a<<" + "<<b<<" = "<<add()<<"\n";
                    break;
               case '-':
                    std::cout<<a<<" - "<<b<<" = "<<sub()<<"\n";
                    break;
               case '*':
                    std::cout<<a<<" * "<<b<<" = "<<mul()<<"\n";
                    break;
               case '/':
                    std::cout<<a<<" / "<<b<<" = "<<divv()<<"\n";
                    break;
               case '^':
                    std::cout<<a<<" ^ "<<b<<" = "<<pw()<<"\n";
                    break;
               default:
                    std::cout<<"invalid input\n";
                    break;
          }
     }
     return 0;
}


