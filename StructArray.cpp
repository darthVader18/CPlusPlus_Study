#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct POSP {
    int id;
    char name[50];
    long long dob;
    long long pan_card_no;
    int insurance_delivered;
};

POSP posp_data[100];

void show_data(int id) {
    bool flag = false;
    for(int i = 0; i < 2; i++) {
        if(posp_data[i].id == id) {
            flag = true;
            cout<<"ID: "<<posp_data[i].id<<endl;
            cout<<"Name: "<<posp_data[i].name<<endl;
            cout<<"DOB: "<<posp_data[i].dob<<endl;
            cout<<"Pan Card No.: "<<posp_data[i].pan_card_no<<endl;
            cout<<"Insurance Delivered: "<<posp_data[i].insurance_delivered<<endl;
            cout<<endl;
            break;
        }
    }
    if(!flag) {
        cout<<"No Information";
    }
}

int main() {

    for(int i = 0; i < 2; i++) {
        cout<<"ID: ";
        cin>>posp_data[i].id;
        cout<<"Name: ";
        cin>>posp_data[i].name;
        cout<<"DOB: ";
        cin>>posp_data[i].dob;
        cout<<"Pan Card No.: ";
        cin>>posp_data[i].pan_card_no;
        cout<<"Insurance Delivered: ";
        cin>>posp_data[i].insurance_delivered;
        cout<<endl;
    }

    for(int i = 0; i < 2; i++) {
        if(posp_data[0].insurance_delivered < posp_data[i].insurance_delivered) {
            posp_data[0].insurance_delivered = posp_data[i].insurance_delivered;
        }
    }
    cout<<"Highest Insurance Seller"
    cout<<"ID: "<<posp_data[0].id<<endl;
    cout<<"Name: "<<posp_data[0].name<<endl;
    cout<<"DOB: "<<posp_data[0].dob<<endl;
    cout<<"Pan Card No.: "<<posp_data[0].pan_card_no<<endl;
    cout<<"Insurance Delivered: "<<posp_data[0].insurance_delivered<<endl;
    cout<<endl;

    cout<<"Enter ID no. whose information is to be displayed: "<<endl;
    int id;
    cin>>id;
    show_data(id);

    return 0;
}
