
/*
 ভাবো, একটা ওষুধের ক্যাপসুলের মধ্যে ভিতরের উপাদানগুলো থাকে, কিন্তু আমরা শুধু বাইরের খোলস দেখি 
 — ভিতরের জিনিসগুলোতে আমাদের হাত দেওয়া নিষেধ। ঠিক তেমনই!

Think of it like a medicine capsule — the outer shell is visible, but the internal contents are hidden.
This is similar to the concept of encapsulation in OOP, where internal data and logic are protected from external access.

সারাংশ (বাংলায়):
Encapsulation মানে হলো ডেটা এবং ফাংশনকে একসাথে রাখা।

এতে বাইরের কোড সরাসরি ডেটা বদলাতে পারে না।

এতে প্রোগ্রাম নিরাপদ, সহজে ব্যবস্থাপনাযোগ্য এবং ভবিষ্যতে সহজে পরিবর্তনযোগ্য হয়।
*/
#include<bits/stdc++.h>
using namespace std;
class Student{
private :
    string name; // এটি লুকানো (private) - বাইরে থেকে সরাসরি নাম পরিবর্তন করা যাবে না।
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
    s1.setName("hello"); // setName() দিয়ে নাম সেট করা হয়েছে
    cout<<s1.getName()<<endl; // getName() দিয়ে নাম দেখা যাচ্ছে


}
