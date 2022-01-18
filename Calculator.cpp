#include<bits\stdc++.h>
using namespace std;
void exchange_rate(){
    fh:
    int choice,input;
    float answer;
    cout<<"\n-----EXCHANGE CONVETER-----"<<endl;
    cout<<"\n1 => DOLLAR TO PKR"<<endl;
    cout<<"2 => PKR TO DOLLAR"<<endl;
    cout<<"3 => EXIT"<<endl;
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"\nENTER YOUR AMOUNT : ";cin>>input;
    answer = 176*input;
    cout<<answer<<endl;
    goto fh;
        break;
    case 2:
    cout<<"\nENTER YOUR AMOUNT : ";cin>>input;
    answer = input/176;
    cout<<answer<<endl;
    goto fh;
        break;
    case 3:
        return; 
    default:
    cout<<"\nINVALID CHOICE....TRY AGAIN"<<endl;
    goto fh;
    } 
}
void length_calculator(){    
    fh:
    int input,choice;
    float answer;
    cout<<"\n-----LENGTH CONVERTER-----"<<endl;
    cout<<"\n1 => DECIMETER TO MILIMETER"<<endl
    <<"2 => DECIMETER TO CENTIMETER"<<endl
    <<"3 => DECIMETER TO METER"<<endl
    <<"4 => DECIMETER TO KILOMETER"<<endl
    <<"5 => MILIMETER TO DECIMETER"<<endl
    <<"6 => MILIMETER TO CENTIMETER"<<endl
    <<"7 => MILIMETER TO METER"<<endl
    <<"8 => MILIMETER TO KILOMETER"<<endl
    <<"9 => METER TO MILIMETER"<<endl
    <<"10 => METER TO DECIMETER"<<endl
    <<"11 => METER TO CENTIMETER"<<endl
    <<"12 => METER TO KILOMETER"<<endl
    <<"13 => KILOMETER TO METER"<<endl
    <<"14 => KILOMETER TO DECIMETER"<<endl
    <<"15 => KILOMETER TO MILIIMETER"<<endl
    <<"16 => KILOMETER TO CENTIMETER"<<endl
    <<"17 => EXIT"<<endl;
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input*100;
    cout<<answer<<endl;
        break;
    case 2:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input*10;
    cout<<answer<<endl;
        break;
    case 3:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/10;
    cout<<answer<<endl;
        break;
    case 4:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/10000;
    cout<<answer<<endl;
        break;
    case 5:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/100;
    cout<<answer<<endl;
        break;
    case 6:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/10;
    cout<<answer<<endl;
        break;
    case 7:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input*1000;
    cout<<answer<<endl;
        break;
    case 8:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input*1000000;
    cout<<answer<<endl;
        break;
    case 9:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input*1000;
    cout<<answer<<endl;
        break;
    case 10:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input*10;
    cout<<answer<<endl;
        break;
    case 11:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input*100;
    cout<<answer<<endl;
        break;
    case 12:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/1000;
    cout<<answer<<endl;
        break;
    case 13:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/1000;
    cout<<answer<<endl;
        break;
    case 14:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/10000;
    cout<<answer<<endl;
        break;
    case 15:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/1000000;
    cout<<answer<<endl;
        break;
    case 16:
    cout<<"\nENTER YOUR LENGTH : ";cin>>input;
    answer = input/100000;
    cout<<answer<<endl;
        break;
    case 17:
        return;
    default:
    cout<<"\nINVALID CHOICE.....TRY AGAIN"<<endl;
    goto fh;
    }
}
void area(){
    fh:
    int input,choice;
    float answer;
    cout<<"\n-----AREA CALCULATOR-----"<<endl;
    cout<<"\n1 => SQUARE METER TO SQUARE KILOMETER"<<endl;
    cout<<"2 => SQUARE KILOMETER TO SQUARE METER"<<endl;
    cout<<"3 => EXIT"<<endl;
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input/1000000;
    cout<<answer<<endl;
    goto fh;
        break;
    case 2:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input*1000000;
    cout<<answer<<endl;
    goto fh;
        break;
    case 3:
        return;
    default:
        cout<<"\nINVALID CHOICE.....TRY AGAIN"<<endl;
        goto fh;
    }
}
void volume(){
    fh:
    int input,choice;
    float answer;
    cout<<"\n----VOLUME CONVERTER----"<<endl;
    cout<<"\n1 => CUBIC METER TO CUBIC DECIMETER"<<endl;
    cout<<"2 => CUBIC DECIMETER TO CUBIC METER"<<endl;
    cout<<"3 => EXIT"<<endl;
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice; 
    switch (choice)
    {
    case 1:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input*1000;
    cout<<answer<<endl;
    goto fh;
        break;
    case 2:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input/1000;
    cout<<answer<<endl;
    goto fh;
        break;
    case 3:
        return;
    default:
    cout<<"\nINVALID CHOICE.....TRY AGAIN"<<endl;
    goto fh;
        break;
    }
}
void speed(){
    fh:
    int input,choice;
    float answer;
    cout<<"\n-----SPEED CALCULATOR-----"<<endl;
    cout<<"1 => METER PER SECOND TO KILOMETER PER HOUR"<<endl;
    cout<<"2 => KILOMETER PER HOUR TO METER PER SECOND"<<endl;
    cout<<"3 => EXIT"<<endl;
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input*3.6;
    cout<<answer<<endl;
    goto fh;
        break;
    case 2:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input/3.6;
    cout<<answer<<endl;
    goto fh;
        break;
    case 3:
        return;
    default:
    cout<<"\nINVALID CHOICE.....TRY AGAIN"<<endl;
    goto fh;
        break;
    }
}
void weight(){
    fh:
    int input,choice;
    float answer;
    cout<<"\n-----WEIGHT CALCULATOR-----"<<endl;
    cout<<"\n1 => GRAM TO KILOGRAM"<<endl;
    cout<<"2 => KILOGRAM TO GRAM"<<endl;
    cout<<"3 => EXIT"<<endl;
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input/1000;
    cout<<answer<<endl;
    goto fh;
        break;
    case 2:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input*1000;
    cout<<answer<<endl;
    goto fh;
        break;
    case 3:
        return;
    default:
    cout<<"\nINVALID CHOICE.....TRY AGAIN"<<endl;
    goto fh;
        break;
    }
}
void temprature(){
    fh:
    int input,choice;
    float answer;
    cout<<"\n-----TEMPRATURE CONVERTER-----"<<endl;
    cout<<"\n1 => CELSIUS TO FAHRENHEIT"<<endl;
    cout<<"2 => FAHRENHEIT TO CELSIUS"<<endl;
    cout<<"3 => EXIT"<<endl;
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice;
    switch (choice){
    case 1:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = (input*(9/5))+32;
    cout<<answer<<endl;
    goto fh;
        break;
    case 2:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = (input-32)*(5/9);
    cout<<answer<<endl;
    goto fh;
        break;
    case 3:
        return;
    default:
    cout<<"\nINVALID CHOICE.....TRY AGAIN"<<endl;
    goto fh;
        break;
    }
}
void power(){
    fh:
    int input,choice;
    float answer;
    cout<<"\n-----POWER CONVERTER-----"<<endl;
    cout<<"1 => WATT TO KILLOWAT"<<endl;
    cout<<"2 => KILOWATT TO WATT"<<endl;
    cout<<"3 => EXIT"<<endl;
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice; 
    switch (choice){
    case 1:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input/1000;
    cout<<answer<<endl;
    goto fh;
        break;
    case 2:
    cout<<"\nENTER YOUR VALUE : ";cin>>input;
    answer = input*1000;
    cout<<answer<<endl;
    goto fh;
        break;
    case 3:
        return;
    default:
    cout<<"\nINVALID CHOICE.....TRY AGAIN"<<endl;
    goto fh;
        break;
    }
}
int main(){
    hf:
    int choice;
    cout<<"\n---------UNIT CONVERTER---------"<<endl;
    cout<<"\n1 => EXCHANGE RATE "<<endl
    <<"2 => LENGTH"<<endl
    <<"3 => AREA"<<endl
    <<"4 => VOLUME "<<endl
    <<"5 => SPEED"<<endl
    <<"6 => WEIGHT"<<endl
    <<"7 => TEMPRATURE"<<endl
    <<"8 => POWER"<<endl
    <<"9 => EXIT"<<endl;
    
    cout<<"\nENTER YOUR CHOICE : ";cin>>choice;
    switch(choice){
        case 1:
        exchange_rate();
        goto hf;
            break;
        case 2:
        length_calculator();
        goto hf;
            break;
        case 3:
        area();
        goto hf;
            break;
        case 4:
        volume();
        goto hf;
            break;
        case 5:
        speed();
        goto hf;
            break;
        case 6:
        weight();
        goto hf;
            break;
        case 7:
        temprature();
        goto hf;
            break;
        case 8:
        power();
        goto hf;
            break;
        case 9:
        exit(0);
        default :
        cout<<"INVALID CHOICE.....TRY AGAIN"<<endl;
        goto hf;
    }
    return 0;
}