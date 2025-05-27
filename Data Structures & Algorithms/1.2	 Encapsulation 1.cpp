
/*
 ভাবো, একটা ওষুধের ক্যাপসুলের মধ্যে ভিতরের উপাদানগুলো থাকে, কিন্তু আমরা শুধু বাইরের খোলস দেখি 
 — ভিতরের জিনিসগুলোতে আমাদের হাত দেওয়া নিষেধ। ঠিক তেমনই!

Think of it like a medicine capsule — the outer shell is visible, but the internal contents are hidden.
This is similar to the concept of encapsulation in OOP, where internal data and logic are protected from external access.
*/
#include<bits/stdc++.h>
using namespace std;
class Student{
private :
    string name;
public :
    void setName(string x)
    {
        name=x;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    Student s1;
    s1.setName("hello");
    cout<<s1.getName()<<endl;


}
