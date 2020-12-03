/*My Name : Maab Ahmed Omer   //بيانات عن المبرمج 
Claas : Second 
Department : Computer 
*/
#include <iostream> //بداية البرنامج 
#include <vector>
using namespace std;
class Shape           //تعريف كلاس اسمه shape 
{
public:               //هنا يبدأ تكوين الكلاس 
virtual int area() // virtual  هنا استخدمنا كلمة  
                    //فقط للتعريف 
{
  return (0); //اسناد صفر للمساحة 
}
virtual double ocean()
{
   return (0);
}
};
class Polygon : public Shape //عملية وراثة  
{
protected:    
int width,height; //انشاء متغيرين 
public:
void set_values (int a ,int b) 
{
width = a; height = b; //تم الاسناد 
}
};
class Ellipse : public Shape //وراثة كلاس 
{
public:
int lenght , radius ;
  void set_values (int x,int y) 
  {
      lenght = x; radius = y;
  }   
};
class Rectangle : public Polygon //عملية وراثة
{
public:
  int area()
{
    return (2*width*2*height);// ارجاع قيمة مساحة 
}  
double ocean()
{
    return ((width*height)/2); //ارجاع قيمة محيط
}
};
class Triangl : public Polygon //وراثة
{
public:
    int area()
  {
    return ((width*height)*1/2);
  }
   double ocean()
  {
    return (width+height); //ارجاع قمة المحيط 
  }
};
class Square : public Polygon //وراثة 
{
public: 
    int area()
    {
    return (width*height); //ارجاع قيمة المساحة 
    }
    double ocean()
    {
    return (4*height); //ارجاع قيمة المحيط 
    }
};
class Circle : public Ellipse //وراثة
{
public:
float p = 3.14; //تعريف لقيمة باي 
  int area()
{
    return (radius*radius*lenght );
}
double ocean()
{
    return (p*lenght); //ارجاع قيمة المحيط 
}
};
int main(){ //هنا يبدأ تفيذ كل المطلوب تنفيذه 
Rectangle rect;// Rectangle تعريف كائن من كلاس
Triangl trgl;  // Triangl تعريف كائن من كلاس 
Square suqe;  //Squareتعريف كائن من كلاس 
Circle cic;  // Circle  كائن من كلاس 
Polygon *p1 ,*p2 ,*p3;//انشاء pointer 
Ellipse *p4;// انشاء pointerمن كلاس الاب 
p1 = &rect; // rect للكائن pointerتم عملية اسناد 
p2 = &trgl; // trgl  للكائن pointerتم عملية اسناد
p3 = &suqe; // suqe  للكائن pointerتم عملية اسناد 
p4 = &cic; // cic للكائن pointerتم عملية اسناد 
p1->set_values(2,4);//اعطاء القيم 
p2->set_values(2,4);
p3->set_values(2,4);
p4->set_values(2,4);
cout<<"area of Rectancle = "<<p1->area()<<endl;
// تعويض في قيمة المساحة 
cout<<"area of Triangl = "<<p2->area()<<endl;
cout<<"area of Squar = "<<p3->area()<<endl;
cout<<"area of Circle = "<<p4->area()<<endl;
cout<<"ocean of Rectangle =  "<<p1->ocean()<<endl;
//تعويض في قيمة المحيط 
cout<<"ocean of Triangl = "<<p2->ocean()<<endl;
cout<<"ocean of Squar = "<<p3->ocean()<<endl;
cout<<"ocean of Circle = "<<p4->ocean()<<endl;

return 0; //نهاية البرنامج 
};



