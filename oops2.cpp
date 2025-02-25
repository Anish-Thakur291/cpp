#include<iostream>
using namespace std;
class hero
{

  // properties
private:
  int health;
  // private is access inside the class only
public:
  char level;
  void print()
  {
    cout << level << endl;
  }
  // to acess private class we use getter and setter
  int gethealth()
  {
    return health;
  }
  char getlevel()
  {
    return level;
  }
  void sethealth(int h)
  {
    health = h;
  }
  void setlevel(char ch)
  {
    level = ch;
  }
//parameterised costruter
hero(int health, char level){
    this-> level=level;
    this-> health=health;
}
};


int main(){

    hero h1(20,'a');
    cout<<"address of h1"<<&h1<<endl;
    h1.gethealth();
    cout<<"level of h1"<<&h1<<endl;
    h1.getlevel();

// hero h1;
//   cout<<"size of h1"<<sizeof(h1)<<endl;
//   cout<< "health is"<<h1.gethealth()<<endl;
//   h1.sethealth(80);
//    h1.level='A';
//   cout<<"health is:"<<h1.gethealth()<<endl;
//   cout<<" level is"<<h1.level<<endl;




    return 0;
}