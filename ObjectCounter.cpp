#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Math {
    public:
    static int global_object_counter;
    static int global_object_destructed_counter;
    static string global_object_name;
    string object_name;
    static int var1, var2;

    Math(){
        global_object_counter++;
    }
    ~Math(){
        global_object_counter--;
        global_object_destructed_counter++;
    }

    void Add_Local(int x, int y)
	{
	    int output = x + y;
        cout << "Add_Local output: " << output << endl;
	}

	void Add_Global()
	{
        cout<<"First number: ";
        cin>>var1;
        cout<<"Second number: ";
        cin>>var2;
        int output = var1 + var2;
        cout << "Add_Global output: " << output << endl;
	}
};


// Initialize static member
int Math::global_object_counter = 0;
int Math::global_object_destructed_counter = 0;
string Math::global_object_name = "Global 1";
int Math::var1;
int Math::var2;
int main()
{


    Math obj_math1, obj_math2;
    obj_math1.object_name = "obj_math1";
    obj_math2.object_name = "obj_math2";


    //dynamic -> heap
    // Math* ptr = (Math*)malloc(sizeof(Math)); //allocates memory, does not call constructor
    Math* ptr = new Math;
    Math* ptr2 = new Math;
    //free(ptr); //doesnot call the destructor
    delete ptr;

    cout<< "Math class initial global object name: " << Math::global_object_name  << endl;
    cout<< "Math class first object name: " << obj_math1.object_name  << endl;
    Math::global_object_name = "Global 2";
    cout<< "Math class changed global object name: " << Math::global_object_name  << endl;
    cout<< "Math class second object name: " << obj_math2.object_name  << endl;
    cout<< "Total Math class objects created: " << Math::global_object_counter << endl;
    cout<< "Total Math class objects destroyed: "<< Math::global_object_destructed_counter << endl;

    obj_math1.Add_Local(2, 4);
    obj_math1.Add_Global();

    return 0;
}
