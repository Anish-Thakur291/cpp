#include <iostream>
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
};

int main()
{

  // create object

  // static allocation
  cout << "static allocation" << endl;
  hero a;
  a.setlevel('B');
  a.sethealth(30);
  cout << "level is" << a.level << endl;
  cout << "health is" << a.gethealth() << endl;
  // dynamic allocation
  cout << "dynamic allocation" << endl;
  hero *b = new hero;
  b->setlevel('A');
  b->sethealth(49);
  cout << "level is" << b->level << endl;
  cout << "health is" << b->gethealth() << endl;

  // hero h1;
  // cout<<"size of h1"<<sizeof(h1)<<endl;
  // cout<< "health is"<<h1.gethealth()<<endl;
  // h1.sethealth(80);
  // h1.level='A';
  // cout<<"health is:"<<h1.gethealth()<<endl;
  // cout<<" level is"<<h1.level<<endl;

  //   it is private so not able to acces outside the clas
  return 0;
}