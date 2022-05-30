#ifndef ESSAY_H
#define ESSAY_H
#include <iostream>
#include "GradeActivity.h"
using namespace std;
class Essay : public GradedActivity
{
    private:
    int Grammar;
    int Spelling;
    int Correct_Length;
    int Content;
    char letter_grade;
    static int Total_grade;
    public:
    friend istream & operator>>(istream &strm, Essay &obj);
    friend ostream & operator<<(ostream &out, const Essay &obj);
    void get_totalScore()
    {
        double total=0;
        total = Grammar + Spelling + Correct_Length + Content;
        Total_grade=total;
    }
};
 int Essay::Total_grade;
#endif
istream & operator>>(istream &strm, Essay &obj)
{
    cout<<"Enter the grammar point: ";
    strm >>obj.Grammar;
    while (obj.Grammar<0||obj.Grammar>30)
    {
        cout<<"Enter the valid grammar point:(0-30) ";
        strm >>obj.Grammar;
    }
    cout<<"Enter the spelling point: ";
    strm >>obj.Spelling;
    while (obj.Spelling<0||obj.Spelling>20)
    {
        cout<<"Enter the valid spelling point:(0-20) ";
        strm >>obj.Spelling;
    } 
    cout<<"Enter the correct length point: ";
    strm >>obj.Correct_Length;
    while (obj.Correct_Length<0||obj.Correct_Length>20)
    {
        cout<<"Enter the valid correct length point:(0-20) ";
        strm >>obj.Correct_Length;
    }
    cout<<"Enter the content point: ";
    strm >>obj.Content;
    while (obj.Content<0||obj.Correct_Length>30)
    {
        cout<<"Enter the valid content point: ";
        strm >>obj.Content;
    }           
    return strm;
}

ostream & operator<<(ostream &out, const Essay &obj)
{
    out <<"The total score is: "<<obj.Total_grade;

} 
//dùng = operator để lấy letterscore