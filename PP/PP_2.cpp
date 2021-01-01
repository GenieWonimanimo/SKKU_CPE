#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cctype>
using namespace std;

double var[26];
string alpha = "abcdefghijklmnopqrstuvwxyz";

namespace OPERATOR
{
    enum {ASSIGN, ADD, MUL, SUB, DIV, REM, POW};
}

int OperType(char oper);
double Calculator(string input, int operType);
void Solution(void);

int main(void)
{
    Solution();
    return 0;  
}


int OperType(char oper)
{
    if (oper == '=')
        return OPERATOR::ASSIGN;
    else if (oper == '+')
        return OPERATOR::ADD;
    else if (oper == '*')
        return OPERATOR::MUL;
    else if (oper == '-')
        return OPERATOR::SUB;
    else if (oper == '/')
        return OPERATOR::DIV;
    else if (oper == '%')
        return OPERATOR::REM;
    else if (oper == '^')
        return OPERATOR::POW;
    else
        return -1;
}

double Calculator(string input, int operType)
{
    double operand1, operand2;
    switch (operType)
    {
        case OPERATOR::ASSIGN:
        {
            double* pOperand;
            int assignOperIdx = input.find('=');
            for (int i = 0; i < assignOperIdx; i++)
                if (islower(input[i]))
                {
                    pOperand = &(var[input[i] - 'a']);
                    break;
                }

            int operType2;
            for (int i = assignOperIdx + 1; i < input.length(); i++)
            {
                operType2 = OperType(input[i]);
                if (operType2 != -1)
                    break;
            }
            
            *pOperand = Calculator(input.substr(assignOperIdx + 1), operType2);
            return *pOperand;
        }
        case OPERATOR::ADD:
        {
            int operIdx = input.find('+');
            int is_oper_var = input.substr(0, operIdx).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand1 = stod(input.substr(0, operIdx));
            else
                operand1 = var[input[is_oper_var] - 'a'];
            
            is_oper_var = input.substr(operIdx + 1).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand2 = stod(input.substr(operIdx + 1));
            else
                operand2 = var[input[operIdx + 1 + is_oper_var] - 'a'];
            
            return operand1 + operand2;
        }
        case OPERATOR::MUL:
        {
            int operIdx = input.find('*');
            int is_oper_var = input.substr(0, operIdx).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand1 = stod(input.substr(0, operIdx));
            else
                operand1 = var[input[is_oper_var] - 'a'];
            
            is_oper_var = input.substr(operIdx + 1).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand2 = stod(input.substr(operIdx + 1));
            else
                operand2 = var[input[operIdx + 1 + is_oper_var] - 'a'];

            return operand1 * operand2;
        }
        case OPERATOR::SUB:
        {
            int operIdx = input.find('-');
            int is_oper_var = input.substr(0, operIdx).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand1 = stod(input.substr(0, operIdx));
            else
                operand1 = var[input[is_oper_var] - 'a'];
            
            is_oper_var = input.substr(operIdx + 1).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand2 = stod(input.substr(operIdx + 1));
            else
                operand2 = var[input[operIdx + 1 + is_oper_var] - 'a'];

            return operand1 - operand2;
        }
        case OPERATOR::DIV:
        {
            int operIdx = input.find('/');
            int is_oper_var = input.substr(0, operIdx).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand1 = stod(input.substr(0, operIdx));
            else
                operand1 = var[input[is_oper_var] - 'a'];
            
            is_oper_var = input.substr(operIdx + 1).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand2 = stod(input.substr(operIdx + 1));
            else
                operand2 = var[input[operIdx + 1 + is_oper_var] - 'a'];

            return operand1 / operand2;
        }
        case OPERATOR::REM:
        {
            int operIdx = input.find('%');
            int is_oper_var = input.substr(0, operIdx).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand1 = stod(input.substr(0, operIdx));
            else
                operand1 = var[input[is_oper_var] - 'a'];
            
            is_oper_var = input.substr(operIdx + 1).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand2 = stod(input.substr(operIdx + 1));
            else
                operand2 = var[input[operIdx + 1 + is_oper_var] - 'a'];

            return int(operand1) % int(operand2);
        }
        case OPERATOR::POW:
        {
            int operIdx = input.find('^');
            int is_oper_var = input.substr(0, operIdx).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand1 = stod(input.substr(0, operIdx));
            else
                operand1 = var[input[is_oper_var] - 'a'];
            
            is_oper_var = input.substr(operIdx + 1).find_first_of(alpha);
            if (is_oper_var == string::npos)
                operand2 = stod(input.substr(operIdx + 1));
            else
                operand2 = var[input[operIdx + 1 + is_oper_var] - 'a'];

            return pow(operand1, operand2);
        }
        default:
        {
            for (int i = 0; i < input.length(); i++)
                if (islower(input[i]))
                    return var[input[i] - 'a'];
            return stod(input);
        }

    }
}

void Solution(void)
{
    while (1)
    {
        string input;
        getline(cin, input);
        if (input == "exit")
            break;
        
        int operType;
        for (int i = 0; i < input.length(); i++)
        {
            operType = OperType(input[i]);
            if (operType != -1)
                break;
        }
        cout << Calculator(input, operType) << endl;
    }
}