#include <iostream>      // مكتبة الإدخال والإخراج
using namespace std;     // لاستخدام cin و cout

// دالة لحساب مؤشر كتلة الجسم BMI
double bmi(double weight, double height)
{
    return weight / (height * height);
}

// دالة لحساب السعرات اليومية
double calories(double weight)
{
    return weight * 24;
}

// دالة لحساب السعرات المحروقة
double burned(double weight, double time, int sport)
{
    double rate;   // معدل الحرق حسب الرياضة

    if (sport == 1)
        rate = 4;      // المشي
    else if (sport == 2)
        rate = 8;      // الجري
    else if (sport == 3)
        rate = 6;      // ركوب الدراجة
    else if (sport == 4)
        rate = 7;      // السباحة
    else
        rate = 0;      // لو المستخدم أدخل رقم غير صحيح

    return weight * time * rate;
}

int main()
{
    double weight;   // لتخزين الوزن
    double height;   // لتخزين الطول
    double time;     // لتخزين مدة التمرين
    int sport;       // لتخزين اختيار الرياضة

    cout << "Enter your weight: ";
    cin >> weight;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter exercise time (hours): ";
    cin >> time;

    cout << endl;
    cout << "Choose your sport:" << endl;
    cout << "1- Walking" << endl;
    cout << "2- Running" << endl;
    cout << "3- Cycling" << endl;
    cout << "4- Swimming" << endl;
    cout << "Enter your choice: ";
    cin >> sport;

    cout << endl;

    cout << "BMI = " << bmi(weight, height)<< endl;

    cout << "Daily Calories = "<< calories(weight) << endl;

    cout << "Burned Calories = " << burned(weight, time, sport) << endl;

    return 0;
}